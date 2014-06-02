#include "itkLabelGeometryImageFilter.h"

template class itk::LabelGeometryImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u> >; //Instantiated 3 times
template class itk::LabelGeometryImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 3 times