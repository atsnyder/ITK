#include "itkPipelineMonitorImageFilter.h"

template class itk::PipelineMonitorImageFilter<itk::Image<float, 2u> >; //Instantiated 6 times
template class itk::PipelineMonitorImageFilter<itk::Image<float, 3u> >; //Instantiated 9 times
template class itk::PipelineMonitorImageFilter<itk::Image<itk::SymmetricSecondRankTensor<double, 3u>, 3u> >; //Instantiated 3 times
template class itk::PipelineMonitorImageFilter<itk::Image<int, 2u> >; //Instantiated 3 times
template class itk::PipelineMonitorImageFilter<itk::Image<itk::RGBPixel<unsigned char>, 3u> >; //Instantiated 6 times
template class itk::PipelineMonitorImageFilter<itk::Image<unsigned short, 3u> >; //Instantiated 6 times
template class itk::PipelineMonitorImageFilter<itk::Image<unsigned char, 2u> >; //Instantiated 18 times
template class itk::PipelineMonitorImageFilter<itk::Image<short, 2u> >; //Instantiated 15 times
template class itk::PipelineMonitorImageFilter<itk::Image<unsigned char, 3u> >; //Instantiated 24 times
template class itk::PipelineMonitorImageFilter<itk::Image<unsigned short, 2u> >; //Instantiated 3 times