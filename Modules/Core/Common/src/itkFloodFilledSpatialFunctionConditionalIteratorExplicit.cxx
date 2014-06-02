#include "itkFloodFilledSpatialFunctionConditionalIterator.h"

template class itk::FloodFilledSpatialFunctionConditionalIterator<itk::Image<bool, 1u>, itk::EllipsoidInteriorExteriorSpatialFunction<1u, itk::Point<double, 1u> > >; //Instantiated 6 times
template class itk::FloodFilledSpatialFunctionConditionalIterator<itk::Image<bool, 3u>, itk::EllipsoidInteriorExteriorSpatialFunction<3u, itk::Point<double, 3u> > >; //Instantiated 4 times
template class itk::FloodFilledSpatialFunctionConditionalIterator<itk::Image<bool, 4u>, itk::EllipsoidInteriorExteriorSpatialFunction<4u, itk::Point<double, 4u> > >; //Instantiated 4 times
template class itk::FloodFilledSpatialFunctionConditionalIterator<itk::Image<bool, 2u>, itk::EllipsoidInteriorExteriorSpatialFunction<2u, itk::Point<double, 2u> > >; //Instantiated 74 times