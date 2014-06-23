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
#include "itkImageLinearIteratorWithIndex.h"

template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 2u> >; //Instantiated 70 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 2u> >; //Instantiated 302 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 3u>, 3u> >; //Instantiated 18 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 3u> >; //Instantiated 4 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<short, 3u> >; //Instantiated 8 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned char, 2u> >; //Instantiated 62 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned short, 2u> >; //Instantiated 24 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 1u> >; //Instantiated 4 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::RGBPixel<unsigned char>, 2u> >; //Instantiated 4 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned short, 3u> >; //Instantiated 6 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 20 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 1u> >; //Instantiated 6 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 3u> >; //Instantiated 46 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned char, 3u> >; //Instantiated 24 times
template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 3u> >; //Instantiated 134 times
