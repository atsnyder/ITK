"""Parse For Explicit Instantiation

Usage:
  ParseForExplicitInstantiation.py --classFile <pathToITKTemplateHeader>
  ParseForExplicitInstantiation.py [--minRepeats=<repeatNum>] --classFile <pathToITKTemplateHeader>
  ParseForExplicitInstantiation.py (-h | --help)

Options:
  -h --help                 Show this screen.
  --version                 Show version.
  --classFile               An ITK compliant header file with a templated class in it.
  --minRepeats=<repeatNum>  The minimum number of times an instantiation must show up to make it explicit [default: 10].
"""

"""
#~/src/Slicer-03 ~/Dashboard/src/ITK-ccache/ ; do


for test_dir in ~/src/NEP-11/ITKv4-build; do
  for i in $(find ${test_dir} -name "*.o") ; do
    nm $i | c++filt |fgrep -v " U "|grep " S " |fgrep -v "(.eh)" | grep "itk::" |grep "::~";
  done ;
done |tee ~/Symbols.list

###for SRC_DIR in $(find  ITK/Modules -name src -type d |fgrep -v ThirdParty |fgrep "/Common/"); do

DONE ITK/Modules/Core/Common
DONE ITK/Modules/IO/ImageBase
DONE ITK/Modlules/Core/FiniteDifference

ITK/Modules/IO/NIFTI
ITK/Modules/Core/TestKernel
ITK/Modules/Bridge/VTK
ITK/Modules/Bridge/VtkGlue
ITK/Modules/Compatibility/Deprecated
ITK/Modules/Core/GPUCommon
ITK/Modules/Core/GPUFiniteDifference
ITK/Modules/Core/Mesh
ITK/Modules/Core/QuadEdgeMesh
ITK/Modules/Core/SpatialObjects

ITK/Modules/Filtering/BiasCorrection
ITK/Modules/Filtering/FFT
ITK/Modules/Filtering/GPUAnisotropicSmoothing
ITK/Modules/Filtering/GPUImageFilterBase
ITK/Modules/Filtering/GPUSmoothing
ITK/Modules/Filtering/GPUThresholding
ITK/Modules/Filtering/LabelMap
ITK/Modules/Filtering/Path
ITK/Modules/IO/BioRad
ITK/Modules/IO/BMP
ITK/Modules/IO/CSV
ITK/Modules/IO/DCMTK
ITK/Modules/IO/GDCM
ITK/Modules/IO/GE
ITK/Modules/IO/GIPL
ITK/Modules/IO/HDF5
ITK/Modules/IO/IPL
ITK/Modules/IO/JPEG
ITK/Modules/IO/LSM
ITK/Modules/IO/Mesh
ITK/Modules/IO/Meta
ITK/Modules/IO/MINC
ITK/Modules/IO/MRC
ITK/Modules/IO/NIFTI
ITK/Modules/IO/NRRD
ITK/Modules/IO/PhilipsREC
ITK/Modules/IO/PNG
ITK/Modules/IO/Siemens
ITK/Modules/IO/SpatialObjects
ITK/Modules/IO/Stimulate
ITK/Modules/IO/TIFF
ITK/Modules/IO/TransformBase
ITK/Modules/IO/TransformHDF5
ITK/Modules/IO/TransformInsightLegacy
ITK/Modules/IO/TransformMatlab
ITK/Modules/IO/VTK
ITK/Modules/IO/XML
ITK/Modules/Nonunit/Review
ITK/Modules/Numerics/FEM
ITK/Modules/Numerics/Optimizers
ITK/Modules/Numerics/Optimizersv4
ITK/Modules/Numerics/Polynomials
ITK/Modules/Numerics/Statistics
ITK/Modules/Registration/GPUPDEDeformable
ITK/Modules/Segmentation/BioCell
ITK/Modules/Segmentation/KLMRegionGrowing
ITK/Modules/Segmentation/Watersheds
ITK/Modules/Video/BridgeOpenCV
ITK/Modules/Video/BridgeVXL
ITK/Modules/Video/Core
ITK/Modules/Video/IO

WHAT_TO_DO=TestKernel

for SRC_DIR in $(find  ITK/Modules -name src -type d |fgrep -v ThirdParty|fgrep "/${WHAT_TO_DO}/"); do
  INCLUDE_DIR=$(dirname $SRC_DIR)/include
  cd ${INCLUDE_DIR}
  echo ${INCLUDE_DIR}

  for i in $(ls *.h|fgrep -v "Explicit.h") ; do
    python ITK/Utilities/Maintenance/ParseForExplicitInstantiation.py --classFile $i --minRepeats=3 ;
  done
done

"""
__author__ = 'johnsonhj'

import os
import sys

import collections
import re
import docopt

class ProcessClassFromFile:
    def __init__(self, inputHeader, minimumRepeatNumber,inputSymbolsFile='/scratch/kent/itktest/NoExplicit-build/Symbols.list' ):

        self.minimumRepeatNumber = minimumRepeatNumber

        self.inputHeaderFullPath=os.path.realpath(inputHeader)
        self.FileClassToMakeExplicit=os.path.basename(self.inputHeaderFullPath)
        self.BaseClassName=self.FileClassToMakeExplicit.replace('itk','').replace('.h','')
        self.basePath=os.path.dirname(os.path.dirname(self.inputHeaderFullPath))
        print self.basePath
        print self.BaseClassName

        self.ExplicitHeaderFileName = os.path.join(self.basePath,"include","itk{0}Explicit.h".format(self.BaseClassName))
        self.CodeFileName = os.path.join(self.basePath,"src","itk{0}Explicit.cxx".format(self.BaseClassName))
        self._ParseForExtraDirectives()
        self.HeaderString = ""
        self.CodeString = ""
        self._ParseSymbolFile(inputSymbolsFile)
        self._MakeHeaderAndCodeStrings()
        self._GenerateFiles()
        self.ITKCopyright = """/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
"""
    def _ParseSymbolFile(self,inputSymbolsFile):
        self.SymbolsMapping = collections.defaultdict(int)

        nm_link_objects = re.compile("[0-9a-f]* S itk::"+self.BaseClassName+"<(.*)>::~"+self.BaseClassName+"\(\)")

        with open(inputSymbolsFile,'r') as isf:
            all_lines = isf.readlines()

        for thisline in all_lines:
            # Do requested substitutions
            for subsPat in self.subsPatterns:
                thisline = thisline.replace("std::__1::","std::")
                thisline = thisline.replace(subsPat[0],subsPat[1])
            # Remove items from exclude matches
            for excludePat in self.excludePatterns:
                if thisline.find(excludePat) != -1:
                    thisline = ""
            nm_search_match = nm_link_objects.search(thisline)
            if nm_search_match:
                TemplatePayLoad = nm_search_match.groups()[0]
                TemplateInstance = "itk::{0}<{1}>".format(self.BaseClassName,TemplatePayLoad)
                self.SymbolsMapping[TemplateInstance] += 1
            else:
                pass

        ## Remove low frequency items
        for key in self.SymbolsMapping.keys():
            if self.SymbolsMapping[key] < minRepeats:
                self.SymbolsMapping.pop(key, None)


    description = """A class to process and build the explicit instantiations of ITK
This file is intended to parse the outputs from nm on the ITK tree
to help auto-create explicit instantiations that are commonly used
so that build times are minimized."""
    author = "Hans J. Johnson"
    std_substitution = ('std::__1::', 'std::')

    def _ParseForExtraDirectives(self):
        exclude_line_re = re.compile("//exclude *([^ ]*) *")
        subs_line_re = re.compile("//subs  *([^ ]*) *([^ ]*)")
        self.extraIncludes = list()
        self.excludePatterns = list()
        self.subsPatterns = list()
        if os.path.exists(self.ExplicitHeaderFileName):
            with open(self.ExplicitHeaderFileName,'r') as readFile:
                all_lines = readFile.readlines()
            all_lines = [ thisline.rstrip() for thisline in all_lines ]

            for thisline in all_lines:
                if thisline.find("#include") != -1:
                    self.extraIncludes.append(thisline)
                exclude_search_match = exclude_line_re.search(thisline)
                if exclude_search_match:
                    self.excludePatterns.append(exclude_search_match.groups()[0])
                subs_search_match = subs_line_re.search(thisline)
                if subs_search_match:
                    self.subsPatterns.append( (subs_search_match.groups()[0],subs_search_match.groups()[1]) )
            print("#"*80)
            print(self.extraIncludes)
            print(self.excludePatterns)
            print(self.subsPatterns)

    def _NoWorkToDo(self):
        print(len(self.SymbolsMapping.keys()))
        print(len(self.excludePatterns))
        print(len(self.subsPatterns))

        return len(self.SymbolsMapping.keys()) == 0 and len(self.excludePatterns) == 0 and len(self.subsPatterns) == 0


    def _MakeHeaderAndCodeStrings(self):

        if self._NoWorkToDo():
            print("No matching expansions!")
            return
        HeaderString = self.ITKCopyright
        HeaderString+="""#ifndef __itk{0}Explicit_h
#define __itk{0}Explicit_h
""".format(self.BaseClassName)

        for extraInclude in self.extraIncludes:
            HeaderString += "{0}\n".format(extraInclude)
        for excludePat in self.excludePatterns:
            HeaderString += "//exclude {0}\n".format(excludePat)
        for subsPat in self.subsPatterns:
            HeaderString += "//subs {0} {1}\n".format(subsPat[0],subsPat[1])
        for key in self.SymbolsMapping.keys():
            HeaderString += "extern template class {0};\n".format(key)
        HeaderString += "#endif //__itk{0}Explicit_h\n".format(self.BaseClassName)

        CodeString= self.ITKCopyright
        if len(self.SymbolsMapping.keys()) >= 1:
            CodeString="""#include "itk{0}.h"\n""".format(self.BaseClassName)
            for key in self.SymbolsMapping.keys():
                CodeString += "\ntemplate class {0}; //Instantiated {1} times".format(key,self.SymbolsMapping[key])
            CodeString += "\n"

        self.CodeString = CodeString
        self.HeaderString = HeaderString
        print "==CodeString"+"="*90
        print self.CodeString
        print "==HeaderString"+"="*90
        print self.HeaderString

    def _GenerateFiles(self):
        if not self._NoWorkToDo():
            if len(self.CodeString) > 1:
                with open(self.CodeFileName,'w') as cf:
                    cf.write(self.CodeString)
            else:
                print("CodeString empty for {0}".format(self.inputHeaderFullPath))
            if len(self.HeaderString) > 1:
                with open(self.ExplicitHeaderFileName,'w') as hf:
                    hf.write(self.HeaderString)
                self._FixupHeader()
            else:
                print("HeaderString empty for {0}".format(self.inputHeaderFullPath))
        else:
            print("No processing required for {0}".format(self.inputHeaderFullPath))


    def _FixupHeader(self):
        payloadToAdd="""#ifdef ITK_COMMON_EXPLICIT_INSTANTIATION
#include "{0}"
#endif

""".format(os.path.basename(self.ExplicitHeaderFileName))
        with open(self.inputHeaderFullPath,'r') as readFile:
            all_lines = readFile.readlines()
        PayloadHeaderCount = 0
        for thisline in all_lines:
            if thisline.find('#ifdef ITK_COMMON_EXPLICIT_INSTANTIATION') == 0:
                PayloadHeaderCount += 1
        if PayloadHeaderCount == 0:
            all_lines.insert(-1,payloadToAdd) #Add payload one line before end of file

            outCode="".join(all_lines)
            with open(self.inputHeaderFullPath,'w') as writeFile:
                writeFile.write(outCode)
        elif PayloadHeaderCount == 1:
            print("{0} already has include payload.".format(self.inputHeaderFullPath))
        else:
            print("{0} has duplicate include payload: {1}.".format(self.inputHeaderFullPath,PayloadHeaderCount))


from docopt import docopt
if __name__ == '__main__':
    arguments = docopt(__doc__, version='ParseForExplicitInstantiation 1.0')
    print(arguments)
    headFileName=arguments['<pathToITKTemplateHeader>']
    minRepeats=int(arguments['--minRepeats'])
    print minRepeats

    myProcessor=ProcessClassFromFile(headFileName,minRepeats)
    #SymbolsMapping = myProcessor.GetSymbolsMapping()
    #for key in SymbolsMapping.keys():
    #    print("{0} : {1}".format(SymbolsMapping[key],key))
