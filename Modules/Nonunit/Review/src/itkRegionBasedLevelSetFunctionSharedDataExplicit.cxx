#include "itkRegionBasedLevelSetFunctionSharedData.h"

template class itk::RegionBasedLevelSetFunctionSharedData<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::ScalarChanAndVeseLevelSetFunctionData<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 9 times
template class itk::RegionBasedLevelSetFunctionSharedData<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::ScalarChanAndVeseLevelSetFunctionData<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 9 times