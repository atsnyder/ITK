#ifndef __ExplicitInstantiation_itkFloodFilledFunctionConditionalConstIterator_h__
#define __ExplicitInstantiation_itkFloodFilledFunctionConditionalConstIterator_h__
#include "itkEllipsoidInteriorExteriorSpatialFunction.h"
#include "itkSphereSpatialFunction.h"
#include "itkBinaryThresholdSpatialFunction.h"
//exclude MahalanobisDistanceThresholdImageFunction
//exclude BinaryThresholdImageFunction
//exclude EllipseSpatialObject
//exclude SphereSignedDistanceFunction
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 2u>, itk::SphereSpatialFunction<2u, itk::Point<double, 2u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 1u>, itk::EllipsoidInteriorExteriorSpatialFunction<1u, itk::Point<double, 1u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 4u>, itk::EllipsoidInteriorExteriorSpatialFunction<4u, itk::Point<double, 4u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<int, 3u>, itk::SphereSpatialFunction<3u, itk::Point<double, 3u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::SphereSpatialFunction<3u, itk::Point<double, 3u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 3u>, itk::EllipsoidInteriorExteriorSpatialFunction<3u, itk::Point<double, 3u> > >;
extern template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 2u>, itk::EllipsoidInteriorExteriorSpatialFunction<2u, itk::Point<double, 2u> > >;
#endif //__ExplicitInstantiation_itkFloodFilledFunctionConditionalConstIterator_h__