#include "itkPadLabelMapFilter.h"

template class itk::PadLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> > >; //Instantiated 10 times
template class itk::PadLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >; //Instantiated 4 times