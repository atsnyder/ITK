#ifndef __ExplicitInstantiation_itkMeshFileReader_h__
#define __ExplicitInstantiation_itkMeshFileReader_h__
//exclude QuadEdgeMesh
extern template class itk::MeshFileReader<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> >, itk::MeshConvertPixelTraits<float>, itk::MeshConvertPixelTraits<float> >;
#endif //__ExplicitInstantiation_itkMeshFileReader_h__
