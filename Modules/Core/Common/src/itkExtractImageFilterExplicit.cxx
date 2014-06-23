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
#include "itkExtractImageFilter.h"

template class itk::ExtractImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >; //Instantiated 6 times
template class itk::ExtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >; //Instantiated 14 times
template class itk::ExtractImageFilter<itk::Image<float, 2u>, itk::Image<int, 2u> >; //Instantiated 12 times
template class itk::ExtractImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 44 times
template class itk::ExtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 2u> >; //Instantiated 6 times
template class itk::ExtractImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 6 times
template class itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 4 times
template class itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> >; //Instantiated 18 times
template class itk::ExtractImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >; //Instantiated 10 times
