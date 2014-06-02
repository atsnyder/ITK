#ifndef __ExplicitInstantiation_itkMeshSource_h__
#define __ExplicitInstantiation_itkMeshSource_h__
#include "itkSimplexMesh.h"
//exclude VoronoiDiagram2D
//exclude QuadEdgeMesh
extern template class itk::MeshSource<itk::PointSet<itk::Vector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 3u>, 3u, 3u, float, float, itk::Vector<float, 3u> > > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::MeshSource<itk::PointSet<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> > >;
extern template class itk::MeshSource<itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshSource<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> > >;
extern template class itk::MeshSource<itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> > >;
extern template class itk::MeshSource<itk::Mesh<itk::Point<float, 2u>, 3u, itk::DefaultStaticMeshTraits<itk::Point<float, 2u>, 3u, 3u, float, float, itk::Point<float, 2u> > > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshSource<itk::PointSet<itk::Matrix<double, 3u, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Matrix<double, 3u, 3u>, 3u, 3u, float, float, itk::Matrix<double, 3u, 3u> > > >;
extern template class itk::MeshSource<itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
#endif //__ExplicitInstantiation_itkMeshSource_h__
