#ifndef __ExplicitInstantiation_itkVTKPolyDataWriter_h__
#define __ExplicitInstantiation_itkVTKPolyDataWriter_h__
//exclude QuadEdgeMesh
extern template class itk::VTKPolyDataWriter<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> > >;
#endif //__ExplicitInstantiation_itkVTKPolyDataWriter_h__
