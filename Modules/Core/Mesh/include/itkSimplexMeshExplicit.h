#ifndef __ExplicitInstantiation_itkSimplexMesh_h__
#define __ExplicitInstantiation_itkSimplexMesh_h__
extern template class itk::SimplexMesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> >;
extern template class itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> >;
extern template class itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >;
#endif //__ExplicitInstantiation_itkSimplexMesh_h__