#ifndef __ExplicitInstantiation_itkDefaultPixelAccessor_h__
#define __ExplicitInstantiation_itkDefaultPixelAccessor_h__
#include "itkDiffusionTensor3D.h"
#include "itkRGBPixel.h"
#include "itkRGBAPixel.h"
#include "itkVariableLengthVector.h"
#include "itkIndex.h"
#include <list>
#include <complex>
//exclude watershed
//exclude fem
//subs std::__1:: std::
extern template class itk::DefaultPixelAccessor<unsigned short>;
extern template class itk::DefaultPixelAccessor<unsigned long>;
extern template class itk::DefaultPixelAccessor<itk::Vector<float, 1u> >;
extern template class itk::DefaultPixelAccessor<std::complex<double> >;
extern template class itk::DefaultPixelAccessor<itk::FixedArray<float, 2u> >;
extern template class itk::DefaultPixelAccessor<itk::Index<3u> >;
extern template class itk::DefaultPixelAccessor<itk::SymmetricSecondRankTensor<float, 3u> >;
extern template class itk::DefaultPixelAccessor<double>;
extern template class itk::DefaultPixelAccessor<itk::SymmetricSecondRankTensor<double, 3u> >;
extern template class itk::DefaultPixelAccessor<itk::CovariantVector<double, 2u> >;
extern template class itk::DefaultPixelAccessor<itk::RGBAPixel<float> >;
extern template class itk::DefaultPixelAccessor<itk::DiffusionTensor3D<float> >;
extern template class itk::DefaultPixelAccessor<itk::RGBPixel<unsigned char> >;
extern template class itk::DefaultPixelAccessor<int>;
extern template class itk::DefaultPixelAccessor<unsigned int>;
extern template class itk::DefaultPixelAccessor<bool>;
extern template class itk::DefaultPixelAccessor<itk::CovariantVector<float, 3u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<int, 2u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<float, 9u> >;
extern template class itk::DefaultPixelAccessor<itk::RGBPixel<float> >;
extern template class itk::DefaultPixelAccessor<short>;
extern template class itk::DefaultPixelAccessor<itk::Vector<float, 6u> >;
extern template class itk::DefaultPixelAccessor<itk::Offset<2u> >;
extern template class itk::DefaultPixelAccessor<std::complex<float> >;
extern template class itk::DefaultPixelAccessor<itk::FixedArray<float, 3u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<float, 4u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<float, 5u> >;
extern template class itk::DefaultPixelAccessor<itk::RGBPixel<short> >;
extern template class itk::DefaultPixelAccessor<itk::RGBAPixel<short> >;
extern template class itk::DefaultPixelAccessor<itk::CovariantVector<double, 3u> >;
extern template class itk::DefaultPixelAccessor<long long>;
extern template class itk::DefaultPixelAccessor<itk::RGBAPixel<unsigned char> >;
extern template class itk::DefaultPixelAccessor<itk::VariableLengthVector<float> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<unsigned char, 4u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<unsigned char, 2u> >;
extern template class itk::DefaultPixelAccessor<itk::FixedArray<double, 3u> >;
extern template class itk::DefaultPixelAccessor<unsigned char>;
extern template class itk::DefaultPixelAccessor<signed char>;
extern template class itk::DefaultPixelAccessor<itk::Vector<unsigned short, 3u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<double, 3u> >;
extern template class itk::DefaultPixelAccessor<itk::FixedArray<float, 1u> >;
extern template class itk::DefaultPixelAccessor<itk::DiffusionTensor3D<double> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<unsigned short, 5u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<double, 2u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<unsigned short, 1u> >;
extern template class itk::DefaultPixelAccessor<itk::SymmetricSecondRankTensor<double, 2u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<double, 6u> >;
extern template class itk::DefaultPixelAccessor<itk::CovariantVector<float, 2u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<float, 3u> >;
extern template class itk::DefaultPixelAccessor<char>;
extern template class itk::DefaultPixelAccessor<itk::Matrix<float, 3u, 3u> >;
extern template class itk::DefaultPixelAccessor<itk::Index<4u> >;
extern template class itk::DefaultPixelAccessor<float>;
extern template class itk::DefaultPixelAccessor<itk::Vector<float, 2u> >;
extern template class itk::DefaultPixelAccessor<unsigned long long>;
extern template class itk::DefaultPixelAccessor<std::list<unsigned long, std::allocator<unsigned long> > >;
extern template class itk::DefaultPixelAccessor<itk::RGBPixel<unsigned short> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<unsigned short, 4u> >;
extern template class itk::DefaultPixelAccessor<long>;
extern template class itk::DefaultPixelAccessor<itk::Vector<double, 1u> >;
extern template class itk::DefaultPixelAccessor<itk::FixedArray<unsigned long, 8u> >;
extern template class itk::DefaultPixelAccessor<itk::Vector<double, 4u> >;
extern template class itk::DefaultPixelAccessor<std::list<unsigned int, std::allocator<unsigned int> > >;
extern template class itk::DefaultPixelAccessor<itk::Vector<int, 3u> >;
extern template class itk::DefaultPixelAccessor<itk::Offset<3u> >;
#endif //__ExplicitInstantiation_itkDefaultPixelAccessor_h__