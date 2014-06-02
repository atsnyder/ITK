#include "itkFloodFilledFunctionConditionalConstIterator.h"

template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 2u>, itk::SphereSpatialFunction<2u, itk::Point<double, 2u> > >; //Instantiated 3 times
template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 1u>, itk::EllipsoidInteriorExteriorSpatialFunction<1u, itk::Point<double, 1u> > >; //Instantiated 9 times
template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 4u>, itk::EllipsoidInteriorExteriorSpatialFunction<4u, itk::Point<double, 4u> > >; //Instantiated 6 times
template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<int, 3u>, itk::SphereSpatialFunction<3u, itk::Point<double, 3u> > >; //Instantiated 3 times
template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::SphereSpatialFunction<3u, itk::Point<double, 3u> > >; //Instantiated 3 times
template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 3u>, itk::EllipsoidInteriorExteriorSpatialFunction<3u, itk::Point<double, 3u> > >; //Instantiated 6 times
template class itk::FloodFilledFunctionConditionalConstIterator<itk::Image<bool, 2u>, itk::EllipsoidInteriorExteriorSpatialFunction<2u, itk::Point<double, 2u> > >; //Instantiated 111 times