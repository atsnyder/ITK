#ifndef __ExplicitInstantiation_itkConditionalConstIterator_h__
#define __ExplicitInstantiation_itkConditionalConstIterator_h__
#include "itkImage.h"
extern template class itk::ConditionalConstIterator<itk::Image<bool, 1u> >;
extern template class itk::ConditionalConstIterator<itk::Image<bool, 3u> >;
extern template class itk::ConditionalConstIterator<itk::Image<unsigned char, 2u> >;
extern template class itk::ConditionalConstIterator<itk::Image<float, 2u> >;
extern template class itk::ConditionalConstIterator<itk::Image<bool, 2u> >;
extern template class itk::ConditionalConstIterator<itk::Image<unsigned char, 3u> >;
extern template class itk::ConditionalConstIterator<itk::Image<bool, 4u> >;
extern template class itk::ConditionalConstIterator<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
#endif //__ExplicitInstantiation_itkConditionalConstIterator_h__