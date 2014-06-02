#include "itkGaussianDerivativeOperator.h"

template class itk::GaussianDerivativeOperator<float, 2u, itk::NeighborhoodAllocator<float> >; //Instantiated 6 times
template class itk::GaussianDerivativeOperator<double, 1u, itk::NeighborhoodAllocator<double> >; //Instantiated 4 times