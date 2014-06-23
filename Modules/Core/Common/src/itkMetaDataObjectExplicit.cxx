/*=========================================================================
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
#include "itkMetaDataObject.h"

template class itk::MetaDataObject<float>; //Instantiated 16 times
template class itk::MetaDataObject<short>; //Instantiated 12 times
template class itk::MetaDataObject<unsigned short>; //Instantiated 8 times
template class itk::MetaDataObject<itk::Array<double> >; //Instantiated 28 times
template class itk::MetaDataObject<char>; //Instantiated 8 times
template class itk::MetaDataObject<bool>; //Instantiated 6 times
template class itk::MetaDataObject<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >; //Instantiated 50 times
template class itk::MetaDataObject<itk::Matrix<double, 3u, 3u> >; //Instantiated 24 times
template class itk::MetaDataObject<itk::Array<char> >; //Instantiated 4 times
template class itk::MetaDataObject<unsigned long>; //Instantiated 8 times
template class itk::MetaDataObject<unsigned int>; //Instantiated 36 times
template class itk::MetaDataObject<itk::Array<float> >; //Instantiated 4 times
template class itk::MetaDataObject<int>; //Instantiated 14 times
template class itk::MetaDataObject<double>; //Instantiated 14 times
template class itk::MetaDataObject<unsigned char>; //Instantiated 6 times
template class itk::MetaDataObject<long>; //Instantiated 6 times
