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
#ifndef __itkImageBoundaryConditionExplicit_h
#define __itkImageBoundaryConditionExplicit_h
extern template class itk::ImageBoundaryCondition<itk::Image<bool, 3u>, itk::Image<bool, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<short, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<double, 6u>, itk::Image<double, 6u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned char, 1u>, itk::Image<unsigned char, 1u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<std::deque<itk::LabelObjectLine<2u>, std::allocator<itk::LabelObjectLine<2u> > >, 1u>, itk::Image<std::deque<itk::LabelObjectLine<2u>, std::allocator<itk::LabelObjectLine<2u> > >, 1u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<short, 2u>, itk::VectorImage<short, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<bool, 1u>, itk::Image<bool, 1u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<long, 1u>, itk::Image<long, 1u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<long, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<float, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<double, 4u>, itk::Image<double, 4u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<int, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<short, 3u>, itk::VectorImage<short, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<double, 2u>, itk::VectorImage<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<std::complex<float>, 2u>, itk::Image<std::complex<float>, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<short, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<int, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<long, 2u>, itk::Image<long, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<int, 2u>, itk::VectorImage<int, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<std::deque<itk::LabelObjectLine<3u>, std::allocator<itk::LabelObjectLine<3u> > >, 2u>, itk::Image<std::deque<itk::LabelObjectLine<3u>, std::allocator<itk::LabelObjectLine<3u> > >, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<float, 4u>, itk::Image<float, 4u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned short, 3u>, itk::VectorImage<unsigned short, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned int, 4u>, itk::Image<unsigned int, 4u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<std::complex<float>, 3u>, itk::Image<std::complex<float>, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned long, 3u>, itk::VectorImage<unsigned long, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<float, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned long, 2u>, itk::VectorImage<unsigned long, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned long, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<long, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned char, 3u>, itk::VectorImage<unsigned char, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned int, 3u>, itk::VectorImage<unsigned int, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned int, 2u>, itk::VectorImage<unsigned int, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<signed char, 3u>, itk::VectorImage<signed char, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned long, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<float, 2u>, 3u>, itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<double, 3u>, itk::VectorImage<double, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 4u>, itk::Image<itk::Vector<float, 3u>, 4u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<double, 2u>, 3u>, itk::Image<itk::Vector<double, 2u>, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<long, 2u>, itk::VectorImage<long, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<signed char, 2u>, itk::VectorImage<signed char, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<long, 3u>, itk::Image<long, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<float, 2u>, itk::VectorImage<float, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<int, 3u>, itk::VectorImage<int, 3u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<unsigned short, 2u>, itk::VectorImage<unsigned short, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> >;
extern template class itk::ImageBoundaryCondition<itk::VectorImage<long, 3u>, itk::VectorImage<long, 3u> >;
#endif //__itkImageBoundaryConditionExplicit_h
