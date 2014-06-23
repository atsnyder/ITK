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
#ifndef __ExplicitInstantiation_itkDenseFiniteDifferenceImageFilter_h__
#define __ExplicitInstantiation_itkDenseFiniteDifferenceImageFilter_h__
extern template class itk::DenseFiniteDifferenceImageFilter<itk::Image<itk::CovariantVector<float, 2u>, 2u>, itk::Image<itk::CovariantVector<float, 2u>, 2u> >;
extern template class itk::DenseFiniteDifferenceImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u> >;
extern template class itk::DenseFiniteDifferenceImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::DenseFiniteDifferenceImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::DenseFiniteDifferenceImageFilter<itk::Image<itk::RGBPixel<float>, 2u>, itk::Image<itk::RGBPixel<float>, 2u> >;
extern template class itk::DenseFiniteDifferenceImageFilter<itk::Image<itk::Vector<float, 3u>, 2u>, itk::Image<itk::Vector<float, 3u>, 2u> >;
extern template class itk::DenseFiniteDifferenceImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >;
#endif //__ExplicitInstantiation_itkDenseFiniteDifferenceImageFilter_h__
