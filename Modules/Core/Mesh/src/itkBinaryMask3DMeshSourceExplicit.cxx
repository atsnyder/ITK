#include "itkBinaryMask3DMeshSource.h"

template class itk::BinaryMask3DMeshSource<itk::Image<float, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 3 times
template class itk::BinaryMask3DMeshSource<itk::Image<unsigned short, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 6 times
template class itk::BinaryMask3DMeshSource<itk::Image<unsigned char, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 6 times
