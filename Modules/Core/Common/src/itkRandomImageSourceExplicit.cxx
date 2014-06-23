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
#include "itkRandomImageSource.h"

template class itk::RandomImageSource<itk::Image<int, 3u> >; //Instantiated 10 times
template class itk::RandomImageSource<itk::Image<char, 3u> >; //Instantiated 12 times
template class itk::RandomImageSource<itk::Image<unsigned short, 2u> >; //Instantiated 12 times
template class itk::RandomImageSource<itk::Image<double, 2u> >; //Instantiated 4 times
template class itk::RandomImageSource<itk::Image<unsigned int, 3u> >; //Instantiated 6 times
template class itk::RandomImageSource<itk::Image<float, 2u> >; //Instantiated 38 times
template class itk::RandomImageSource<itk::Image<unsigned char, 3u> >; //Instantiated 12 times
template class itk::RandomImageSource<itk::Image<long, 3u> >; //Instantiated 6 times
template class itk::RandomImageSource<itk::Image<float, 3u> >; //Instantiated 18 times
template class itk::RandomImageSource<itk::Image<double, 3u> >; //Instantiated 8 times
template class itk::RandomImageSource<itk::Image<unsigned long, 3u> >; //Instantiated 6 times
template class itk::RandomImageSource<itk::Image<short, 2u> >; //Instantiated 8 times
template class itk::RandomImageSource<itk::Image<char, 2u> >; //Instantiated 4 times
template class itk::RandomImageSource<itk::Image<unsigned short, 3u> >; //Instantiated 10 times
template class itk::RandomImageSource<itk::Image<long long, 3u> >; //Instantiated 4 times
template class itk::RandomImageSource<itk::Image<unsigned char, 2u> >; //Instantiated 8 times
template class itk::RandomImageSource<itk::Image<unsigned long long, 3u> >; //Instantiated 4 times
template class itk::RandomImageSource<itk::Image<short, 3u> >; //Instantiated 10 times
