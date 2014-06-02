#include "itkImportImageFilter.h"

template class itk::ImportImageFilter<itk::Vector<double, 3u>, 3u>; //Instantiated 30 times
template class itk::ImportImageFilter<itk::Vector<double, 2u>, 3u>; //Instantiated 6 times
template class itk::ImportImageFilter<itk::Vector<double, 3u>, 4u>; //Instantiated 8 times
template class itk::ImportImageFilter<itk::Vector<double, 2u>, 2u>; //Instantiated 40 times
template class itk::ImportImageFilter<itk::Vector<float, 2u>, 2u>; //Instantiated 6 times
template class itk::ImportImageFilter<itk::Vector<float, 3u>, 3u>; //Instantiated 4 times