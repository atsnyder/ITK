#ifndef __ExplicitInstantiation_itkDerivativeOperator_h__
#define __ExplicitInstantiation_itkDerivativeOperator_h__
extern template class itk::DerivativeOperator<float, 2u, itk::NeighborhoodAllocator<float> >;
extern template class itk::DerivativeOperator<double, 2u, itk::NeighborhoodAllocator<double> >;
extern template class itk::DerivativeOperator<double, 1u, itk::NeighborhoodAllocator<double> >;
extern template class itk::DerivativeOperator<double, 3u, itk::NeighborhoodAllocator<double> >;
extern template class itk::DerivativeOperator<float, 3u, itk::NeighborhoodAllocator<float> >;
#endif //__ExplicitInstantiation_itkDerivativeOperator_h__