#include "itkMeshSpatialObject.h"

template class itk::MeshSpatialObject<itk::Mesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> > >; //Instantiated 9 times
template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 2u, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> > >; //Instantiated 54 times
template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 3u, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> > >; //Instantiated 24 times
template class itk::MeshSpatialObject<itk::Mesh<unsigned short, 3u, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> > >; //Instantiated 6 times
