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
#ifndef __itkNormalizedCorrelationImageFilterExplicit_h
#define __itkNormalizedCorrelationImageFilterExplicit_h
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<double, 3u>, int>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<double, 3u>, signed char>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<double, 3u>, unsigned char>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<double, 2u>, unsigned char>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<double, 2u>, signed char>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<double, 2u>, float>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<double, 3u>, unsigned short>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<double, 2u>, short>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<double, 3u>, short>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<double, 2u>, int>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<double, 2u>, unsigned int>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<double, 2u>, unsigned short>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<double, 3u>, float>;
extern template class itk::NormalizedCorrelationImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<double, 3u>, unsigned int>;
#endif //__itkNormalizedCorrelationImageFilterExplicit_h
