#include "itkConstrainedRegionBasedLevelSetFunctionSharedData.h"

template class itk::ConstrainedRegionBasedLevelSetFunctionSharedData<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::ScalarChanAndVeseLevelSetFunctionData<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 4 times
template class itk::ConstrainedRegionBasedLevelSetFunctionSharedData<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::ScalarChanAndVeseLevelSetFunctionData<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 4 times