#ifndef __ExplicitInstantiation_itkLabelImageToLabelMapFilter_h__
#define __ExplicitInstantiation_itkLabelImageToLabelMapFilter_h__
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned long, 2u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned char, 3u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned char, 2u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<signed char, 2u>, itk::LabelMap<itk::LabelObject<signed char, 2u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> > >;
extern template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned char, 3u, int> > >;
#endif //__ExplicitInstantiation_itkLabelImageToLabelMapFilter_h__