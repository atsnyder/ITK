#include "itkLabelImageToStatisticsLabelMapFilter.h"

template class itk::LabelImageToStatisticsLabelMapFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> > >; //Instantiated 4 times
template class itk::LabelImageToStatisticsLabelMapFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> > >; //Instantiated 8 times