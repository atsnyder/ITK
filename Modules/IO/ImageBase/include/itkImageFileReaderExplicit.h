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
#ifndef __itkImageFileReaderExplicit_h
#define __itkImageFileReaderExplicit_h
extern template class itk::ImageFileReader<itk::Image<double, 2u>, itk::DefaultConvertPixelTraits<double> >;
extern template class itk::ImageFileReader<itk::Image<float, 4u>, itk::DefaultConvertPixelTraits<float> >;
extern template class itk::ImageFileReader<itk::Image<char, 3u>, itk::DefaultConvertPixelTraits<char> >;
extern template class itk::ImageFileReader<itk::Image<unsigned int, 2u>, itk::DefaultConvertPixelTraits<unsigned int> >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBAPixel<char>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBAPixel<char> > >;
extern template class itk::ImageFileReader<itk::Image<short, 2u>, itk::DefaultConvertPixelTraits<short> >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBAPixel<short>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBAPixel<short> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<double, 4u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<double, 4u> > >;
extern template class itk::ImageFileReader<itk::Image<unsigned short, 3u>, itk::DefaultConvertPixelTraits<unsigned short> >;
extern template class itk::ImageFileReader<itk::Image<unsigned short, 4u>, itk::DefaultConvertPixelTraits<unsigned short> >;
extern template class itk::ImageFileReader<itk::Image<itk::CovariantVector<float, 2u>, 2u>, itk::DefaultConvertPixelTraits<itk::CovariantVector<float, 2u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBPixel<char>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBPixel<char> > >;
extern template class itk::ImageFileReader<itk::Image<float, 3u>, itk::DefaultConvertPixelTraits<float> >;
extern template class itk::ImageFileReader<itk::Image<unsigned char, 1u>, itk::DefaultConvertPixelTraits<unsigned char> >;
extern template class itk::ImageFileReader<itk::VectorImage<long, 6u>, itk::DefaultConvertPixelTraits<long> >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 3u>, 1u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 3u> > >;
extern template class itk::ImageFileReader<itk::VectorImage<float, 2u>, itk::DefaultConvertPixelTraits<float> >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 6u>, 3u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 6u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<int, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<int, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBAPixel<unsigned char>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBAPixel<unsigned char> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 1u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 1u> > >;
extern template class itk::ImageFileReader<itk::Image<double, 3u>, itk::DefaultConvertPixelTraits<double> >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned char, 6u>, itk::DefaultConvertPixelTraits<unsigned char> >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<double, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<double, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<int, 3u>, itk::DefaultConvertPixelTraits<int> >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBAPixel<float>, 3u>, itk::DefaultConvertPixelTraits<itk::RGBAPixel<float> > >;
extern template class itk::ImageFileReader<itk::Image<itk::DiffusionTensor3D<float>, 4u>, itk::DefaultConvertPixelTraits<itk::DiffusionTensor3D<float> > >;
extern template class itk::ImageFileReader<itk::Image<short, 3u>, itk::DefaultConvertPixelTraits<short> >;
extern template class itk::ImageFileReader<itk::Image<itk::DiffusionTensor3D<float>, 1u>, itk::DefaultConvertPixelTraits<itk::DiffusionTensor3D<float> > >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBPixel<short>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBPixel<short> > >;
extern template class itk::ImageFileReader<itk::Image<unsigned short, 2u>, itk::DefaultConvertPixelTraits<unsigned short> >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBPixel<float>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBPixel<float> > >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned char, 3u>, itk::DefaultConvertPixelTraits<unsigned char> >;
extern template class itk::ImageFileReader<itk::Image<unsigned int, 3u>, itk::DefaultConvertPixelTraits<unsigned int> >;
extern template class itk::ImageFileReader<itk::Image<itk::DiffusionTensor3D<float>, 2u>, itk::DefaultConvertPixelTraits<itk::DiffusionTensor3D<float> > >;
extern template class itk::ImageFileReader<itk::Image<unsigned long, 3u>, itk::DefaultConvertPixelTraits<unsigned long> >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 2u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 2u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 1u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 4u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::DiffusionTensor3D<double>, 3u>, itk::DefaultConvertPixelTraits<itk::DiffusionTensor3D<double> > >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBPixel<unsigned char>, 3u>, itk::DefaultConvertPixelTraits<itk::RGBPixel<unsigned char> > >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 2u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::DiffusionTensor3D<float>, 3u>, itk::DefaultConvertPixelTraits<itk::DiffusionTensor3D<float> > >;
extern template class itk::ImageFileReader<itk::Image<int, 2u>, itk::DefaultConvertPixelTraits<int> >;
extern template class itk::ImageFileReader<itk::Image<char, 4u>, itk::DefaultConvertPixelTraits<char> >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned short, 2u>, itk::DefaultConvertPixelTraits<unsigned short> >;
extern template class itk::ImageFileReader<itk::Image<unsigned char, 3u>, itk::DefaultConvertPixelTraits<unsigned char> >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned char, 2u>, itk::DefaultConvertPixelTraits<unsigned char> >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned short, 3u>, itk::DefaultConvertPixelTraits<unsigned short> >;
extern template class itk::ImageFileReader<itk::VectorImage<char, 6u>, itk::DefaultConvertPixelTraits<char> >;
extern template class itk::ImageFileReader<itk::Image<long, 2u>, itk::DefaultConvertPixelTraits<long> >;
extern template class itk::ImageFileReader<itk::Image<short, 4u>, itk::DefaultConvertPixelTraits<short> >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 3u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<unsigned long, 2u>, itk::DefaultConvertPixelTraits<unsigned long> >;
extern template class itk::ImageFileReader<itk::Image<double, 4u>, itk::DefaultConvertPixelTraits<double> >;
extern template class itk::ImageFileReader<itk::VectorImage<float, 3u>, itk::DefaultConvertPixelTraits<float> >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned int, 6u>, itk::DefaultConvertPixelTraits<unsigned int> >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 4u>, 4u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 4u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 4u>, 3u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 4u> > >;
extern template class itk::ImageFileReader<itk::Image<char, 2u>, itk::DefaultConvertPixelTraits<char> >;
extern template class itk::ImageFileReader<itk::Image<float, 2u>, itk::DefaultConvertPixelTraits<float> >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<double, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<long, 3u>, itk::DefaultConvertPixelTraits<long> >;
extern template class itk::ImageFileReader<itk::Image<unsigned char, 4u>, itk::DefaultConvertPixelTraits<unsigned char> >;
extern template class itk::ImageFileReader<itk::VectorImage<int, 6u>, itk::DefaultConvertPixelTraits<int> >;
extern template class itk::ImageFileReader<itk::VectorImage<short, 6u>, itk::DefaultConvertPixelTraits<short> >;
extern template class itk::ImageFileReader<itk::Image<itk::CovariantVector<float, 4u>, 3u>, itk::DefaultConvertPixelTraits<itk::CovariantVector<float, 4u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<double, 3u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<double, 3u> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 4u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 4u> > >;
extern template class itk::ImageFileReader<itk::Image<std::complex<float>, 3u>, itk::DefaultConvertPixelTraits<std::complex<float> > >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBAPixel<float>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBAPixel<float> > >;
extern template class itk::ImageFileReader<itk::VectorImage<double, 3u>, itk::DefaultConvertPixelTraits<double> >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 5u>, 3u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 5u> > >;
extern template class itk::ImageFileReader<itk::Image<unsigned char, 2u>, itk::DefaultConvertPixelTraits<unsigned char> >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBAPixel<unsigned short>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBAPixel<unsigned short> > >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBAPixel<unsigned char>, 3u>, itk::DefaultConvertPixelTraits<itk::RGBAPixel<unsigned char> > >;
extern template class itk::ImageFileReader<itk::Image<std::complex<float>, 2u>, itk::DefaultConvertPixelTraits<std::complex<float> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Vector<float, 1u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 1u> > >;
extern template class itk::ImageFileReader<itk::Image<short, 5u>, itk::DefaultConvertPixelTraits<short> >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBPixel<unsigned char>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBPixel<unsigned char> > >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned short, 6u>, itk::DefaultConvertPixelTraits<unsigned short> >;
extern template class itk::ImageFileReader<itk::Image<double, 6u>, itk::DefaultConvertPixelTraits<double> >;
extern template class itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 2u>, 2u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 2u> > >;
extern template class itk::ImageFileReader<itk::VectorImage<unsigned long, 6u>, itk::DefaultConvertPixelTraits<unsigned long> >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBPixel<unsigned short>, 2u>, itk::DefaultConvertPixelTraits<itk::RGBPixel<unsigned short> > >;
extern template class itk::ImageFileReader<itk::Image<itk::RGBPixel<float>, 3u>, itk::DefaultConvertPixelTraits<itk::RGBPixel<float> > >;
extern template class itk::ImageFileReader<itk::Image<itk::Matrix<float, 3u, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::Matrix<float, 3u, 3u> > >;
#endif //__itkImageFileReaderExplicit_h
