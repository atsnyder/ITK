#ifndef __ExplicitInstantiation_itkMetaDataObject_h__
#define __ExplicitInstantiation_itkMetaDataObject_h__
#include "itkArray.h"
#include "itkMatrix.h"
#include <vector>
//subs std::__1:: std::
extern template class itk::MetaDataObject<float>;
extern template class itk::MetaDataObject<short>;
extern template class itk::MetaDataObject<unsigned short>;
extern template class itk::MetaDataObject<itk::Array<double> >;
extern template class itk::MetaDataObject<char>;
extern template class itk::MetaDataObject<bool>;
extern template class itk::MetaDataObject<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >;
extern template class itk::MetaDataObject<itk::Matrix<double, 3u, 3u> >;
extern template class itk::MetaDataObject<itk::Array<char> >;
extern template class itk::MetaDataObject<unsigned long>;
extern template class itk::MetaDataObject<unsigned int>;
extern template class itk::MetaDataObject<itk::Array<float> >;
extern template class itk::MetaDataObject<int>;
extern template class itk::MetaDataObject<double>;
extern template class itk::MetaDataObject<unsigned char>;
extern template class itk::MetaDataObject<long>;
#endif //__ExplicitInstantiation_itkMetaDataObject_h__