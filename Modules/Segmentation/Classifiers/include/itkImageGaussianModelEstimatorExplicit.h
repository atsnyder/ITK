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
#ifndef __itkImageGaussianModelEstimatorExplicit_h
#define __itkImageGaussianModelEstimatorExplicit_h
extern template class itk::ImageGaussianModelEstimator<itk::Image<itk::Vector<double, 2u>, 3u>, itk::Statistics::MahalanobisDistanceMembershipFunction<itk::Vector<double, 2u> >, itk::Image<unsigned short, 3u> >;
extern template class itk::ImageGaussianModelEstimator<itk::Image<itk::Vector<unsigned short, 1u>, 3u>, itk::Statistics::MahalanobisDistanceMembershipFunction<itk::Vector<unsigned short, 1u> >, itk::Image<unsigned short, 3u> >;
#endif //__itkImageGaussianModelEstimatorExplicit_h
