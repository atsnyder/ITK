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
#ifndef __itkGradientRecursiveGaussianImageFilterExplicit_h
#define __itkGradientRecursiveGaussianImageFilterExplicit_h
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<short, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<int, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<unsigned int, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<short, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<unsigned char, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<unsigned short, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::VectorImage<float, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<double, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<itk::FixedArray<float, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<itk::CovariantVector<float, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<itk::CovariantVector<float, 3u>, 3u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<char, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> >;
extern template class itk::GradientRecursiveGaussianImageFilter<itk::Image<double, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> >;
#endif //__itkGradientRecursiveGaussianImageFilterExplicit_h
