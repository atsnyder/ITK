#include "itkHistogramToLogProbabilityImageFilter.h"

template class itk::HistogramToLogProbabilityImageFilter<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, itk::Image<double, 3u> >; //Instantiated 4 times