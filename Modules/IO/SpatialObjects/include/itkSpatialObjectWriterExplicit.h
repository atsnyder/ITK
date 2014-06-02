#ifndef __ExplicitInstantiation_itkSpatialObjectWriter_h__
#define __ExplicitInstantiation_itkSpatialObjectWriter_h__
extern template class itk::SpatialObjectWriter<3u, unsigned char, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> >;
extern template class itk::SpatialObjectWriter<2u, unsigned char, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> >;
extern template class itk::SpatialObjectWriter<3u, float, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> >;
#endif //__ExplicitInstantiation_itkSpatialObjectWriter_h__