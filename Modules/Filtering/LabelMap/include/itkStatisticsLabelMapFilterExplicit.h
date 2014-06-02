#ifndef __ExplicitInstantiation_itkStatisticsLabelMapFilter_h__
#define __ExplicitInstantiation_itkStatisticsLabelMapFilter_h__
extern template class itk::StatisticsLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::StatisticsLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >;
extern template class itk::StatisticsLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >;
#endif //__ExplicitInstantiation_itkStatisticsLabelMapFilter_h__