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
#ifndef __itkImageToImageMetricExplicit_h
#define __itkImageToImageMetricExplicit_h
extern template class itk::ImageToImageMetric<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >;
extern template class itk::ImageToImageMetric<itk::Image<float, 3u>, itk::Image<char, 3u> >;
extern template class itk::ImageToImageMetric<itk::Image<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageToImageMetric<itk::Image<short, 3u>, itk::Image<short, 3u> >;
extern template class itk::ImageToImageMetric<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >;
extern template class itk::ImageToImageMetric<itk::Image<short, 2u>, itk::Image<short, 2u> >;
extern template class itk::ImageToImageMetric<itk::Image<int, 2u>, itk::Image<int, 2u> >;
extern template class itk::ImageToImageMetric<itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::ImageToImageMetric<itk::Image<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::ImageToImageMetric<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
#endif //__itkImageToImageMetricExplicit_h
