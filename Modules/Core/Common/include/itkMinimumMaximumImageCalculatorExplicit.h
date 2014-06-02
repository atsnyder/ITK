#ifndef __ExplicitInstantiation_itkMinimumMaximumImageCalculator_h__
#define __ExplicitInstantiation_itkMinimumMaximumImageCalculator_h__
#include "itkImage.h"
extern template class itk::MinimumMaximumImageCalculator<itk::Image<double, 2u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<float, 2u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<short, 3u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<float, 3u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<unsigned char, 2u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<unsigned short, 2u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<short, 2u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<double, 3u> >;
extern template class itk::MinimumMaximumImageCalculator<itk::Image<unsigned char, 3u> >;
#endif //__ExplicitInstantiation_itkMinimumMaximumImageCalculator_h__