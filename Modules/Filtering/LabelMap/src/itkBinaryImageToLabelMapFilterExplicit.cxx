#include "itkBinaryImageToLabelMapFilter.h"

template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > >; //Instantiated 6 times
template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > >; //Instantiated 6 times
template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >; //Instantiated 9 times
template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> > >; //Instantiated 9 times
template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> > >; //Instantiated 12 times
template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned char, 3u> > >; //Instantiated 3 times
template class itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned char, 2u> > >; //Instantiated 12 times