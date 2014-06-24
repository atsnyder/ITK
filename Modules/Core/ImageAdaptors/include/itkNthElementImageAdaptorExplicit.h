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
#ifndef __itkNthElementImageAdaptorExplicit_h
#define __itkNthElementImageAdaptorExplicit_h
extern template class itk::NthElementImageAdaptor<itk::Image<itk::CovariantVector<double, 2u>, 2u>, float>;
extern template class itk::NthElementImageAdaptor<itk::Image<itk::Vector<float, 3u>, 3u>, float>;
extern template class itk::NthElementImageAdaptor<itk::Image<itk::FixedArray<float, 2u>, 2u>, float>;
extern template class itk::NthElementImageAdaptor<itk::Image<itk::DiffusionTensor3D<double>, 3u>, float>;
extern template class itk::NthElementImageAdaptor<itk::Image<itk::CovariantVector<float, 2u>, 2u>, float>;
extern template class itk::NthElementImageAdaptor<itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u>, float>;
extern template class itk::NthElementImageAdaptor<itk::Image<itk::CovariantVector<double, 3u>, 3u>, float>;
#endif //__itkNthElementImageAdaptorExplicit_h
