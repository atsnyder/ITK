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
#include "itkImageSliceConstIteratorWithIndex.h"

template class itk::ImageSliceConstIteratorWithIndex<itk::Image<float, 2u> >; //Instantiated 8 times
template class itk::ImageSliceConstIteratorWithIndex<itk::Image<itk::Offset<2u>, 2u> >; //Instantiated 4 times
template class itk::ImageSliceConstIteratorWithIndex<itk::Image<unsigned char, 2u> >; //Instantiated 4 times
template class itk::ImageSliceConstIteratorWithIndex<itk::Image<unsigned char, 3u> >; //Instantiated 38 times
