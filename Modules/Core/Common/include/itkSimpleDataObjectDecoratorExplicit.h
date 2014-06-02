#ifndef __ExplicitInstantiation_itkSimpleDataObjectDecorator_h__
#define __ExplicitInstantiation_itkSimpleDataObjectDecorator_h__
#include "itkArray.h"
#include "itkFixedArray.h"
#include "itkVector.h"
#include "itkVariableSizeMatrix.h"
#include "itkPoint.h"
#include "itkVariableLengthVector.h"
#include <complex>
//exclude Statistics::
//subs std::__1:: std::
extern template class itk::SimpleDataObjectDecorator<bool>;
extern template class itk::SimpleDataObjectDecorator<std::vector<unsigned long, std::allocator<unsigned long> > >;
extern template class itk::SimpleDataObjectDecorator<std::complex<float> >;
extern template class itk::SimpleDataObjectDecorator<unsigned char>;
extern template class itk::SimpleDataObjectDecorator<itk::Point<double, 2u> >;
extern template class itk::SimpleDataObjectDecorator<double>;
extern template class itk::SimpleDataObjectDecorator<itk::Array<double> >;
extern template class itk::SimpleDataObjectDecorator<short>;
extern template class itk::SimpleDataObjectDecorator<itk::FixedArray<double, 2u> >;
extern template class itk::SimpleDataObjectDecorator<itk::VariableLengthVector<float> >;
extern template class itk::SimpleDataObjectDecorator<itk::Vector<double, 2u> >;
extern template class itk::SimpleDataObjectDecorator<itk::Vector<float, 3u> >;
extern template class itk::SimpleDataObjectDecorator<itk::CovariantVector<float, 2u> >;
extern template class itk::SimpleDataObjectDecorator<itk::Vector<double, 3u> >;
extern template class itk::SimpleDataObjectDecorator<itk::FixedArray<double, 3u> >;
extern template class itk::SimpleDataObjectDecorator<int>;
extern template class itk::SimpleDataObjectDecorator<std::complex<double> >;
extern template class itk::SimpleDataObjectDecorator<itk::Array<int> >;
extern template class itk::SimpleDataObjectDecorator<itk::Array<float> >;
extern template class itk::SimpleDataObjectDecorator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >;
extern template class itk::SimpleDataObjectDecorator<float>;
extern template class itk::SimpleDataObjectDecorator<itk::Array<unsigned long> >;
extern template class itk::SimpleDataObjectDecorator<itk::VariableSizeMatrix<double> >;
extern template class itk::SimpleDataObjectDecorator<unsigned int>;
extern template class itk::SimpleDataObjectDecorator<itk::Vector<float, 2u> >;
extern template class itk::SimpleDataObjectDecorator<itk::Vector<double, 1u> >;
extern template class itk::SimpleDataObjectDecorator<unsigned short>;
#endif //__ExplicitInstantiation_itkSimpleDataObjectDecorator_h__