#ifndef __ExplicitInstantiation_itkRegularSphereMeshSource_h__
#define __ExplicitInstantiation_itkRegularSphereMeshSource_h__
//exclude QuadEdgeMesh
extern template class itk::RegularSphereMeshSource<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> > >;
extern template class itk::RegularSphereMeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::RegularSphereMeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::RegularSphereMeshSource<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
#endif //__ExplicitInstantiation_itkRegularSphereMeshSource_h__
