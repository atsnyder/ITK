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
#ifndef __itkImageConstIteratorWithIndexExplicit_h
#define __itkImageConstIteratorWithIndexExplicit_h
#include "itkDiffusionTensor3D.h"
#include "itkRGBPixel.h"
#include "itkRGBAPixel.h"
#include "itkVariableLengthVector.h"
#include <list>
#include <complex>
//exclude ImageAdaptor
//exclude VectorImage
//subs std:: std::
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<float, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 6u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<int, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<bool, 1u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned short, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<double, 2u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned int, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned long, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Offset<2u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned long, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<double, 2u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned long, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<long, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned short, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<int, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<std::complex<float>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned int, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Offset<3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<float, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<double, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<int, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::VariableLengthVector<float>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<signed char, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::RGBPixel<float>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<char, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<double, 1u>, 1u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned int, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<long, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<float, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<float, 1u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::VariableLengthVector<float>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 3u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::RGBPixel<float>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<long, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 1u>, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<char, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned char, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned long, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<std::complex<double>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::FixedArray<float, 3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<double, 6u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<long, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned char, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 3u>, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<std::complex<double>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::CovariantVector<double, 3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<bool, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<double, 1u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::CovariantVector<float, 3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned char, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<double, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::FixedArray<unsigned long, 8u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::RGBPixel<unsigned char>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 1u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<std::complex<float>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned short, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<float, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<signed char, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<double, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<float, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<signed char, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 4u>, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned char, 1u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::FixedArray<float, 2u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<double, 3u>, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<std::list<unsigned int, std::allocator<unsigned int> >, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned int, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<short, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 7u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 6u>, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::CovariantVector<float, 2u>, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<signed char, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned int, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned char, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<itk::RGBPixel<unsigned char>, 2u>, itk::Image<itk::RGBPixel<unsigned char>, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<std::list<unsigned long, std::allocator<unsigned long> >, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<unsigned char, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Index<3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 1u>, 1u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<std::list<unsigned int, std::allocator<unsigned int> >, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<int, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 6u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<short, 3u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<bool, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 7u>, 4u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<short, 2u> const>;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::DiffusionTensor3D<double>, 3u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<short, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageConstIteratorWithIndex<itk::Image<itk::Vector<float, 1u>, 2u> >;
#endif //__itkImageConstIteratorWithIndexExplicit_h
