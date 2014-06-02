#include "itkMeshSpatialObject.h"

template class itk::MeshSpatialObject<itk::Mesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> > >; //Instantiated 6 times
template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 2u, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> > >; //Instantiated 36 times
template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 3u, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> > >; //Instantiated 16 times
template class itk::MeshSpatialObject<itk::Mesh<unsigned short, 3u, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> > >; //Instantiated 4 times