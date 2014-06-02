#include "itkImageSeriesReader.h"

template class itk::ImageSeriesReader<itk::VectorImage<unsigned short, 3u> >; //Instantiated 3 times
template class itk::ImageSeriesReader<itk::Image<itk::RGBPixel<unsigned char>, 3u> >; //Instantiated 3 times
template class itk::ImageSeriesReader<itk::Image<short, 3u> >; //Instantiated 30 times
template class itk::ImageSeriesReader<itk::Image<unsigned short, 5u> >; //Instantiated 3 times
template class itk::ImageSeriesReader<itk::Image<unsigned short, 3u> >; //Instantiated 18 times
template class itk::ImageSeriesReader<itk::Image<short, 5u> >; //Instantiated 3 times
template class itk::ImageSeriesReader<itk::Image<short, 4u> >; //Instantiated 3 times
template class itk::ImageSeriesReader<itk::Image<short, 2u> >; //Instantiated 3 times
template class itk::ImageSeriesReader<itk::Image<unsigned char, 3u> >; //Instantiated 9 times