#include "itkESMDemonsRegistrationFunction.h"

template class itk::ESMDemonsRegistrationFunction<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 3 times
template class itk::ESMDemonsRegistrationFunction<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 6 times