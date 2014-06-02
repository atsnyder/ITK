#include "itkRegularSphereMeshSource.h"

template class itk::RegularSphereMeshSource<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> > >; //Instantiated 6 times
template class itk::RegularSphereMeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >; //Instantiated 12 times
template class itk::RegularSphereMeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 4 times
template class itk::RegularSphereMeshSource<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >; //Instantiated 6 times
