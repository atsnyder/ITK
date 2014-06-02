#ifndef __ExplicitInstantiation_itkExtractImageFilter_h__
#define __ExplicitInstantiation_itkExtractImageFilter_h__
extern template class itk::ExtractImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >;
extern template class itk::ExtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::ExtractImageFilter<itk::Image<float, 2u>, itk::Image<int, 2u> >;
extern template class itk::ExtractImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::ExtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 2u> >;
extern template class itk::ExtractImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> >;
extern template class itk::ExtractImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >;
#endif //__ExplicitInstantiation_itkExtractImageFilter_h__