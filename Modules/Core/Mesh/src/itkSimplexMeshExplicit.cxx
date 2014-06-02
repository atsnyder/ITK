#include "itkSimplexMesh.h"

template class itk::SimplexMesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> >; //Instantiated 3 times
template class itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >; //Instantiated 21 times
template class itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> >; //Instantiated 3 times
template class itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >; //Instantiated 6 times