#include "itkImageToMeshFilter.h"

template class itk::ImageToMeshFilter<itk::Image<unsigned char, 3u>, itk::PointSet<itk::Matrix<double, 3u, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Matrix<double, 3u, 3u>, 3u, 3u, float, float, itk::Matrix<double, 3u, 3u> > > >; //Instantiated 4 times
template class itk::ImageToMeshFilter<itk::Image<unsigned char, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 4 times
template class itk::ImageToMeshFilter<itk::Image<unsigned short, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 4 times