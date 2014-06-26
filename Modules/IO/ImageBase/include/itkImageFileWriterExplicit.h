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
#ifndef __itkImageFileWriterExplicit_h
#define __itkImageFileWriterExplicit_h
//exclude RGBToVectorImageAdaptor
#include "itkImage.h"
#include "itkVectorImage.h"
extern template class itk::ImageFileWriter<itk::Image<itk::RGBAPixel<unsigned char>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned short, 1u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBPixel<short>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned char, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<short, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::DiffusionTensor3D<float>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBPixel<char>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<char, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<int, 3u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 2u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned int, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 6u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<double, 3u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<double, 2u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::DiffusionTensor3D<float>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned char, 5u> >;
extern template class itk::ImageFileWriter<itk::VectorImage<unsigned char, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<double, 2u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<std::complex<float>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::DiffusionTensor3D<float>, 1u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 1u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 1u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<double, 4u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::CovariantVector<float, 2u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 4u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBPixel<float>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned short, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBAPixel<float>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<long, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBPixel<float>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned char, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned long, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::DiffusionTensor3D<float>, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBAPixel<float>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBAPixel<char>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<float, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned long, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBAPixel<unsigned char>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::DiffusionTensor3D<double>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Offset<2u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<int, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Matrix<float, 3u, 3u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned int, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::CovariantVector<float, 3u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<char, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBPixel<unsigned char>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<std::complex<float>, 2u> >;
extern template class itk::ImageFileWriter<itk::VectorImage<float, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<float, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<double, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned char, 1u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageFileWriter<itk::VectorImage<float, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 3u>, 1u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBAPixel<short>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 1u>, 3u> >;
extern template class itk::ImageFileWriter<itk::VectorImage<double, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<double, 2u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBPixel<unsigned short>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<short, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 4u>, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::RGBAPixel<unsigned short>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 3u>, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<float, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<double, 3u> >;
extern template class itk::ImageFileWriter<itk::VectorImage<unsigned char, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<char, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 5u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<double, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<float, 9u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::Vector<double, 3u>, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned char, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<unsigned short, 2u> >;
extern template class itk::ImageFileWriter<itk::Image<int, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 6u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<short, 4u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 4u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<itk::CovariantVector<float, 4u>, 3u> >;
extern template class itk::ImageFileWriter<itk::Image<long, 3u> >;
#endif //__itkImageFileWriterExplicit_h
