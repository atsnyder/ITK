#ifndef __ExplicitInstantiation_itkNeighborhoodIterator_h__
#define __ExplicitInstantiation_itkNeighborhoodIterator_h__
#include "itkSparseImage.h"
//exclude NormalBandNode
extern template class itk::NeighborhoodIterator<itk::Image<double, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned int, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned char, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 1u>, itk::Image<unsigned char, 1u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned int, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<float, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned char, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<bool, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<float, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned short, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned long, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned short, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<itk::Vector<float, 3u>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<signed char, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<int, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<unsigned char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<itk::Vector<float, 2u>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<int, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<bool, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 1u>, itk::Image<bool, 1u> > >;
extern template class itk::NeighborhoodIterator<itk::Image<signed char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >;
#endif //__ExplicitInstantiation_itkNeighborhoodIterator_h__