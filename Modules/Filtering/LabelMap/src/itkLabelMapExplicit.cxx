#include "itkLabelMap.h"

template class itk::LabelMap<itk::LabelObject<unsigned char, 3u> >; //Instantiated 6 times
template class itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >; //Instantiated 4 times
template class itk::LabelMap<itk::LabelObject<signed char, 2u> >; //Instantiated 52 times
template class itk::LabelMap<itk::ShapeLabelObject<unsigned char, 2u> >; //Instantiated 18 times
template class itk::LabelMap<itk::StatisticsLabelObject<unsigned long, 2u> >; //Instantiated 6 times
template class itk::LabelMap<itk::LabelObject<unsigned long, 2u> >; //Instantiated 8 times
template class itk::LabelMap<itk::ShapeLabelObject<unsigned char, 3u> >; //Instantiated 12 times
template class itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >; //Instantiated 8 times
template class itk::LabelMap<itk::LabelObject<unsigned long, 3u> >; //Instantiated 4 times
template class itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 3u> >; //Instantiated 8 times
template class itk::LabelMap<itk::AttributeLabelObject<unsigned char, 3u, int> >; //Instantiated 6 times
template class itk::LabelMap<itk::LabelObject<unsigned char, 2u> >; //Instantiated 44 times
template class itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >; //Instantiated 4 times
template class itk::LabelMap<itk::StatisticsLabelObject<unsigned char, 2u> >; //Instantiated 10 times