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
#include "itkFiniteDifferenceFunction.h"

template class itk::FiniteDifferenceFunction<itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 26 times
template class itk::FiniteDifferenceFunction<itk::Image<itk::RGBPixel<float>, 2u> >; //Instantiated 4 times
template class itk::FiniteDifferenceFunction<itk::Image<itk::CovariantVector<float, 2u>, 2u> >; //Instantiated 4 times
template class itk::FiniteDifferenceFunction<itk::Image<itk::Vector<float, 3u>, 3u> >; //Instantiated 8 times
template class itk::FiniteDifferenceFunction<itk::Image<float, 3u> >; //Instantiated 18 times
template class itk::FiniteDifferenceFunction<itk::Image<itk::Vector<float, 3u>, 2u> >; //Instantiated 4 times
template class itk::FiniteDifferenceFunction<itk::Image<double, 3u> >; //Instantiated 4 times
template class itk::FiniteDifferenceFunction<itk::Image<float, 2u> >; //Instantiated
                                                                      //94
                                                                      //times
