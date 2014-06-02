#ifndef __ExplicitInstantiation_itkDiffeomorphicDemonsRegistrationFilter_h__
#define __ExplicitInstantiation_itkDiffeomorphicDemonsRegistrationFilter_h__
extern template class itk::DiffeomorphicDemonsRegistrationFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::DiffeomorphicDemonsRegistrationFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >;
#endif //__ExplicitInstantiation_itkDiffeomorphicDemonsRegistrationFilter_h__