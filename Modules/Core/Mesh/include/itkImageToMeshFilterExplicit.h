#ifndef __ExplicitInstantiation_itkImageToMeshFilter_h__
#define __ExplicitInstantiation_itkImageToMeshFilter_h__
#include "itkImage.h"
extern template class itk::ImageToMeshFilter<itk::Image<unsigned char, 3u>, itk::PointSet<itk::Matrix<double, 3u, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Matrix<double, 3u, 3u>, 3u, 3u, float, float, itk::Matrix<double, 3u, 3u> > > >;
extern template class itk::ImageToMeshFilter<itk::Image<unsigned char, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::ImageToMeshFilter<itk::Image<unsigned short, 3u>, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
#endif //__ExplicitInstantiation_itkImageToMeshFilter_h__
