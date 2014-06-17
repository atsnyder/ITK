#ifndef __ExplicitInstantiation_itkBSplineDecompositionImageFilter_h__
#define __ExplicitInstantiation_itkBSplineDecompositionImageFilter_h__
extern template class itk::BSplineDecompositionImageFilter<itk::Image<double, 1u>, itk::Image<double, 1u> >;
extern template class itk::BSplineDecompositionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::BSplineDecompositionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> >;
extern template class itk::BSplineDecompositionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::BSplineDecompositionImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u> >;
extern template class itk::BSplineDecompositionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >;
#endif //__ExplicitInstantiation_itkBSplineDecompositionImageFilter_h__