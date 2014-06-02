#include "itkLabelSelectionLabelMapFilter.h"

template class itk::LabelSelectionLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> > >; //Instantiated 12 times
template class itk::LabelSelectionLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >; //Instantiated 4 times