#ifndef __ExplicitInstantiation_itkGaussianOperator_h__
#define __ExplicitInstantiation_itkGaussianOperator_h__
extern template class itk::GaussianOperator<float, 3u, itk::NeighborhoodAllocator<float> >;
extern template class itk::GaussianOperator<double, 3u, itk::NeighborhoodAllocator<double> >;
extern template class itk::GaussianOperator<float, 2u, itk::NeighborhoodAllocator<float> >;
extern template class itk::GaussianOperator<double, 4u, itk::NeighborhoodAllocator<double> >;
extern template class itk::GaussianOperator<double, 2u, itk::NeighborhoodAllocator<double> >;
#endif //__ExplicitInstantiation_itkGaussianOperator_h__