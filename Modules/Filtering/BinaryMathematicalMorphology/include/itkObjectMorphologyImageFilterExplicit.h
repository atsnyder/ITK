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
#ifndef __itkObjectMorphologyImageFilterExplicit_h
#define __itkObjectMorphologyImageFilterExplicit_h
#include "itkFlatStructuringElement.h"
#include "itkBinaryBallStructuringElement.h"
extern template class itk::ObjectMorphologyImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::ObjectMorphologyImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> >;
#endif //__itkObjectMorphologyImageFilterExplicit_h
