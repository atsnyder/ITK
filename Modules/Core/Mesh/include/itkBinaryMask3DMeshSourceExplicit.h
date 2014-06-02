#ifndef __ExplicitInstantiation_itkBinaryMask3DMeshSource_h__
#define __ExplicitInstantiation_itkBinaryMask3DMeshSource_h__
//exclude QuadEdgeMesh
extern template class itk::BinaryMask3DMeshSource<itk::Image<float, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::BinaryMask3DMeshSource<itk::Image<unsigned short, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::BinaryMask3DMeshSource<itk::Image<unsigned char, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
#endif //__ExplicitInstantiation_itkBinaryMask3DMeshSource_h__
