#include "itkDiffeomorphicDemonsRegistrationFilter.h"

template class itk::DiffeomorphicDemonsRegistrationFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 3 times
template class itk::DiffeomorphicDemonsRegistrationFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 3 times