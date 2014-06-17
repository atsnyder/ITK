#ifndef __ExplicitInstantiation_itkNeighborhoodOperatorImageFunction_h__
#define __ExplicitInstantiation_itkNeighborhoodOperatorImageFunction_h__
extern template class itk::NeighborhoodOperatorImageFunction<itk::Image<unsigned char, 2u>, double>;
extern template class itk::NeighborhoodOperatorImageFunction<itk::Image<float, 2u>, double>;
extern template class itk::NeighborhoodOperatorImageFunction<itk::Image<double, 2u>, double>;
extern template class itk::NeighborhoodOperatorImageFunction<itk::Image<float, 3u>, float>;
extern template class itk::NeighborhoodOperatorImageFunction<itk::Image<float, 2u>, float>;
#endif //__ExplicitInstantiation_itkNeighborhoodOperatorImageFunction_h__