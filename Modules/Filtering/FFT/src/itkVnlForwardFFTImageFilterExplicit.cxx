#include "itkVnlForwardFFTImageFilter.h"

template class itk::VnlForwardFFTImageFilter<itk::Image<double, 1u>, itk::Image<std::complex<double>, 1u> >; //Instantiated 4 times
template class itk::VnlForwardFFTImageFilter<itk::Image<float, 2u>, itk::Image<std::complex<float>, 2u> >; //Instantiated 10 times
template class itk::VnlForwardFFTImageFilter<itk::Image<double, 2u>, itk::Image<std::complex<double>, 2u> >; //Instantiated
                                                                                                             //8
                                                                                                             //times
