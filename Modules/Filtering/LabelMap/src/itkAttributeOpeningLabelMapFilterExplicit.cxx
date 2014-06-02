#include "itkAttributeOpeningLabelMapFilter.h"

template class itk::AttributeOpeningLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > >; //Instantiated 4 times
template class itk::AttributeOpeningLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > >; //Instantiated 4 times