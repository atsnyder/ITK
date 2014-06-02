#include "itkStatisticsLabelMapFilter.h"

template class itk::StatisticsLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 10 times
template class itk::StatisticsLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> >; //Instantiated 8 times
template class itk::StatisticsLabelMapFilter<itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >, itk::Image<unsigned char, 2u> >; //Instantiated 6 times