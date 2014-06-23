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
#include "itkStreamingImageFilter.h"

template class itk::StreamingImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >; //Instantiated 6 times
template class itk::StreamingImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 10 times
template class itk::StreamingImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >; //Instantiated 26 times
template class itk::StreamingImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >; //Instantiated 14 times
template class itk::StreamingImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >; //Instantiated 20 times
template class itk::StreamingImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >; //Instantiated 4 times
template class itk::StreamingImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >; //Instantiated 40 times
template class itk::StreamingImageFilter<itk::Image<itk::Vector<float, 3u>, 2u>, itk::Image<itk::Vector<float, 3u>, 2u> >; //Instantiated 4 times
template class itk::StreamingImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 66 times
