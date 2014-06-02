#ifndef __ExplicitInstantiation_itkShapeLabelMapFilter_h__
#define __ExplicitInstantiation_itkShapeLabelMapFilter_h__
extern template class itk::ShapeLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >, itk::Image<unsigned long, 2u> >;
extern template class itk::ShapeLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >;
extern template class itk::ShapeLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::ShapeLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::ShapeLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned long, 2u> >;
extern template class itk::ShapeLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::ShapeLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >;
#endif //__ExplicitInstantiation_itkShapeLabelMapFilter_h__