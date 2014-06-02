#include "itkImageTransformer.h"

template class itk::ImageTransformer<itk::Image<itk::Vector<unsigned char, 2u>, 2u> >; //Instantiated 10 times
template class itk::ImageTransformer<itk::Image<short, 2u> >; //Instantiated 48 times
template class itk::ImageTransformer<itk::Image<itk::RGBPixel<unsigned char>, 2u> >; //Instantiated 6 times