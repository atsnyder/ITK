#include "itkExtractImageFilter.h"

template class itk::ExtractImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >; //Instantiated 6 times
template class itk::ExtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >; //Instantiated 14 times
template class itk::ExtractImageFilter<itk::Image<float, 2u>, itk::Image<int, 2u> >; //Instantiated 12 times
template class itk::ExtractImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 44 times
template class itk::ExtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 2u> >; //Instantiated 6 times
template class itk::ExtractImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 6 times
template class itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 4 times
template class itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> >; //Instantiated 18 times
template class itk::ExtractImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >; //Instantiated 10 times