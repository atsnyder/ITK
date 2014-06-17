#ifndef __ExplicitInstantiation_itkWindowedSincInterpolateImageFunction_h__
#define __ExplicitInstantiation_itkWindowedSincInterpolateImageFunction_h__
extern template class itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ConstantBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >, double>;
extern template class itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 3u>, 2u, itk::Function::HammingWindowFunction<2u, double, double>, itk::ConstantBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >, double>;
#endif //__ExplicitInstantiation_itkWindowedSincInterpolateImageFunction_h__