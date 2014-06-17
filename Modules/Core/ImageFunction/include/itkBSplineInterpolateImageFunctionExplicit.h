#ifndef __ExplicitInstantiation_itkBSplineInterpolateImageFunction_h__
#define __ExplicitInstantiation_itkBSplineInterpolateImageFunction_h__
extern template class itk::BSplineInterpolateImageFunction<itk::Image<double, 2u>, double, double>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<float, 2u>, float, float>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<double, 1u>, double, double>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<float, 3u>, double, double>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<float, 2u>, double, double>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<unsigned char, 2u>, double, double>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<float, 2u>, double, float>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<double, 3u>, double, double>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<unsigned int, 3u>, double, double>;
extern template class itk::BSplineInterpolateImageFunction<itk::Image<double, 4u>, double, double>;
#endif //__ExplicitInstantiation_itkBSplineInterpolateImageFunction_h__