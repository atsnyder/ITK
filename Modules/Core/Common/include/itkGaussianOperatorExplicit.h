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
#ifndef __itkGaussianOperatorExplicit_h
#define __itkGaussianOperatorExplicit_h
extern template class itk::GaussianOperator<float, 3u, itk::NeighborhoodAllocator<float> >;
extern template class itk::GaussianOperator<double, 3u, itk::NeighborhoodAllocator<double> >;
extern template class itk::GaussianOperator<float, 2u, itk::NeighborhoodAllocator<float> >;
extern template class itk::GaussianOperator<double, 4u, itk::NeighborhoodAllocator<double> >;
extern template class itk::GaussianOperator<double, 2u, itk::NeighborhoodAllocator<double> >;
#endif //__itkGaussianOperatorExplicit_h
