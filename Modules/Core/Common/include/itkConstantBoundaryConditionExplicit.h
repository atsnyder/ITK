#ifndef __ExplicitInstantiation_itkConstantBoundaryCondition_h__
#define __ExplicitInstantiation_itkConstantBoundaryCondition_h__
#include "itkImage.h"
extern template class itk::ConstantBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<double, 2u>, itk::Image<float, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<bool, 1u>, itk::Image<bool, 1u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<unsigned char, 1u>, itk::Image<unsigned char, 1u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<float, 2u>, itk::Image<double, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::ConstantBoundaryCondition<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> >;
#endif //__ExplicitInstantiation_itkConstantBoundaryCondition_h__