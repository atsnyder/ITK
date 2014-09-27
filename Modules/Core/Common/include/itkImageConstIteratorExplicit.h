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
#ifndef __itkImageConstIteratorExplicit_h
#define __itkImageConstIteratorExplicit_h
//exclude watershed
//exclude ComplexConjugateImageAdaptor
//exclude fem
//exclude VectorImage
extern template class itk::ImageConstIterator<itk::Image<itk::RGBAPixel<unsigned char>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<char, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 4u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<short, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<bool, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 1u>, 1u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::RGBAPixel<unsigned char>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<int, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::RGBPixel<float>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::CovariantVector<double, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<double, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<double, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<unsigned short, 5u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<double, 2u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned char, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 3u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<std::complex<float>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<bool, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<short, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::CovariantVector<float, 2u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<double, 1u>, 1u> >;
extern template class itk::ImageConstIterator<itk::Image<double, 6u> >;
extern template class itk::ImageConstIterator<itk::Image<signed char, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 4u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<double, 3u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 6u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<short, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<std::complex<double>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned short, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<double, 1u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 6u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned char, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<std::complex<double>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 1u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<long, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::DiffusionTensor3D<double>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::SymmetricSecondRankTensor<float, 2u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 2u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<float, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<char, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<double, 4u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned long, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<signed char, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<double, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::RGBPixel<unsigned char>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<int, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned long, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<bool, 1u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<int, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned char, 1u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<bool, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::FixedArray<float, 2u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 7u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<unsigned char, 2u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::RGBPixel<unsigned short>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 3u>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned char, 6u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<double, 2u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::CovariantVector<float, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::FixedArray<float, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::DiffusionTensor3D<float>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 7u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned int, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<std::complex<float>, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<float, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned int, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned int, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 1u>, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned char, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<float, 1u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::FixedArray<double, 3u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 6u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<long, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<itk::RGBPixel<unsigned char>, 2u>, itk::Image<itk::RGBPixel<unsigned char>, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<unsigned short, 4u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::TileImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<float, 1u>, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<float, 3u> >;
extern template class itk::ImageConstIterator<itk::Image<itk::Vector<double, 3u>, 1u> >;
#endif //__itkImageConstIteratorExplicit_h
