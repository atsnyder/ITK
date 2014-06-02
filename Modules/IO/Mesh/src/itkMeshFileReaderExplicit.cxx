#include "itkMeshFileReader.h"

template class itk::MeshFileReader<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> >, itk::MeshConvertPixelTraits<float>, itk::MeshConvertPixelTraits<float> >; //Instantiated 6 times
