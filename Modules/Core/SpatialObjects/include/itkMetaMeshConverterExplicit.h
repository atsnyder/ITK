#ifndef __ExplicitInstantiation_itkMetaMeshConverter_h__
#define __ExplicitInstantiation_itkMetaMeshConverter_h__
extern template class itk::MetaMeshConverter<3u, float, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> >;
extern template class itk::MetaMeshConverter<2u, unsigned char, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> >;
extern template class itk::MetaMeshConverter<3u, unsigned char, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> >;
extern template class itk::MetaMeshConverter<3u, unsigned short, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> >;
#endif //__ExplicitInstantiation_itkMetaMeshConverter_h__