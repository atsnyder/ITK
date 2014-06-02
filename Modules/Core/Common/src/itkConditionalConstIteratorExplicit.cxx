#include "itkConditionalConstIterator.h"

template class itk::ConditionalConstIterator<itk::Image<bool, 1u> >; //Instantiated 6 times
template class itk::ConditionalConstIterator<itk::Image<bool, 3u> >; //Instantiated 4 times
template class itk::ConditionalConstIterator<itk::Image<unsigned char, 2u> >; //Instantiated 22 times
template class itk::ConditionalConstIterator<itk::Image<float, 2u> >; //Instantiated 12 times
template class itk::ConditionalConstIterator<itk::Image<bool, 2u> >; //Instantiated 76 times
template class itk::ConditionalConstIterator<itk::Image<unsigned char, 3u> >; //Instantiated 6 times
template class itk::ConditionalConstIterator<itk::Image<bool, 4u> >; //Instantiated 4 times
template class itk::ConditionalConstIterator<itk::Image<itk::RGBPixel<unsigned char>, 2u> >; //Instantiated 4 times