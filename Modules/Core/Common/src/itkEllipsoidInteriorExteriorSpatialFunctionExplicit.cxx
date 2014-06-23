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
#include "itkEllipsoidInteriorExteriorSpatialFunction.h"

template class itk::EllipsoidInteriorExteriorSpatialFunction<3u, itk::Point<double, 3u> >; //Instantiated 9 times
template class itk::EllipsoidInteriorExteriorSpatialFunction<1u, itk::Point<double, 1u> >; //Instantiated 6 times
template class itk::EllipsoidInteriorExteriorSpatialFunction<2u, itk::Point<double, 2u> >; //Instantiated 74 times
template class itk::EllipsoidInteriorExteriorSpatialFunction<4u, itk::Point<double, 4u> >; //Instantiated 6 times
