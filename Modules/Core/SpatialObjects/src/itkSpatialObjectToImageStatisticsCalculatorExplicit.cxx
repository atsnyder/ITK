#include "itkSpatialObjectToImageStatisticsCalculator.h"

template class itk::SpatialObjectToImageStatisticsCalculator<itk::Image<unsigned char, 3u>, itk::EllipseSpatialObject<3u>, 3u>; //Instantiated 3 times
template class itk::SpatialObjectToImageStatisticsCalculator<itk::Image<unsigned char, 2u>, itk::EllipseSpatialObject<2u>, 1u>; //Instantiated 6 times