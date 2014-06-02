#include "itkLaplacianOperator.h"

template class itk::LaplacianOperator<float, 2u, itk::NeighborhoodAllocator<float> >; //Instantiated 12 times
template class itk::LaplacianOperator<double, 3u, itk::NeighborhoodAllocator<double> >; //Instantiated 4 times
template class itk::LaplacianOperator<double, 2u, itk::NeighborhoodAllocator<double> >; //Instantiated 10 times
template class itk::LaplacianOperator<float, 3u, itk::NeighborhoodAllocator<float> >; //Instantiated 6 times