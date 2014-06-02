#ifndef __ExplicitInstantiation_itkLabelMapToBinaryImageFilter_h__
#define __ExplicitInstantiation_itkLabelMapToBinaryImageFilter_h__
extern template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >;
extern template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >;
#endif //__ExplicitInstantiation_itkLabelMapToBinaryImageFilter_h__