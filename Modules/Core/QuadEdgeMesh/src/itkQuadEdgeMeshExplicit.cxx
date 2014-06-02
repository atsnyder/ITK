#include "itkQuadEdgeMesh.h"

template class itk::QuadEdgeMesh<itk::CovariantVector<float, 3u>, 3u, itk::QuadEdgeMeshTraits<itk::CovariantVector<float, 3u>, 3u, bool, bool, float, float> >; //Instantiated 3 times
template class itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshExtendedTraits<double, 3u, 2u, double, double, double, bool, bool> >; //Instantiated 12 times
template class itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshTraits<float, 3u, bool, bool, float, float> >; //Instantiated 21 times
template class itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshTraits<double, 3u, bool, bool, float, float> >; //Instantiated 87 times
template class itk::QuadEdgeMesh<itk::Vector<double, 3u>, 3u, itk::QuadEdgeMeshExtendedTraits<itk::Vector<double, 3u>, 3u, 2u, double, double, itk::Vector<double, 3u>, bool, bool> >; //Instantiated 3 times
template class itk::QuadEdgeMesh<int, 3u, itk::QuadEdgeMeshTraits<int, 3u, bool, bool, float, float> >; //Instantiated 6 times
template class itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshExtendedTraits<float, 3u, 2u, double, double, float, bool, bool> >; //Instantiated 15 times