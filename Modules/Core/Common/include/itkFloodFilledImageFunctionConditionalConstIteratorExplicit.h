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
#ifndef __itkFloodFilledImageFunctionConditionalConstIteratorExplicit_h
#define __itkFloodFilledImageFunctionConditionalConstIteratorExplicit_h
//exclude BinaryThresholdImageFunction
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<int, 2u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<short, 2u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<double, 2u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<float, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<unsigned char, 2u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<int, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<signed char, 2u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<unsigned short, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<unsigned char, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<double, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<unsigned int, 2u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<unsigned short, 2u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<signed char, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<short, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 3u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<unsigned int, 3u>, float> >;
extern template class itk::FloodFilledImageFunctionConditionalConstIterator<itk::Image<unsigned char, 2u>, itk::MahalanobisDistanceThresholdImageFunction<itk::VectorImage<float, 2u>, float> >;
#endif //__itkFloodFilledImageFunctionConditionalConstIteratorExplicit_h
