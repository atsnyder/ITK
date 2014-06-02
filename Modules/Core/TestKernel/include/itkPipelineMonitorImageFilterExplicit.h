#ifndef __ExplicitInstantiation_itkPipelineMonitorImageFilter_h__
#define __ExplicitInstantiation_itkPipelineMonitorImageFilter_h__
extern template class itk::PipelineMonitorImageFilter<itk::Image<float, 2u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<float, 3u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<int, 2u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<itk::RGBPixel<unsigned char>, 3u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<unsigned short, 3u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<unsigned char, 2u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<short, 2u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<unsigned char, 3u> >;
extern template class itk::PipelineMonitorImageFilter<itk::Image<unsigned short, 2u> >;
#endif //__ExplicitInstantiation_itkPipelineMonitorImageFilter_h__