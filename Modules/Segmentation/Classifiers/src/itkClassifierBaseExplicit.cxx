#include "itkClassifierBase.h"

template class itk::ClassifierBase<itk::Image<itk::Vector<unsigned short, 1u>, 3u> >; //Instantiated 6 times
template class itk::ClassifierBase<itk::Image<itk::Vector<double, 2u>, 3u> >; //Instantiated 6 times
