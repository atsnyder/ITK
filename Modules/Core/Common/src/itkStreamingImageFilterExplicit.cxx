#include "itkStreamingImageFilter.h"

template class itk::StreamingImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >; //Instantiated 6 times
template class itk::StreamingImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 10 times
template class itk::StreamingImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >; //Instantiated 26 times
template class itk::StreamingImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >; //Instantiated 14 times
template class itk::StreamingImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >; //Instantiated 20 times
template class itk::StreamingImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >; //Instantiated 4 times
template class itk::StreamingImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >; //Instantiated 40 times
template class itk::StreamingImageFilter<itk::Image<itk::Vector<float, 3u>, 2u>, itk::Image<itk::Vector<float, 3u>, 2u> >; //Instantiated 4 times
template class itk::StreamingImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 66 times