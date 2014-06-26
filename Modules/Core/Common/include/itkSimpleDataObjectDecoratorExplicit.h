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
#ifndef __itkSimpleDataObjectDecoratorExplicit_h
#define __itkSimpleDataObjectDecoratorExplicit_h
#include "itkArray.h"
#include "itkFixedArray.h"
#include "itkVector.h"
#include "itkVariableSizeMatrix.h"
#include "itkPoint.h"
#include "itkVariableLengthVector.h"
#include <complex>
//exclude Statistics::
//subs std:: std::
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
#endif //__itkSimpleDataObjectDecoratorExplicit_h
