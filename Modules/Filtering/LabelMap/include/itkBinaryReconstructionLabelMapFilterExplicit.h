#ifndef __ExplicitInstantiation_itkBinaryReconstructionLabelMapFilter_h__
#define __ExplicitInstantiation_itkBinaryReconstructionLabelMapFilter_h__
extern template class itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<unsigned char, 3u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > >;
extern template class itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<unsigned char, 2u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > >;
#endif //__ExplicitInstantiation_itkBinaryReconstructionLabelMapFilter_h__