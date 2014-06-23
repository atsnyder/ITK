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
#ifndef __itkImageLinearIteratorWithIndexExplicit_h
#define __itkImageLinearIteratorWithIndexExplicit_h
//exclude VectorImage
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<short, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned char, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned short, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 1u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 1u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned char, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 3u> >;
#endif //__itkImageLinearIteratorWithIndexExplicit_h
