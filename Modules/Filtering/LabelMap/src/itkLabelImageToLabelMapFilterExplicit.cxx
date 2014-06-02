#include "itkLabelImageToLabelMapFilter.h"

template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> > >; //Instantiated 16 times
template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned long, 2u> > >; //Instantiated 4 times
template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned char, 3u> > >; //Instantiated 4 times
template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> > >; //Instantiated 12 times
template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned char, 2u> > >; //Instantiated 42 times
template class itk::LabelImageToLabelMapFilter<itk::Image<signed char, 2u>, itk::LabelMap<itk::LabelObject<signed char, 2u> > >; //Instantiated 24 times
template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> > >; //Instantiated 10 times
template class itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned char, 3u, int> > >; //Instantiated 6 times