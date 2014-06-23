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
#include "itkGaussianSpatialFunction.h"

template class itk::GaussianSpatialFunction<double, 3u, itk::Point<double, 3u> >; //Instantiated 6 times
template class itk::GaussianSpatialFunction<double, 2u, itk::Point<double, 2u> >; //Instantiated 46 times
template class itk::GaussianSpatialFunction<double, 1u, itk::Point<double, 1u> >; //Instantiated 12 times
