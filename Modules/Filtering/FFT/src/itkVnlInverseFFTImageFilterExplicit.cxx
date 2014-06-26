#include "itkVnlInverseFFTImageFilter.h"

template class itk::VnlInverseFFTImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<double, 2u> >; //Instantiated 10 times
template class itk::VnlInverseFFTImageFilter<itk::Image<std::complex<float>, 2u>, itk::Image<float, 2u> >; //Instantiated
                                                                                                           //8
                                                                                                           //times
