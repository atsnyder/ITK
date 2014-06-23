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
#include "itkConstShapedNeighborhoodIterator.h"

template class itk::ConstShapedNeighborhoodIterator<itk::Image<float, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 9 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<long, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 3u>, itk::Image<long, 3u> > >; //Instantiated 3 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<short, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<unsigned long, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >; //Instantiated 3 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<long, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 1u>, itk::Image<long, 1u> > >; //Instantiated 135 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<unsigned char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 63 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<unsigned short, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<unsigned char, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 15 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<unsigned char, 3u>, itk::ConstantBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 3 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<int, 2u>, itk::ConstantBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 3 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<int, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<signed char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 36 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<char, 2u>, itk::Image<char, 2u> > >; //Instantiated 69 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<double, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 3 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<long, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 2u>, itk::Image<long, 2u> > >; //Instantiated 42 times
template class itk::ConstShapedNeighborhoodIterator<itk::Image<bool, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> > >; //Instantiated 6 times
