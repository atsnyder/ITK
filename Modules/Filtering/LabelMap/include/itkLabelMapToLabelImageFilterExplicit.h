#ifndef __ExplicitInstantiation_itkLabelMapToLabelImageFilter_h__
#define __ExplicitInstantiation_itkLabelMapToLabelImageFilter_h__
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >, itk::Image<unsigned long, 2u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned long, 2u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned char, 3u, int> >, itk::Image<unsigned char, 3u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::LabelObject<signed char, 2u> >, itk::Image<signed char, 2u> >;
extern template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
#endif //__ExplicitInstantiation_itkLabelMapToLabelImageFilter_h__