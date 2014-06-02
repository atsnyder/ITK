#ifndef __ExplicitInstantiation_itkImportImageFilter_h__
#define __ExplicitInstantiation_itkImportImageFilter_h__
extern template class itk::ImportImageFilter<itk::Vector<double, 3u>, 3u>;
extern template class itk::ImportImageFilter<itk::Vector<double, 2u>, 3u>;
extern template class itk::ImportImageFilter<itk::Vector<double, 3u>, 4u>;
extern template class itk::ImportImageFilter<itk::Vector<double, 2u>, 2u>;
extern template class itk::ImportImageFilter<itk::Vector<float, 2u>, 2u>;
extern template class itk::ImportImageFilter<itk::Vector<float, 3u>, 3u>;
#endif //__ExplicitInstantiation_itkImportImageFilter_h__