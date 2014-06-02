#include "itkLabelMapToLabelImageFilter.h"

template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >; //Instantiated 12 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 10 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >, itk::Image<unsigned long, 2u> >; //Instantiated 6 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 4 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned long, 2u> >; //Instantiated 4 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned char, 3u, int> >, itk::Image<unsigned char, 3u> >; //Instantiated 6 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 26 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >; //Instantiated 4 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >; //Instantiated 8 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::LabelObject<signed char, 2u> >, itk::Image<signed char, 2u> >; //Instantiated 24 times
template class itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 18 times