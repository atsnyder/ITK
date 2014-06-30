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
#ifndef __itkVectorIndexSelectionCastImageFilterExplicit_h
#define __itkVectorIndexSelectionCastImageFilterExplicit_h
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u>, itk::Image<float, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned int, 2u>, itk::Image<unsigned int, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned char, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<signed char, 2u>, itk::Image<signed char, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<float, 1u>, 4u>, itk::Image<float, 4u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<int, 3u>, itk::Image<int, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned int, 3u>, itk::Image<unsigned int, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<double, 4u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<float, 1u>, 3u>, itk::Image<float, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<float, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<float, 1u>, 2u>, itk::Image<float, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<signed char, 3u>, itk::Image<signed char, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<short, 3u>, itk::Image<short, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::CovariantVector<float, 2u>, 2u>, itk::Image<float, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned short, 3u>, itk::Image<unsigned short, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<short, 2u>, itk::Image<short, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<int, 2u>, itk::Image<int, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned short, 2u>, itk::Image<unsigned short, 2u> >;
extern template class itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<float, 4u>, itk::Image<float, 4u> >;
#endif //__itkVectorIndexSelectionCastImageFilterExplicit_h
