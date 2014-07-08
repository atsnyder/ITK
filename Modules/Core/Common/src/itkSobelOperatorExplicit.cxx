#include "itkSobelOperator.h"

template class itk::SobelOperator<float, 2u, itk::NeighborhoodAllocator<float> >; //Instantiated 14 times
template class itk::SobelOperator<double, 3u, itk::NeighborhoodAllocator<double> >; //Instantiated 9 times
template class itk::SobelOperator<double, 2u, itk::NeighborhoodAllocator<double> >; //Instantiated 13 times
template class itk::SobelOperator<float, 3u, itk::NeighborhoodAllocator<float> >; //Instantiated 10 times
