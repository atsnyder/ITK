#ifndef __ExplicitInstantiation_itkAttributeSelectionLabelMapFilter_h__
#define __ExplicitInstantiation_itkAttributeSelectionLabelMapFilter_h__
extern template class itk::AttributeSelectionLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Functor::LabelLabelObjectAccessor<itk::LabelObject<unsigned char, 2u> > >;
extern template class itk::AttributeSelectionLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >, itk::Functor::LabelLabelObjectAccessor<itk::ShapeLabelObject<unsigned char, 2u> > >;
#endif //__ExplicitInstantiation_itkAttributeSelectionLabelMapFilter_h__