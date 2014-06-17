#ifndef __ExplicitInstantiation_itkNearestNeighborInterpolateImageFunction_h__
#define __ExplicitInstantiation_itkNearestNeighborInterpolateImageFunction_h__
extern template class itk::NearestNeighborInterpolateImageFunction<itk::Image<float, 2u>, double>;
extern template class itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned char, 2u>, double>;
extern template class itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned short, 3u>, double>;
extern template class itk::NearestNeighborInterpolateImageFunction<itk::Image<float, 2u>, float>;
extern template class itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned char, 3u>, double>;
extern template class itk::NearestNeighborInterpolateImageFunction<itk::Image<float, 3u>, double>;
#endif //__ExplicitInstantiation_itkNearestNeighborInterpolateImageFunction_h__