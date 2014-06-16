#ifndef __ExplicitInstantiation_itkQuadEdgeMesh_h__
#define __ExplicitInstantiation_itkQuadEdgeMesh_h__
#include "itkQuadEdgeMeshExtendedTraits.h"
extern template class itk::QuadEdgeMesh<itk::CovariantVector<float, 3u>, 3u, itk::QuadEdgeMeshTraits<itk::CovariantVector<float, 3u>, 3u, bool, bool, float, float> >;
extern template class itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshExtendedTraits<double, 3u, 2u, double, double, double, bool, bool> >;
extern template class itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshTraits<float, 3u, bool, bool, float, float> >;
extern template class itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshTraits<double, 3u, bool, bool, float, float> >;
extern template class itk::QuadEdgeMesh<itk::Vector<double, 3u>, 3u, itk::QuadEdgeMeshExtendedTraits<itk::Vector<double, 3u>, 3u, 2u, double, double, itk::Vector<double, 3u>, bool, bool> >;
extern template class itk::QuadEdgeMesh<int, 3u, itk::QuadEdgeMeshTraits<int, 3u, bool, bool, float, float> >;
extern template class itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshExtendedTraits<float, 3u, 2u, double, double, float, bool, bool> >;
#endif //__ExplicitInstantiation_itkQuadEdgeMesh_h__