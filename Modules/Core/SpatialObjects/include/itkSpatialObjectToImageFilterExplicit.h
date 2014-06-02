#ifndef __ExplicitInstantiation_itkSpatialObjectToImageFilter_h__
#define __ExplicitInstantiation_itkSpatialObjectToImageFilter_h__
extern template class itk::SpatialObjectToImageFilter<itk::GroupSpatialObject<3u>, itk::Image<short, 3u> >;
extern template class itk::SpatialObjectToImageFilter<itk::BoxSpatialObject<2u>, itk::Image<unsigned char, 2u> >;
#endif //__ExplicitInstantiation_itkSpatialObjectToImageFilter_h__