#include "itkAttributeSelectionLabelMapFilter.h"

template class itk::AttributeSelectionLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Functor::LabelLabelObjectAccessor<itk::LabelObject<unsigned char, 2u> > >; //Instantiated 12 times
template class itk::AttributeSelectionLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >, itk::Functor::LabelLabelObjectAccessor<itk::ShapeLabelObject<unsigned char, 2u> > >; //Instantiated 4 times