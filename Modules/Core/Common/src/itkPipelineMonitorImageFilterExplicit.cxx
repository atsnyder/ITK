/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
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
