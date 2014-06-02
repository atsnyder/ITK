#include "itkLabelMapToBinaryImageFilter.h"

template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 10 times
template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 4 times
template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 4 times
template class itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 6 times