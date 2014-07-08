#include "itkFixedArray.h"

template class itk::FixedArray<itk::Neighborhood<double, 3u, itk::NeighborhoodAllocator<double> >, 6u>; //Instantiated 6 times
template class itk::FixedArray<itk::SmartPointer<itk::Image<float, 3u> >, 3u>; //Instantiated 6 times
template class itk::FixedArray<itk::SmartPointer<itk::Image<double, 2u> >, 2u>; //Instantiated 6 times
template class itk::FixedArray<itk::SmartPointer<itk::Image<double, 3u> >, 3u>; //Instantiated 16 times
