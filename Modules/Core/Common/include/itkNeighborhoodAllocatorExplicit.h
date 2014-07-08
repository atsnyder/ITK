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
#ifndef __itkNeighborhoodAllocatorExplicit_h
#define __itkNeighborhoodAllocatorExplicit_h
#include "itkVector.h"
#include "itkImage.h"
#include <deque>
//exclude LabelObjectLine
//exclude ANTSAffine3DTransform
extern template class itk::NeighborhoodAllocator<itk::Vector<float, 2u>*>;
extern template class itk::NeighborhoodAllocator<itk::Vector<float, 3u>*>;
extern template class itk::NeighborhoodAllocator<unsigned long>;
extern template class itk::NeighborhoodAllocator<short*>;
extern template class itk::NeighborhoodAllocator<float>;
extern template class itk::NeighborhoodAllocator<itk::Vector<double, 3u> >;
extern template class itk::NeighborhoodAllocator<unsigned char*>;
extern template class itk::NeighborhoodAllocator<unsigned char>;
extern template class itk::NeighborhoodAllocator<itk::Vector<double, 3u>*>;
extern template class itk::NeighborhoodAllocator<signed char>;
extern template class itk::NeighborhoodAllocator<double>;
extern template class itk::NeighborhoodAllocator<itk::Vector<float, 3u> >;
extern template class itk::NeighborhoodAllocator<short>;
extern template class itk::NeighborhoodAllocator<double*>;
extern template class itk::NeighborhoodAllocator<unsigned int>;
extern template class itk::NeighborhoodAllocator<int>;
extern template class itk::NeighborhoodAllocator<bool*>;
extern template class itk::NeighborhoodAllocator<long>;
extern template class itk::NeighborhoodAllocator<bool>;
extern template class itk::NeighborhoodAllocator<long*>;
extern template class itk::NeighborhoodAllocator<itk::Vector<double, 2u>*>;
extern template class itk::NeighborhoodAllocator<signed char*>;
extern template class itk::NeighborhoodAllocator<itk::Vector<double, 2u> >;
extern template class itk::NeighborhoodAllocator<unsigned long*>;
extern template class itk::NeighborhoodAllocator<unsigned short*>;
extern template class itk::NeighborhoodAllocator<unsigned short>;
extern template class itk::NeighborhoodAllocator<float*>;
extern template class itk::NeighborhoodAllocator<itk::Vector<float, 2u> >;
extern template class itk::NeighborhoodAllocator<unsigned int*>;
extern template class itk::NeighborhoodAllocator<int*>;
#endif //__itkNeighborhoodAllocatorExplicit_h
