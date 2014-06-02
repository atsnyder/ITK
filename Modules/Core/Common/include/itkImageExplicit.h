#ifndef __ExplicitInstantiation_itkImage_h__
#define __ExplicitInstantiation_itkImage_h__
#include "itkRGBPixel.h"
#include "itkRGBAPixel.h"
#include "itkDiffusionTensor3D.h"
#include "itkVariableLengthVector.h"
#include <list>
#include <complex>
//exclude NormalBandNode
//exclude fem
//exclude LabelObjectLine
//exclude watershed
//subs std::__1:: std::
extern template class itk::Image<itk::Vector<float, 2u>, 3u>;
extern template class itk::Image<double, 3u>;
extern template class itk::Image<itk::RGBAPixel<unsigned char>, 2u>;
extern template class itk::Image<itk::Vector<double, 4u>, 2u>;
extern template class itk::Image<unsigned char, 6u>;
extern template class itk::Image<itk::DiffusionTensor3D<float>, 3u>;
extern template class itk::Image<itk::RGBPixel<unsigned char>, 3u>;
extern template class itk::Image<char, 3u>;
extern template class itk::Image<itk::Vector<float, 6u>, 3u>;
extern template class itk::Image<itk::Vector<float, 4u>, 3u>;
extern template class itk::Image<unsigned char, 3u>;
extern template class itk::Image<itk::RGBAPixel<short>, 2u>;
extern template class itk::Image<itk::DiffusionTensor3D<double>, 3u>;
extern template class itk::Image<itk::VariableLengthVector<float>, 3u>;
extern template class itk::Image<unsigned short, 3u>;
extern template class itk::Image<itk::Vector<double, 2u>, 3u>;
extern template class itk::Image<char, 4u>;
extern template class itk::Image<itk::CovariantVector<double, 2u>, 2u>;
extern template class itk::Image<short, 2u>;
extern template class itk::Image<itk::Vector<float, 4u>, 4u>;
extern template class itk::Image<signed char, 2u>;
extern template class itk::Image<itk::FixedArray<unsigned long, 8u>, 3u>;
extern template class itk::Image<itk::Vector<float, 6u>, 2u>;
extern template class itk::Image<float, 2u>;
extern template class itk::Image<int, 2u>;
extern template class itk::Image<itk::RGBPixel<short>, 2u>;
extern template class itk::Image<std::complex<double>, 2u>;
extern template class itk::Image<itk::Vector<unsigned short, 3u>, 3u>;
extern template class itk::Image<float, 1u>;
extern template class itk::Image<itk::Vector<double, 3u>, 3u>;
extern template class itk::Image<itk::Vector<float, 1u>, 2u>;
extern template class itk::Image<unsigned char, 1u>;
extern template class itk::Image<unsigned char, 2u>;
extern template class itk::Image<itk::Vector<unsigned short, 1u>, 3u>;
extern template class itk::Image<std::list<unsigned int, std::allocator<unsigned int> >, 3u>;
extern template class itk::Image<itk::Vector<unsigned short, 5u>, 3u>;
extern template class itk::Image<std::complex<float>, 3u>;
extern template class itk::Image<std::complex<double>, 1u>;
extern template class itk::Image<signed char, 3u>;
extern template class itk::Image<int, 3u>;
extern template class itk::Image<itk::Vector<float, 1u>, 3u>;
extern template class itk::Image<itk::Vector<float, 3u>, 3u>;
extern template class itk::Image<bool, 4u>;
extern template class itk::Image<itk::FixedArray<float, 3u>, 3u>;
extern template class itk::Image<unsigned int, 3u>;
extern template class itk::Image<bool, 1u>;
extern template class itk::Image<std::list<unsigned long, std::allocator<unsigned long> >, 2u>;
extern template class itk::Image<itk::SymmetricSecondRankTensor<double, 2u>, 2u>;
extern template class itk::Image<double, 4u>;
extern template class itk::Image<itk::Vector<double, 3u>, 4u>;
extern template class itk::Image<itk::FixedArray<unsigned char, 4u>, 3u>;
extern template class itk::Image<itk::RGBPixel<float>, 2u>;
extern template class itk::Image<itk::RGBAPixel<float>, 2u>;
extern template class itk::Image<std::complex<float>, 2u>;
extern template class itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u>;
extern template class itk::Image<long, 3u>;
extern template class itk::Image<itk::RGBPixel<unsigned short>, 3u>;
extern template class itk::Image<float, 4u>;
extern template class itk::Image<int, 4u>;
extern template class itk::Image<long, 1u>;
extern template class itk::Image<char, 1u>;
extern template class itk::Image<std::list<unsigned int, std::allocator<unsigned int> >, 2u>;
extern template class itk::Image<itk::Vector<float, 3u>, 2u>;
extern template class itk::Image<itk::Vector<double, 1u>, 1u>;
extern template class itk::Image<itk::Vector<int, 2u>, 2u>;
extern template class itk::Image<itk::RGBPixel<unsigned char>, 2u>;
extern template class itk::Image<itk::Offset<2u>, 2u>;
extern template class itk::Image<itk::CovariantVector<float, 3u>, 2u>;
extern template class itk::Image<double, 1u>;
extern template class itk::Image<long long, 3u>;
extern template class itk::Image<itk::RGBPixel<float>, 3u>;
extern template class itk::Image<unsigned int, 2u>;
extern template class itk::Image<itk::DiffusionTensor3D<float>, 2u>;
extern template class itk::Image<itk::CovariantVector<double, 3u>, 3u>;
extern template class itk::Image<short, 4u>;
extern template class itk::Image<unsigned long, 3u>;
extern template class itk::Image<unsigned char, 4u>;
extern template class itk::Image<itk::Vector<double, 3u>, 1u>;
extern template class itk::Image<float, 3u>;
extern template class itk::Image<itk::Offset<3u>, 3u>;
extern template class itk::Image<unsigned long long, 3u>;
extern template class itk::Image<itk::Vector<float, 4u>, 2u>;
extern template class itk::Image<long, 2u>;
extern template class itk::Image<itk::RGBPixel<char>, 2u>;
extern template class itk::Image<unsigned long, 2u>;
extern template class itk::Image<double, 2u>;
extern template class itk::Image<itk::FixedArray<double, 3u>, 3u>;
extern template class itk::Image<char, 2u>;
extern template class itk::Image<itk::Vector<int, 3u>, 3u>;
extern template class itk::Image<itk::CovariantVector<float, 3u>, 3u>;
extern template class itk::Image<std::complex<float>, 1u>;
extern template class itk::Image<itk::Vector<float, 2u>, 2u>;
extern template class itk::Image<unsigned short, 4u>;
extern template class itk::Image<itk::Matrix<float, 3u, 3u>, 3u>;
extern template class itk::Image<itk::Vector<float, 5u>, 2u>;
extern template class itk::Image<itk::Index<4u>, 4u>;
extern template class itk::Image<unsigned short, 2u>;
extern template class itk::Image<std::complex<double>, 3u>;
extern template class itk::Image<itk::FixedArray<float, 2u>, 2u>;
extern template class itk::Image<itk::RGBPixel<unsigned short>, 2u>;
extern template class itk::Image<itk::CovariantVector<float, 2u>, 2u>;
extern template class itk::Image<bool, 2u>;
extern template class itk::Image<int, 1u>;
extern template class itk::Image<itk::Vector<unsigned char, 2u>, 2u>;
extern template class itk::Image<short, 3u>;
extern template class itk::Image<itk::RGBAPixel<unsigned char>, 3u>;
extern template class itk::Image<std::complex<float>, 4u>;
extern template class itk::Image<bool, 3u>;
extern template class itk::Image<double, 6u>;
extern template class itk::Image<itk::CovariantVector<float, 4u>, 3u>;
extern template class itk::Image<itk::Index<3u>, 3u>;
extern template class itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u>;
extern template class itk::Image<itk::Vector<double, 2u>, 2u>;
#endif //__ExplicitInstantiation_itkImage_h__