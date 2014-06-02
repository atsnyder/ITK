#include "itkImageSliceConstIteratorWithIndex.h"

template class itk::ImageSliceConstIteratorWithIndex<itk::Image<float, 2u> >; //Instantiated 8 times
template class itk::ImageSliceConstIteratorWithIndex<itk::Image<itk::Offset<2u>, 2u> >; //Instantiated 4 times
template class itk::ImageSliceConstIteratorWithIndex<itk::Image<unsigned char, 2u> >; //Instantiated 4 times
template class itk::ImageSliceConstIteratorWithIndex<itk::Image<unsigned char, 3u> >; //Instantiated 38 times