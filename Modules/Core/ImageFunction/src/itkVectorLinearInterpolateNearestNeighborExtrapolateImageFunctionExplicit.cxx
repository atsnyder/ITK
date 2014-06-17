#include "itkVectorLinearInterpolateNearestNeighborExtrapolateImageFunction.h"

template class itk::VectorLinearInterpolateNearestNeighborExtrapolateImageFunction<itk::Image<itk::Vector<double, 3u>, 3u>, double>; //Instantiated 16 times
template class itk::VectorLinearInterpolateNearestNeighborExtrapolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, double>; //Instantiated 4 times
template class itk::VectorLinearInterpolateNearestNeighborExtrapolateImageFunction<itk::Image<itk::Vector<double, 2u>, 2u>, double>; //Instantiated 12 times
template class itk::VectorLinearInterpolateNearestNeighborExtrapolateImageFunction<itk::Image<itk::Vector<float, 2u>, 2u>, double>; //Instantiated 8 times