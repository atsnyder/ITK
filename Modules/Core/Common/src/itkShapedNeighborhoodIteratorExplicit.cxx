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
#include "itkShapedNeighborhoodIterator.h"

template class itk::ShapedNeighborhoodIterator<itk::Image<short, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 4 times
template class itk::ShapedNeighborhoodIterator<itk::Image<unsigned char, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::ShapedNeighborhoodIterator<itk::Image<float, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::ShapedNeighborhoodIterator<itk::Image<unsigned char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 34 times
template class itk::ShapedNeighborhoodIterator<itk::Image<bool, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> > >; //Instantiated 4 times
template class itk::ShapedNeighborhoodIterator<itk::Image<signed char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 24 times
template class itk::ShapedNeighborhoodIterator<itk::Image<char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<char, 2u>, itk::Image<char, 2u> > >; //Instantiated 46 times
