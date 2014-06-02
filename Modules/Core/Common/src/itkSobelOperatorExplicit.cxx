#include "itkSobelOperator.h"

template class itk::SobelOperator<float, 2u, itk::NeighborhoodAllocator<float> >; //Instantiated 8 times
template class itk::SobelOperator<double, 2u, itk::NeighborhoodAllocator<double> >; //Instantiated 4 times
template class itk::SobelOperator<float, 3u, itk::NeighborhoodAllocator<float> >; //Instantiated 4 times