#include "itkWatershedImageFilter.h"

template class itk::WatershedImageFilter<itk::Image<float, 2u> >; //Instantiated 9 times
template class itk::WatershedImageFilter<itk::Image<double, 2u> >; //Instantiated 3 times
template class itk::WatershedImageFilter<itk::Image<float, 3u> >; //Instantiated 3 times