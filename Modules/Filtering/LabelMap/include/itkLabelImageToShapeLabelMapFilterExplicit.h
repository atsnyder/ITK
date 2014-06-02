#ifndef __ExplicitInstantiation_itkLabelImageToShapeLabelMapFilter_h__
#define __ExplicitInstantiation_itkLabelImageToShapeLabelMapFilter_h__
extern template class itk::LabelImageToShapeLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >;
extern template class itk::LabelImageToShapeLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> > >;
#endif //__ExplicitInstantiation_itkLabelImageToShapeLabelMapFilter_h__