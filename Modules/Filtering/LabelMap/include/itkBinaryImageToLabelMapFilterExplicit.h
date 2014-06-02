#ifndef __ExplicitInstantiation_itkBinaryImageToLabelMapFilter_h__
#define __ExplicitInstantiation_itkBinaryImageToLabelMapFilter_h__
extern template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > >;
extern template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > >;
extern template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >;
extern template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> > >;
extern template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> > >;
extern template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned char, 3u> > >;
extern template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned char, 2u> > >;
#endif //__ExplicitInstantiation_itkBinaryImageToLabelMapFilter_h__