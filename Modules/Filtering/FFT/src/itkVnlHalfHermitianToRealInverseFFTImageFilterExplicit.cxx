#include "itkVnlHalfHermitianToRealInverseFFTImageFilter.h"

template class itk::VnlHalfHermitianToRealInverseFFTImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<double, 2u> >; //Instantiated 26 times
template class itk::VnlHalfHermitianToRealInverseFFTImageFilter<itk::Image<std::complex<float>, 2u>, itk::Image<float, 2u> >; //Instantiated 16 times
