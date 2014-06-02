#ifndef __ExplicitInstantiation_itkKLMRegionGrowImageFilter_h__
#define __ExplicitInstantiation_itkKLMRegionGrowImageFilter_h__
extern template class itk::KLMRegionGrowImageFilter<itk::Image<itk::Vector<unsigned char, 3u>, 1u>, itk::Image<itk::Vector<double, 3u>, 1u> >;
extern template class itk::KLMRegionGrowImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::KLMRegionGrowImageFilter<itk::Image<itk::Vector<double, 2u>, 5u>, itk::Image<itk::Vector<double, 2u>, 5u> >;
extern template class itk::KLMRegionGrowImageFilter<itk::Image<itk::Vector<short, 1u>, 4u>, itk::Image<itk::Vector<float, 1u>, 4u> >;
extern template class itk::KLMRegionGrowImageFilter<itk::Image<itk::Vector<short, 2u>, 3u>, itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::KLMRegionGrowImageFilter<itk::Image<itk::Vector<int, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> >;
#endif //__ExplicitInstantiation_itkKLMRegionGrowImageFilter_h__