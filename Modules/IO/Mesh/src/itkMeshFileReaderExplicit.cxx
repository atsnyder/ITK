#include "itkMeshFileReader.h"

template class itk::MeshFileReader<itk::Mesh<itk::VariableLengthVector<float>, 3u, itk::DefaultStaticMeshTraits<itk::VariableLengthVector<float>, 3u, 3u, float, float, itk::VariableLengthVector<float> > >, itk::MeshConvertPixelTraits<itk::VariableLengthVector<float> >, itk::MeshConvertPixelTraits<itk::VariableLengthVector<float> > >; //Instantiated 3 times
template class itk::MeshFileReader<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> >, itk::MeshConvertPixelTraits<float>, itk::MeshConvertPixelTraits<float> >; //Instantiated 9 times
template class itk::MeshFileReader<itk::Mesh<itk::CovariantVector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::CovariantVector<float, 3u>, 3u, 3u, float, float, itk::CovariantVector<float, 3u> > >, itk::MeshConvertPixelTraits<itk::CovariantVector<float, 3u> >, itk::MeshConvertPixelTraits<itk::CovariantVector<float, 3u> > >; //Instantiated 3 times
