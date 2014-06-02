#ifndef __ExplicitInstantiation_itkVideoFileWriter_h__
#define __ExplicitInstantiation_itkVideoFileWriter_h__
extern template class itk::VideoFileWriter<itk::VideoStream<itk::Image<unsigned char, 2u> > >;
extern template class itk::VideoFileWriter<itk::VideoStream<itk::Image<itk::RGBPixel<unsigned char>, 2u> > >;
#endif //__ExplicitInstantiation_itkVideoFileWriter_h__