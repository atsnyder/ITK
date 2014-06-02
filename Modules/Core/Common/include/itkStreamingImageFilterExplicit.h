#ifndef __ExplicitInstantiation_itkStreamingImageFilter_h__
#define __ExplicitInstantiation_itkStreamingImageFilter_h__
extern template class itk::StreamingImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::StreamingImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::StreamingImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::StreamingImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> >;
extern template class itk::StreamingImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::StreamingImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >;
extern template class itk::StreamingImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::StreamingImageFilter<itk::Image<itk::Vector<float, 3u>, 2u>, itk::Image<itk::Vector<float, 3u>, 2u> >;
extern template class itk::StreamingImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >;
#endif //__ExplicitInstantiation_itkStreamingImageFilter_h__