#ifndef __ExplicitInstantiation_itkMeshSpatialObject_h__
#define __ExplicitInstantiation_itkMeshSpatialObject_h__
extern template class itk::MeshSpatialObject<itk::Mesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> > >;
extern template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 2u, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> > >;
extern template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 3u, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> > >;
extern template class itk::MeshSpatialObject<itk::Mesh<unsigned short, 3u, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> > >;
#endif //__ExplicitInstantiation_itkMeshSpatialObject_h__