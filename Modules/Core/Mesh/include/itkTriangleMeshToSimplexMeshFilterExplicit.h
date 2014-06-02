#ifndef __ExplicitInstantiation_itkTriangleMeshToSimplexMeshFilter_h__
#define __ExplicitInstantiation_itkTriangleMeshToSimplexMeshFilter_h__
extern template class itk::TriangleMeshToSimplexMeshFilter<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> >, itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::TriangleMeshToSimplexMeshFilter<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::TriangleMeshToSimplexMeshFilter<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
#endif //__ExplicitInstantiation_itkTriangleMeshToSimplexMeshFilter_h__