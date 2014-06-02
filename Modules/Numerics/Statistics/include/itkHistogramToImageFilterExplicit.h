#ifndef __ExplicitInstantiation_itkHistogramToImageFilter_h__
#define __ExplicitInstantiation_itkHistogramToImageFilter_h__
extern template class itk::HistogramToImageFilter<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, itk::Image<float, 3u>, itk::Function::HistogramProbabilityFunction<unsigned long, float> >;
extern template class itk::HistogramToImageFilter<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, itk::Image<double, 3u>, itk::Function::HistogramEntropyFunction<unsigned long, double> >;
extern template class itk::HistogramToImageFilter<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, itk::Image<double, 3u>, itk::Function::HistogramLogProbabilityFunction<unsigned long, double> >;
extern template class itk::HistogramToImageFilter<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, itk::Image<unsigned long, 3u>, itk::Function::HistogramIntensityFunction<unsigned long, unsigned long> >;
#endif //__ExplicitInstantiation_itkHistogramToImageFilter_h__