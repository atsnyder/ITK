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
#include "itkGaussianOperator.h"

template class itk::GaussianOperator<float, 3u, itk::NeighborhoodAllocator<float> >; //Instantiated 26 times
template class itk::GaussianOperator<double, 3u, itk::NeighborhoodAllocator<double> >; //Instantiated 52 times
template class itk::GaussianOperator<float, 2u, itk::NeighborhoodAllocator<float> >; //Instantiated 76 times
template class itk::GaussianOperator<double, 4u, itk::NeighborhoodAllocator<double> >; //Instantiated 4 times
template class itk::GaussianOperator<double, 2u, itk::NeighborhoodAllocator<double> >; //Instantiated 114 times
