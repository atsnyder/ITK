#include "itkLabelImageToShapeLabelMapFilter.h"

template class itk::LabelImageToShapeLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >; //Instantiated 10 times
template class itk::LabelImageToShapeLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> > >; //Instantiated 12 times