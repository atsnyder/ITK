/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef __itkHistogramThresholdCalculatorExplicit_h
#define __itkHistogramThresholdCalculatorExplicit_h
#include "itkDenseFrequencyContainer2.h"
#include "itkHistogram.h"
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, int>;
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, double>;
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, unsigned short>;
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, signed char>;
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, short>;
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, float>;
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, unsigned char>;
extern template class itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, unsigned int>;
#endif //__itkHistogramThresholdCalculatorExplicit_h
