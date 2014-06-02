#ifndef __ExplicitInstantiation_itkLaplacianOperator_h__
#define __ExplicitInstantiation_itkLaplacianOperator_h__
extern template class itk::LaplacianOperator<float, 2u, itk::NeighborhoodAllocator<float> >;
extern template class itk::LaplacianOperator<double, 3u, itk::NeighborhoodAllocator<double> >;
extern template class itk::LaplacianOperator<double, 2u, itk::NeighborhoodAllocator<double> >;
extern template class itk::LaplacianOperator<float, 3u, itk::NeighborhoodAllocator<float> >;
#endif //__ExplicitInstantiation_itkLaplacianOperator_h__