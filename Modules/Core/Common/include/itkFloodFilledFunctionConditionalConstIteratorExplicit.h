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
#ifndef __itkFloodFilledFunctionConditionalConstIteratorExplicit_h
#define __itkFloodFilledFunctionConditionalConstIteratorExplicit_h
#include "itkEllipsoidInteriorExteriorSpatialFunction.h"
#include "itkSphereSpatialFunction.h"
#include "itkBinaryThresholdSpatialFunction.h"
//exclude MahalanobisDistanceThresholdImageFunction
//exclude BinaryThresholdImageFunction
//exclude EllipseSpatialObject
//exclude SphereSignedDistanceFunction
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 1u>, itk::EllipsoidInteriorExteriorSpatialFunction<1u, itk::Point<double, 1u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 4u>, itk::EllipsoidInteriorExteriorSpatialFunction<4u, itk::Point<double, 4u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 3u>, itk::EllipsoidInteriorExteriorSpatialFunction<3u, itk::Point<double, 3u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 2u>, itk::EllipsoidInteriorExteriorSpatialFunction<2u, itk::Point<double, 2u> > >;
#endif //__itkFloodFilledFunctionConditionalConstIteratorExplicit_h
