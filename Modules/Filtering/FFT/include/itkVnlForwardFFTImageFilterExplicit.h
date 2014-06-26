#ifndef __ExplicitInstantiation_itkVnlForwardFFTImageFilter_h__
#define __ExplicitInstantiation_itkVnlForwardFFTImageFilter_h__
extern template class itk::VnlForwardFFTImageFilter<itk::Image<double, 1u>, itk::Image<std::complex<double>, 1u> >;
extern template class itk::VnlForwardFFTImageFilter<itk::Image<float, 2u>, itk::Image<std::complex<float>, 2u> >;
extern template class itk::VnlForwardFFTImageFilter<itk::Image<double, 2u>, itk::Image<std::complex<double>, 2u> >;
#endif //__ExplicitInstantiation_itkVnlForwardFFTImageFilter_h__