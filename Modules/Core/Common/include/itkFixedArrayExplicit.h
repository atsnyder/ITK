#ifndef __ExplicitInstantiation_itkFixedArray_h__
#define __ExplicitInstantiation_itkFixedArray_h__
#include "itkNeighborhood.h"
extern template class itk::FixedArray<itk::Neighborhood<double, 2u, itk::NeighborhoodAllocator<double> >, 4u>;
#endif //__ExplicitInstantiation_itkFixedArray_h__