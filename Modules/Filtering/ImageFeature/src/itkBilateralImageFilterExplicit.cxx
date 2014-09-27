#include "itkBilateralImageFilter.h"

template class itk::BilateralImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 9 times
template class itk::BilateralImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 12 times
