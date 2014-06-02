#include "itkImageDuplicator.h"

template class itk::ImageDuplicator<itk::Image<itk::Vector<double, 3u>, 4u> >; //Instantiated 8 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 8 times
template class itk::ImageDuplicator<itk::Image<float, 3u> >; //Instantiated 6 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<double, 2u>, 3u> >; //Instantiated 6 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<double, 3u>, 1u> >; //Instantiated 4 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<double, 2u>, 2u> >; //Instantiated 40 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<float, 1u>, 2u> >; //Instantiated 6 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<double, 1u>, 1u> >; //Instantiated 80 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<float, 3u>, 3u> >; //Instantiated 6 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<float, 1u>, 3u> >; //Instantiated 4 times
template class itk::ImageDuplicator<itk::Image<itk::Vector<double, 3u>, 3u> >; //Instantiated 30 times