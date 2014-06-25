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
#ifndef __itkBinaryDilateImageFilterExplicit_h
#define __itkBinaryDilateImageFilterExplicit_h
extern template class itk::BinaryDilateImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::BinaryBallStructuringElement<float, 3u, itk::NeighborhoodAllocator<float> > >;
extern template class itk::BinaryDilateImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::BinaryBallStructuringElement<unsigned char, 2u, itk::NeighborhoodAllocator<unsigned char> > >;
extern template class itk::BinaryDilateImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::BinaryBallStructuringElement<float, 2u, itk::NeighborhoodAllocator<float> > >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::BinaryBallStructuringElement<unsigned char, 3u, itk::NeighborhoodAllocator<unsigned char> > >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::BinaryBallStructuringElement<unsigned short, 2u, itk::NeighborhoodAllocator<unsigned short> > >;
extern template class itk::BinaryDilateImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> >;
extern template class itk::BinaryDilateImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::BinaryBallStructuringElement<unsigned short, 3u, itk::NeighborhoodAllocator<unsigned short> > >;
#endif //__itkBinaryDilateImageFilterExplicit_h
