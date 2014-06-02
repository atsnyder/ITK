#ifndef __ExplicitInstantiation_itkMapContainer_h__
#define __ExplicitInstantiation_itkMapContainer_h__
#include "itkCellInterface.h"
#include "itkPoint.h"
#include <set>
//exclude QuadEdgeMesh
//exclude DefaultDynamicMeshTraits
//exclude SimplexMeshGeometry
//exclude Mesh
//exclude std::pair
//subs std::__1:: std::
extern template class itk::MapContainer<unsigned long, itk::Point<float, 2u> >;
extern template class itk::MapContainer<unsigned long, float>;
extern template class itk::MapContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::MapContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::MapContainer<unsigned long, itk::Point<float, 3u> >;
extern template class itk::MapContainer<unsigned long, itk::Point<double, 2u> >;
extern template class itk::MapContainer<unsigned long, int>;
extern template class itk::MapContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<2, double, float, unsigned long, unsigned long, unsigned long, itk::Point<double, 2u>, itk::MapContainer<unsigned long, itk::Point<double, 2u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::MapContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<3, double, double, unsigned long, unsigned long, unsigned long, itk::Point<double, 3u>, itk::MapContainer<unsigned long, itk::Point<double, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::MapContainer<unsigned long, itk::CellInterface<float, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::MapContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::MapContainer<unsigned long, bool>;
extern template class itk::MapContainer<unsigned long, unsigned long>;
extern template class itk::MapContainer<unsigned long, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > >;
extern template class itk::MapContainer<unsigned long, double>;
extern template class itk::MapContainer<unsigned long, itk::Point<double, 3u> >;
#endif //__ExplicitInstantiation_itkMapContainer_h__