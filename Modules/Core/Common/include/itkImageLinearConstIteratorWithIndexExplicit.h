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
#ifndef __itkImageLinearConstIteratorWithIndexExplicit_h
#define __itkImageLinearConstIteratorWithIndexExplicit_h
#include "itkVectorImage.h"
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned int, 4u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<short, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<double, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned char, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<double, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<long, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::Vector<float, 4u>, 4u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned long, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<float, 1u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<int, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned long, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned short, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<signed char, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<signed char, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned long, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned short, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<long, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<short, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<double, 1u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<signed char, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<int, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned int, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<float, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<short, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<double, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<long, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<float, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<double, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<short, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned char, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned int, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<double, 4u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<float, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<float, 4u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned short, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned char, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >::TileInfo, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::VariableLengthVector<float>, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<float, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::VariableLengthVector<float>, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<int, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<long, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<int, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned char, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<signed char, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::VectorImage<unsigned long, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned int, 3u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<unsigned int, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::TileImageFilter<itk::Image<itk::RGBPixel<unsigned char>, 2u>, itk::Image<itk::RGBPixel<unsigned char>, 2u> >::TileInfo, 2u> >;
extern template class itk::ImageLinearConstIteratorWithIndex<itk::Image<itk::Vector<double, 2u>, 2u> >;
#endif //__itkImageLinearConstIteratorWithIndexExplicit_h
