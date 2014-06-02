#include "itkMetaImageConverter.h"

template class itk::MetaImageConverter<3u, unsigned char, itk::ImageSpatialObject<3u, unsigned char> >; //Instantiated 16 times
template class itk::MetaImageConverter<3u, float, itk::ImageSpatialObject<3u, float> >; //Instantiated 4 times
template class itk::MetaImageConverter<2u, unsigned char, itk::ImageSpatialObject<2u, unsigned char> >; //Instantiated 36 times
template class itk::MetaImageConverter<3u, unsigned short, itk::ImageSpatialObject<3u, unsigned short> >; //Instantiated 4 times