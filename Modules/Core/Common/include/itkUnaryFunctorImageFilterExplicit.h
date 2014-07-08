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
#ifndef __itkUnaryFunctorImageFilterExplicit_h
#define __itkUnaryFunctorImageFilterExplicit_h
//exclude ::Functor
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, Functor::subtract<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, Functor::square<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, Functor::add<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, Functor::squareroot<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, Functor::mult<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, Functor::mult<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, Functor::subtract<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, Functor::mult<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, Functor::square<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, Functor::square<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, Functor::add<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, Functor::divide<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, Functor::divide<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, Functor::square<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, Functor::binarydecimate<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, Functor::mult<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, Functor::square<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, Functor::subtract<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, Functor::binarydecimate<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, Functor::divide<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, Functor::binarydecimate<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, Functor::binarydecimate<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, Functor::add<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, Functor::square<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, Functor::divide<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, Functor::square<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, Functor::square<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, Functor::divide<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, Functor::binarydecimate<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, Functor::mult<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, Functor::add<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, Functor::mult<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, Functor::squareroot<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, Functor::divide<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, Functor::mult<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, Functor::square<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, Functor::divide<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, Functor::add<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, Functor::squareroot<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, Functor::subtract<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, Functor::subtract<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, Functor::subtract<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, Functor::divide<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, Functor::squareroot<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, Functor::add<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, Functor::binarydecimate<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, Functor::add<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, Functor::subtract<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, Functor::binarydecimate<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, Functor::binarydecimate<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, Functor::binarydecimate<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, Functor::add<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, Functor::squareroot<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, Functor::add<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, Functor::divide<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, Functor::square<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, Functor::square<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, Functor::square<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, Functor::binarydecimate<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, Functor::mult<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, Functor::squareroot<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, Functor::mult<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, Functor::binarydecimate<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, Functor::squareroot<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, Functor::add<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, Functor::add<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, Functor::subtract<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, Functor::mult<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, Functor::mult<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, Functor::mult<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, Functor::subtract<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, Functor::square<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, Functor::binarydecimate<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, Functor::add<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, Functor::squareroot<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, Functor::subtract<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, Functor::subtract<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, Functor::square<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, Functor::squareroot<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, Functor::subtract<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, Functor::squareroot<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, Functor::mult<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, Functor::subtract<float> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, Functor::squareroot<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, Functor::mult<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, Functor::squareroot<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, Functor::divide<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, Functor::binarydecimate<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, Functor::add<unsigned int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, Functor::add<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, Functor::divide<unsigned char> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, Functor::squareroot<double> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, Functor::divide<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, Functor::subtract<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, Functor::divide<unsigned short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, Functor::divide<int> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, Functor::binarydecimate<short> >;
extern template class itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, Functor::squareroot<unsigned char> >;
#endif //__itkUnaryFunctorImageFilterExplicit_h
