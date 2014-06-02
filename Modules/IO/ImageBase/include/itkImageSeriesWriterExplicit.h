#ifndef __ExplicitInstantiation_itkImageSeriesWriter_h__
#define __ExplicitInstantiation_itkImageSeriesWriter_h__
extern template class itk::ImageSeriesWriter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 2u> >;
extern template class itk::ImageSeriesWriter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::ImageSeriesWriter<itk::Image<short, 3u>, itk::Image<short, 2u> >;
extern template class itk::ImageSeriesWriter<itk::Image<itk::RGBPixel<unsigned char>, 3u>, itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
#endif //__ExplicitInstantiation_itkImageSeriesWriter_h__