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
#include "itkImageTransformer.h"

template class itk::ImageTransformer<itk::Image<itk::Vector<unsigned char, 2u>, 2u> >; //Instantiated 10 times
template class itk::ImageTransformer<itk::Image<short, 2u> >; //Instantiated 48 times
template class itk::ImageTransformer<itk::Image<itk::RGBPixel<unsigned char>, 2u> >; //Instantiated 6 times
