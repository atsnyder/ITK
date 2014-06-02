#ifndef __ExplicitInstantiation_itkImageSource_h__
#define __ExplicitInstantiation_itkImageSource_h__
#include "itkDiffusionTensor3D.h"
#include "itkRGBPixel.h"
#include "itkRGBAPixel.h"
#include "itkVariableLengthVector.h"
#include "itkVectorImage.h"
#include <list>
#include <complex>
//exclude LabelMap
//exclude StatisticsLabelObject
//exclude NormalBandNode
//subs std::__1:: std::
extern template class itk::ImageSource<itk::Image<itk::RGBAPixel<float>, 2u> >;
extern template class itk::ImageSource<itk::VectorImage<float, 2u> >;
extern template class itk::ImageSource<itk::VectorImage<unsigned short, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<double, 3u>, 4u> >;
extern template class itk::ImageSource<itk::VectorImage<int, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<double, 2u>, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::CovariantVector<double, 2u>, 2u> >;
extern template class itk::ImageSource<itk::Image<std::complex<float>, 2u> >;
extern template class itk::ImageSource<itk::Image<char, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::DiffusionTensor3D<float>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u> >;
extern template class itk::ImageSource<itk::Image<double, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBPixel<unsigned short>, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned int, 3u> >;
extern template class itk::ImageSource<itk::Image<unsigned int, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned char, 1u> >;
extern template class itk::ImageSource<itk::VectorImage<char, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBPixel<unsigned char>, 3u> >;
extern template class itk::ImageSource<itk::Image<int, 3u> >;
extern template class itk::ImageSource<itk::VectorImage<double, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<double, 4u>, 2u> >;
extern template class itk::ImageSource<itk::Image<float, 1u> >;
extern template class itk::ImageSource<itk::Image<std::complex<double>, 1u> >;
extern template class itk::ImageSource<itk::Image<itk::SymmetricSecondRankTensor<double, 2u>, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::FixedArray<double, 3u>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::DiffusionTensor3D<double>, 3u> >;
extern template class itk::ImageSource<itk::Image<short, 4u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<float, 1u>, 3u> >;
extern template class itk::ImageSource<itk::Image<unsigned long long, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<float, 4u>, 3u> >;
extern template class itk::ImageSource<itk::Image<long, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::FixedArray<float, 2u>, 2u> >;
extern template class itk::ImageSource<itk::Image<double, 4u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::ImageSource<itk::VectorImage<unsigned char, 3u> >;
extern template class itk::ImageSource<itk::Image<double, 1u> >;
extern template class itk::ImageSource<itk::Image<float, 4u> >;
extern template class itk::ImageSource<itk::Image<long, 3u> >;
extern template class itk::ImageSource<itk::Image<short, 2u> >;
extern template class itk::ImageSource<itk::Image<signed char, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned char, 2u> >;
extern template class itk::ImageSource<itk::Image<short, 3u> >;
extern template class itk::ImageSource<itk::VectorImage<float, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<unsigned char, 2u>, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBPixel<char>, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned short, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned long, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBPixel<float>, 2u> >;
extern template class itk::ImageSource<itk::Image<char, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned long, 3u> >;
extern template class itk::ImageSource<itk::Image<float, 2u> >;
extern template class itk::ImageSource<itk::Image<double, 6u> >;
extern template class itk::ImageSource<itk::Image<std::complex<float>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::CovariantVector<float, 4u>, 3u> >;
extern template class itk::ImageSource<itk::VectorImage<unsigned long, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::CovariantVector<float, 2u>, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned char, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::CovariantVector<float, 3u>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageSource<itk::Image<bool, 3u> >;
extern template class itk::ImageSource<itk::Image<double, 3u> >;
extern template class itk::ImageSource<itk::Image<std::complex<float>, 1u> >;
extern template class itk::ImageSource<itk::Image<int, 2u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<double, 3u>, 1u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<float, 3u>, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned short, 4u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBAPixel<unsigned char>, 3u> >;
extern template class itk::ImageSource<itk::Image<long long, 3u> >;
extern template class itk::ImageSource<itk::VectorImage<unsigned int, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<double, 2u>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<float, 1u>, 2u> >;
extern template class itk::ImageSource<itk::Image<std::complex<double>, 2u> >;
extern template class itk::ImageSource<itk::Image<unsigned char, 3u> >;
extern template class itk::ImageSource<itk::VectorImage<short, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::CovariantVector<double, 3u>, 3u> >;
extern template class itk::ImageSource<itk::Image<itk::Vector<double, 1u>, 1u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBAPixel<unsigned char>, 2u> >;
extern template class itk::ImageSource<itk::VectorImage<unsigned char, 2u> >;
extern template class itk::ImageSource<itk::VectorImage<unsigned short, 3u> >;
extern template class itk::ImageSource<itk::Image<std::complex<float>, 4u> >;
extern template class itk::ImageSource<itk::Image<itk::DiffusionTensor3D<float>, 2u> >;
extern template class itk::ImageSource<itk::VectorImage<unsigned char, 6u> >;
extern template class itk::ImageSource<itk::Image<float, 3u> >;
extern template class itk::ImageSource<itk::Image<std::complex<double>, 3u> >;
extern template class itk::ImageSource<itk::Image<unsigned char, 4u> >;
extern template class itk::ImageSource<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageSource<itk::VectorImage<long, 6u> >;
extern template class itk::ImageSource<itk::Image<itk::RGBPixel<short>, 2u> >;
#endif //__ExplicitInstantiation_itkImageSource_h__