#include "itkMahalanobisDistanceThresholdImageFunction.h"

template class itk::MahalanobisDistanceThresholdImageFunction<itk::Image<itk::RGBPixel<unsigned char>, 3u>, float>; //Instantiated 3 times
template class itk::MahalanobisDistanceThresholdImageFunction<itk::Image<itk::RGBPixel<unsigned char>, 2u>, float>; //Instantiated 6 times
template class itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<unsigned char, 2u>, float>; //Instantiated 3 times