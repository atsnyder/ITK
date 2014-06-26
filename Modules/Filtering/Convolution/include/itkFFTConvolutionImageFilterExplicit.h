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
#ifndef __itkFFTConvolutionImageFilterExplicit_h
#define __itkFFTConvolutionImageFilterExplicit_h
extern template class itk::FFTConvolutionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u>, itk::Image<int, 2u>, float>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, double>;
extern template class itk::FFTConvolutionImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, double>;
#endif //__itkFFTConvolutionImageFilterExplicit_h
