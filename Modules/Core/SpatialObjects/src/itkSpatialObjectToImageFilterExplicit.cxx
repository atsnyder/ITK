#include "itkSpatialObjectToImageFilter.h"

template class itk::SpatialObjectToImageFilter<itk::GroupSpatialObject<3u>, itk::Image<short, 3u> >; //Instantiated 4 times
template class itk::SpatialObjectToImageFilter<itk::BoxSpatialObject<2u>, itk::Image<unsigned char, 2u> >; //Instantiated 4 times