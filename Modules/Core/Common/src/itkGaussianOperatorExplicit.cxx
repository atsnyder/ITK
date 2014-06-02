#include "itkGaussianOperator.h"

template class itk::GaussianOperator<float, 3u, itk::NeighborhoodAllocator<float> >; //Instantiated 26 times
template class itk::GaussianOperator<double, 3u, itk::NeighborhoodAllocator<double> >; //Instantiated 52 times
template class itk::GaussianOperator<float, 2u, itk::NeighborhoodAllocator<float> >; //Instantiated 76 times
template class itk::GaussianOperator<double, 4u, itk::NeighborhoodAllocator<double> >; //Instantiated 4 times
template class itk::GaussianOperator<double, 2u, itk::NeighborhoodAllocator<double> >; //Instantiated 114 times