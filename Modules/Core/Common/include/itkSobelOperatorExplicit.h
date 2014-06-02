#ifndef __ExplicitInstantiation_itkSobelOperator_h__
#define __ExplicitInstantiation_itkSobelOperator_h__
extern template class itk::SobelOperator<float, 2u, itk::NeighborhoodAllocator<float> >;
extern template class itk::SobelOperator<double, 2u, itk::NeighborhoodAllocator<double> >;
extern template class itk::SobelOperator<float, 3u, itk::NeighborhoodAllocator<float> >;
#endif //__ExplicitInstantiation_itkSobelOperator_h__