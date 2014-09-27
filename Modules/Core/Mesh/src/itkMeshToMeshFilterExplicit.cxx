#include "itkMeshToMeshFilter.h"

template class itk::MeshToMeshFilter<itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> >, itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> > >; //Instantiated 12 times
template class itk::MeshToMeshFilter<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> >, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 6 times
template class itk::MeshToMeshFilter<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >; //Instantiated 18 times
template class itk::MeshToMeshFilter<itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >; //Instantiated 6 times
template class itk::MeshToMeshFilter<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >; //Instantiated 6 times
template class itk::MeshToMeshFilter<itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >; //Instantiated 12 times
