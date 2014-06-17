#ifndef __ExplicitInstantiation_itkLinearInterpolateImageFunction_h__
#define __ExplicitInstantiation_itkLinearInterpolateImageFunction_h__
//exclude Vector
extern template class itk::LinearInterpolateImageFunction<itk::Image<float, 3u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned short, 2u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned char, 3u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<float, 3u>, float>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned int, 2u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<double, 3u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned int, 2u>, float>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<double, 1u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<float, 2u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned char, 2u>, float>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<double, 2u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<short, 3u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned short, 3u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned char, 3u>, float>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<char, 3u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<short, 2u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<unsigned char, 2u>, double>;
extern template class itk::LinearInterpolateImageFunction<itk::Image<float, 2u>, float>;
#endif //__ExplicitInstantiation_itkLinearInterpolateImageFunction_h__
