#include "itkBinaryImageToShapeLabelMapFilter.h"

template class itk::BinaryImageToShapeLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> > >; //Instantiated 4 times