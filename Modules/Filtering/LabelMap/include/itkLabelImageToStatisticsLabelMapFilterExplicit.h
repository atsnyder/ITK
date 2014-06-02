#ifndef __ExplicitInstantiation_itkLabelImageToStatisticsLabelMapFilter_h__
#define __ExplicitInstantiation_itkLabelImageToStatisticsLabelMapFilter_h__
extern template class itk::LabelImageToStatisticsLabelMapFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> > >;
extern template class itk::LabelImageToStatisticsLabelMapFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> > >;
#endif //__ExplicitInstantiation_itkLabelImageToStatisticsLabelMapFilter_h__