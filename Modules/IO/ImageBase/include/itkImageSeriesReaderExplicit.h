#ifndef __ExplicitInstantiation_itkImageSeriesReader_h__
#define __ExplicitInstantiation_itkImageSeriesReader_h__
extern template class itk::ImageSeriesReader<itk::VectorImage<unsigned short, 3u> >;
extern template class itk::ImageSeriesReader<itk::Image<itk::RGBPixel<unsigned char>, 3u> >;
extern template class itk::ImageSeriesReader<itk::Image<short, 3u> >;
extern template class itk::ImageSeriesReader<itk::Image<unsigned short, 5u> >;
extern template class itk::ImageSeriesReader<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageSeriesReader<itk::Image<short, 5u> >;
extern template class itk::ImageSeriesReader<itk::Image<short, 4u> >;
extern template class itk::ImageSeriesReader<itk::Image<short, 2u> >;
extern template class itk::ImageSeriesReader<itk::Image<unsigned char, 3u> >;
#endif //__ExplicitInstantiation_itkImageSeriesReader_h__