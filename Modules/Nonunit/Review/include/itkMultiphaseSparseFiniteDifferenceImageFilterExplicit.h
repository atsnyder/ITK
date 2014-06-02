#ifndef __ExplicitInstantiation_itkMultiphaseSparseFiniteDifferenceImageFilter_h__
#define __ExplicitInstantiation_itkMultiphaseSparseFiniteDifferenceImageFilter_h__
extern template class itk::MultiphaseSparseFiniteDifferenceImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::ScalarChanAndVeseLevelSetFunction<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::ConstrainedRegionBasedLevelSetFunctionSharedData<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::ScalarChanAndVeseLevelSetFunctionData<itk::Image<float, 2u>, itk::Image<float, 2u> > > >, unsigned int>;
extern template class itk::MultiphaseSparseFiniteDifferenceImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, itk::ScalarChanAndVeseLevelSetFunction<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::ConstrainedRegionBasedLevelSetFunctionSharedData<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::ScalarChanAndVeseLevelSetFunctionData<itk::Image<double, 3u>, itk::Image<float, 3u> > > >, unsigned long>;
extern template class itk::MultiphaseSparseFiniteDifferenceImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::Image<double, 3u>, itk::ScalarChanAndVeseLevelSetFunction<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::ConstrainedRegionBasedLevelSetFunctionSharedData<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::ScalarChanAndVeseLevelSetFunctionData<itk::Image<double, 3u>, itk::Image<float, 3u> > > >, unsigned int>;
#endif //__ExplicitInstantiation_itkMultiphaseSparseFiniteDifferenceImageFilter_h__