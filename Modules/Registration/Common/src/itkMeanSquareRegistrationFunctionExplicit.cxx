#include "itkMeanSquareRegistrationFunction.h"

template class itk::MeanSquareRegistrationFunction<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> >; //Instantiated 9 times
