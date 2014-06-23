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
#include "itkMinimumMaximumImageCalculator.h"

template class itk::MinimumMaximumImageCalculator<itk::Image<double, 2u> >; //Instantiated 24 times
template class itk::MinimumMaximumImageCalculator<itk::Image<float, 2u> >; //Instantiated 118 times
template class itk::MinimumMaximumImageCalculator<itk::Image<short, 3u> >; //Instantiated 8 times
template class itk::MinimumMaximumImageCalculator<itk::Image<float, 3u> >; //Instantiated 12 times
template class itk::MinimumMaximumImageCalculator<itk::Image<unsigned char, 2u> >; //Instantiated 62 times
template class itk::MinimumMaximumImageCalculator<itk::Image<unsigned short, 2u> >; //Instantiated 4 times
template class itk::MinimumMaximumImageCalculator<itk::Image<short, 2u> >; //Instantiated 18 times
template class itk::MinimumMaximumImageCalculator<itk::Image<double, 3u> >; //Instantiated 4 times
template class itk::MinimumMaximumImageCalculator<itk::Image<unsigned char, 3u> >; //Instantiated 16 times
