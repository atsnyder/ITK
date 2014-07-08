#include "itkSmartPointer.h"

template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, std::greater<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, std::greater<float> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageToImageFilter<itk::Image<float, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 7u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, unsigned char> >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned short, 2u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::AffineTransform<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned short, 2u>, itk::VectorImage<unsigned short, 2u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<signed char, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<double, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<char, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<short, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 3u>, 4u> >; //Instantiated 14 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<unsigned int, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Cast<short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::BinaryBallStructuringElement<unsigned short, 3u, itk::NeighborhoodAllocator<unsigned short> > > >; //Instantiated 48 times
template class itk::SmartPointer<itk::WarpVectorImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::BinaryBallStructuringElement<unsigned char, 3u, itk::NeighborhoodAllocator<unsigned char> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned int, 2u> >; //Instantiated 264 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LevelSetFunction<itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<short, 3u>, itk::VectorImage<short, 3u> > >; //Instantiated 82 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u>, itk::Functor::Cast<unsigned int, float> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DiscreteGaussianImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::Histogram<short, itk::Statistics::DenseFrequencyContainer2> >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Cast<unsigned int, unsigned int> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::BinaryThreshold<float, float> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<double, 2u>, double> >; //Instantiated 40 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<float, 3u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetric<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ThresholdImageFilter<itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::BinaryBallStructuringElement<float, 3u, itk::NeighborhoodAllocator<float> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<unsigned short, 2u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::AffineTransform<float, 3u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<short, 3u>, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::Image<signed char, 3u> >; //Instantiated 798 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<double, 4u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<int, 3u>, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<float, 2u> > >; //Instantiated 140 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<double, 3u>, double> >; //Instantiated 40 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<unsigned short, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<unsigned int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::BinaryNot<int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ProgressAccumulator>; //Instantiated 470 times
template class itk::SmartPointer<itk::ImageMomentsCalculator<itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<float, 2u>, itk::Functor::Cast<unsigned char, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<double, 2u>, 2u>, double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BSplineKernelFunction<2u, double> >; //Instantiated 38 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<double, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<float, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<double, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 4u>, itk::Image<unsigned int, 4u>, itk::Functor::Cast<unsigned int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Div<float, float, float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<double, 2u>, 2u>, double> >; //Instantiated 24 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::VectorImageToImageAdaptor<float, 3u> const>; //Instantiated 16 times
template class itk::SmartPointer<itk::MatrixOffsetTransformBase<float, 2u, 2u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::KernelFunctionBase<double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<itk::CovariantVector<double, 3u>, 3u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 2u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<double, std::less<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, std::greater<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<float, 3u> > >; //Instantiated 54 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Statistics::ScalarImageToHistogramGenerator<itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<signed char, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NthElementImageAdaptor<itk::Image<itk::CovariantVector<double, 2u>, 2u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<double, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<float, 1u>, 3u>, itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<long, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::IntensityWindowingTransform<double, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 3u>, 3u> const>; //Instantiated 72 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<signed char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned short, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::VersorTransform<double> >; //Instantiated 62 times
template class itk::SmartPointer<itk::LabelUniqueLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned int, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<short, 3u> > >; //Instantiated 478 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<short, std::greater<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Cast<double, unsigned char> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, std::greater<unsigned short> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u>, itk::Functor::Add2<itk::Vector<double, 3u>, itk::Vector<double, 3u>, itk::Vector<double, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DiscreteGaussianImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 2u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<unsigned int, 3u> >; //Instantiated 264 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 7u>, 4u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<short, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::WatershedMiniPipelineProgressCommand>; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Functor::Sub2<short, short, short> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::CurvatureFlowFunction<itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<double, 4u>, 4u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<unsigned char, 2u>, itk::DefaultConvertPixelTraits<unsigned char> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<int, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<float, 4u>, itk::Image<float, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::VectorContainer<unsigned int, itk::LevelSetNode<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned char, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<float, 2u> > >; //Instantiated 456 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::PDEDeformableRegistrationFilter<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Cast<int, unsigned char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::XorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<float, 4u>, 4u>, float> >; //Instantiated 10 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::LabelGeometryImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InverseFFTImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<double, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<unsigned int, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::SingleValuedNonLinearOptimizer>; //Instantiated 16 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 4u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::Histogram<float, itk::Statistics::DenseFrequencyContainer2> >; //Instantiated 54 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<double, std::greater<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned int, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, float, float> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, std::greater<unsigned int> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned short, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MeanSquaresImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::MeanSquaresImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, double> >; //Instantiated 46 times
template class itk::SmartPointer<itk::VectorImage<unsigned char, 2u> const>; //Instantiated 152 times
template class itk::SmartPointer<itk::fem::Element const>; //Instantiated 22 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMapToLabelImageFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> >, itk::Image<unsigned long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::IdentityTransform<double, 3u> >; //Instantiated 138 times
template class itk::SmartPointer<itk::MatrixOffsetTransformBase<float, 3u, 3u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ThreadedImageRegionPartitioner<3u> >; //Instantiated 18 times
template class itk::SmartPointer<itk::AffineTransform<float, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 1u>, 3u> >; //Instantiated 20 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::SqrtImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, double> >; //Instantiated 52 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ConstantBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 44 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<std::complex<double>, 2u> > >; //Instantiated 84 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<short, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 7u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::Statistics::DecisionRule const>; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<short, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, std::less<unsigned short>, std::less<unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Image<unsigned int, 3u> const>; //Instantiated 720 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, std::less<short>, std::less<short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::VnlRealToHalfHermitianForwardFFTImageFilter<itk::Image<double, 2u>, itk::Image<std::complex<double>, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VectorLinearInterpolateNearestNeighborExtrapolateImageFunction<itk::Image<itk::Vector<double, 2u>, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Functor::BinaryNot<signed char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<signed char, 2u>, itk::VectorImage<signed char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<int, 2u>, double> >; //Instantiated 26 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned short, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, std::greater<short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Cast<unsigned short, unsigned short> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::PointSet<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VnlForwardFFTImageFilter<itk::Image<double, 2u>, itk::Image<std::complex<double>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<short, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::Image<unsigned long, 2u> const>; //Instantiated 260 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<float, unsigned char> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<double, 3u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<itk::CovariantVector<float, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<double, 2u> const>; //Instantiated 702 times
template class itk::SmartPointer<itk::Image<int, 3u> >; //Instantiated 836 times
template class itk::SmartPointer<itk::Statistics::ScalarImageToHistogramGenerator<itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::VectorImage<unsigned long, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned short, std::greater<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageBase<1u> >; //Instantiated 88 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<unsigned int, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Sub2<double, double, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<int, std::less<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::TextOutput>; //Instantiated 6 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<signed char, 3u>, double> >; //Instantiated 22 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<float, 2u>, itk::VectorImage<float, 2u>, itk::Functor::Cast<itk::VariableLengthVector<float>, itk::VariableLengthVector<float> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::SpatialObject<3u> >; //Instantiated 62 times
template class itk::SmartPointer<itk::WarpImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<double, 2u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<double, 2u> > > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<long, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::DiffeomorphicDemonsRegistrationWithMaskFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LaplacianImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u>, float, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<signed char, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::DisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HalfHermitianToRealInverseFFTImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<double, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, double, double> >; //Instantiated 20 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::VectorImage<short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<signed char, 3u>, itk::DefaultConvertPixelTraits<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::LabelObject<unsigned int, 3u> > > >; //Instantiated 18 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<float, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageBase<2u> >; //Instantiated 1232 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VectorImage<int, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned int, 3u> >, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MultiResolutionPyramidImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<short, 3u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<float, 4u>, 4u>, itk::Image<itk::Vector<float, 4u>, 4u>, itk::Functor::Cast<itk::Vector<float, 4u>, itk::Vector<float, 4u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 80 times
template class itk::SmartPointer<itk::TreeNode<itk::SpatialObject<3u>*> >; //Instantiated 56 times
template class itk::SmartPointer<itk::VectorImage<unsigned int, 3u> const>; //Instantiated 150 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::NrrdImageIO>; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<double, 3u> >; //Instantiated 288 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<float, std::less<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned int, std::less<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned short, std::less<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned short, 3u>, itk::VectorImage<unsigned short, 3u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::Sub2<int, int, int> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Functor::Mult<std::complex<double>, std::complex<double>, std::complex<double> > > >; //Instantiated 20 times
template class itk::SmartPointer<itk::NiftiImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<int, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::GradientRecursiveGaussianImageFilter<itk::Image<short, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MeanSquaresImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::MeanSquaresImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, double, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<double, 3u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<long, 3u>, itk::VectorImage<long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<float, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<signed char, std::less<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<double> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<unsigned char, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Mult<unsigned short, unsigned short, unsigned short> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Cast<unsigned short, unsigned short> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<signed char, double> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::IntensityWindowingImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WarpImageFilter<itk::VectorImageToImageAdaptor<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::WarpVectorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Mult<float, float, float> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<short, unsigned char> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::AffineGeometryFrame<double, 2u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorImage<unsigned long, 3u> >; //Instantiated 134 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, itk::Functor::Cast<itk::Vector<double, 3u>, itk::Vector<double, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<unsigned short, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::DisplacementFieldTransform<double, 3u> >; //Instantiated 30 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<double, unsigned char> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, std::less<signed char>, std::less<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, std::greater<double> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WarpImageMultiTransformFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::MatrixOffsetTransformBase<double, 3u, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 56 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 3u, itk::Function::HammingWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::BinaryThreshold<unsigned short, unsigned short> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<short, 2u> > >; //Instantiated 348 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 6u>, 3u> >; //Instantiated 20 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::CenteredTransformInitializer<itk::AffineTransform<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, double, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::JointHistogramMutualInformationComputeJointPDFThreader<itk::ThreadedIndexedContainerPartitioner, itk::JointHistogramMutualInformationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BRAINSHoughEyeDetector<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::BinaryThreshold<float, float> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<unsigned long, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::Image<long, 1u> >; //Instantiated 88 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::Abs<int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<unsigned int> >; //Instantiated 302 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSpatialObject<2u, unsigned char> >; //Instantiated 10 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<int, 2u>, itk::VectorImage<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<unsigned short>, unsigned short> > >; //Instantiated 72 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<double, std::greater<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Image<unsigned int, 4u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<float, 3u> > >; //Instantiated 90 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<int, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<float, std::greater<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 1u>, 2u> const>; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<unsigned char, 2u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ListSample<itk::FixedArray<int, 1u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<signed char, std::greater<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ListSample<itk::FixedArray<unsigned int, 1u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ScaleTransform<double, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<std::complex<double>, 3u> >; //Instantiated 184 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, std::less<short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<unsigned short, 3u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::Statistics::TDistribution>; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<long, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MetaDataObject<std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<int, 3u> >; //Instantiated 268 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 7u>, 3u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::GradientImageFilter<itk::Image<float, 3u>, float, float, itk::Image<itk::CovariantVector<float, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<double, 3u>, itk::Image<double, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<double>, double> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<signed char, 3u>, itk::DefaultConvertPixelTraits<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Barrier>; //Instantiated 238 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<unsigned int, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LaplacianSharpeningImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, short> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, std::less<float>, std::less<float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageAdaptor<itk::Image<itk::CovariantVector<float, 3u>, 3u>, itk::NthElementPixelAccessor<float, itk::CovariantVector<float, 3u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned short, std::less<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, std::less<float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned short, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<int, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::LaplacianRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::BinaryBallStructuringElement<unsigned short, 3u, itk::NeighborhoodAllocator<unsigned short> > > >; //Instantiated 46 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::VectorImage<short, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned int, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 2u>, 2u> >; //Instantiated 44 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>, float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, double> >; //Instantiated 46 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned long, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<short, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ImportImageFilter<float, 2u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<char, 3u> >; //Instantiated 34 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Mult<unsigned int, unsigned int, unsigned int> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::FiniteDifferenceFunction<itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<double, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 6u>, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<unsigned char, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<itk::Offset<3u>, 3u> >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ZeroCrossingImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<double, 2u>, itk::VectorImage<double, 2u> > >; //Instantiated 90 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<double, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ExponentialDisplacementFieldImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShapeLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> >, itk::Image<unsigned long, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageBase<2u> const>; //Instantiated 58 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::Cast<short, short> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<int, 3u>, itk::DefaultConvertPixelTraits<int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::MedianImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 4u>, 4u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 4u> > > >; //Instantiated 14 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 4u>, itk::Image<double, 4u>, itk::Functor::Cast<double, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageAdaptor<itk::Image<itk::CovariantVector<double, 2u>, 2u>, itk::NthElementPixelAccessor<float, itk::CovariantVector<double, 2u> > > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<short, 2u>, itk::VectorImage<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<float, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ScaleVersor3DTransform<double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::Image<double, 3u> >; //Instantiated 890 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Cast<short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<int, 3u>, itk::Functor::Cast<unsigned short, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryNot<unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<long, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::AffineTransform<double, 3u> const>; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned char, 3u> > const>; //Instantiated 32 times
template class itk::SmartPointer<itk::Image<double, 1u> >; //Instantiated 30 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::fem::Material const>; //Instantiated 32 times
template class itk::SmartPointer<itk::GradientDescentOptimizerBasev4ModifyGradientByScalesThreaderTemplate<double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u>, itk::Functor::BinaryThreshold<float, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 4u>, 4u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::CannyEdgeDetectionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<short, 2u>, itk::DefaultConvertPixelTraits<short> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::FiniteDifferenceFunction<itk::Image<float, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> const>; //Instantiated 10 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::Image<unsigned int, 3u> >; //Instantiated 842 times
template class itk::SmartPointer<itk::OptimizerParameterScalesEstimatorTemplate<double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<long> >; //Instantiated 140 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<signed char, 3u>, itk::Image<signed char, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<signed char>, signed char> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Mult<unsigned int, unsigned int, unsigned int> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Image<itk::RGBPixel<unsigned char>, 2u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VectorImage<double, 2u> const>; //Instantiated 170 times
template class itk::SmartPointer<itk::BSplineBaseTransform<double, 3u, 3u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<signed char, 2u>, itk::DefaultConvertPixelTraits<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Vector<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::TransformParametersAdaptor<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SqrtImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned int, 3u>, double> >; //Instantiated 24 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<long, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::IntensityWindowingTransform<float, float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<float, 2u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::DiffusionTensor3D<double>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<unsigned short, 2u> >; //Instantiated 802 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 1u>, 1u> >; //Instantiated 24 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<float, 3u> > >; //Instantiated 164 times
template class itk::SmartPointer<itk::GradientRecursiveGaussianImageFilter<itk::Image<double, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::Mult<short, short, short> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<double, 3u>, itk::VectorImage<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PermuteAxesImageFilter<itk::Image<short, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageBase<4u> >; //Instantiated 88 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<int, 3u> > >; //Instantiated 392 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<float, 3u>, double, double> >; //Instantiated 58 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<int, 2u>, itk::Functor::Cast<float, int> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ThinPlateSplineKernelTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned char, std::less<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::HoughTransformRadialVotingImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<short, 4u> const>; //Instantiated 6 times
template class itk::SmartPointer<itk::CheckerBoardImageFilter<itk::Image<float, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageIOBase>; //Instantiated 462 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned short, std::less<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ConnectedThresholdImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned short, 3u>, double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::JPEGImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::RegionOfInterestImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MultiThreader>; //Instantiated 40 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<signed char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImportImageFilter<itk::Vector<double, 3u>, 4u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::IdentityTransform<float, 3u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<float, 1u>, 2u>, itk::Image<float, 2u>, itk::Functor::VectorIndexSelectionCast<itk::Vector<float, 1u>, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<long, 3u> >; //Instantiated 134 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<int, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::GaussianSpatialFunction<double, 2u, itk::Point<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VersorRigid3DTransform<double> >; //Instantiated 64 times
template class itk::SmartPointer<itk::TranslationTransform<double, 3u> >; //Instantiated 24 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 3u>, itk::Image<int, 3u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::TransformFileWriterTemplate<float> >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 3u>, 3u> >; //Instantiated 56 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<unsigned short, 3u>, double, std::less<double> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 2u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 2u> > > >; //Instantiated 24 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 3u, itk::Function::CosineWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 42 times
template class itk::SmartPointer<itk::ImageMaskSpatialObject<3u> >; //Instantiated 54 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PointSet<long, 3u, itk::DefaultStaticMeshTraits<long, 3u, 3u, float, float, long> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, double> >; //Instantiated 50 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<int, 3u>, itk::Functor::Cast<float, int> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::MetaDataObject<short> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::Histogram<unsigned short, itk::Statistics::DenseFrequencyContainer2> >; //Instantiated 12 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<float, 3u>, float> >; //Instantiated 44 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<bool, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 3u> >, itk::LabelMap<itk::LabelObject<unsigned int, 3u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<short, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::Image<itk::CovariantVector<double, 3u>, 3u> const>; //Instantiated 16 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WarpImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u>, itk::Functor::Cast<itk::Vector<float, 2u>, itk::Vector<float, 2u> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Statistics::NormalVariateGenerator>; //Instantiated 6 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned char, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned short, 2u> >, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<short, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned char, 2u>, float> >; //Instantiated 10 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<int, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<unsigned int, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Image<unsigned short, 3u> >; //Instantiated 866 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Div<unsigned char, unsigned char, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::Add2<int, int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned long, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<double, std::less<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::Mult<int, int, int> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, double, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned int, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BRAINSROIAutoImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShapeOpeningLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned short, 3u> >, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelObject<unsigned long, 3u> >; //Instantiated 32 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<unsigned int, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ChangeInformationImageFilter<itk::Image<std::complex<double>, 3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<int, 3u>, itk::Functor::Cast<unsigned int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<float, double> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::Functor::Cast<double, float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 80 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<int, 6u>, itk::DefaultConvertPixelTraits<int> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::FixedArray<float, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 4u> > const>; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 3u, itk::Function::CosineWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<double, 2u> > >; //Instantiated 416 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<int, 2u>, itk::Functor::Cast<unsigned int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<short, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DisplacementFieldToBSplineImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<signed char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<int, 3u>, float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<signed char, std::greater<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryNot<unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned char, 2u> > >; //Instantiated 480 times
template class itk::SmartPointer<itk::Statistics::ListSample<itk::FixedArray<unsigned char, 1u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::GradientMagnitudeRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >::SqrSpacing> >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<unsigned short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<short, 2u>, itk::Functor::Cast<int, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 1u>, 2u> >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::Add2<short, short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u>, itk::Functor::IntensityLinearTransform<int, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Functor::Sub2<signed char, signed char, signed char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<short, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Sqrt<double, double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<unsigned int, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::LightObject>; //Instantiated 2352 times
template class itk::SmartPointer<itk::GaussianImageSource<itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MinimumMaximumImageFilter<itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CurvatureFlowFunction<itk::Image<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<unsigned short, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::Cast<int, int> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::StreamingImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 66 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::MaskInput<unsigned char, unsigned char, unsigned char> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageToImageMetricv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<int, 2u>, itk::DefaultConvertPixelTraits<int> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BSplineKernelFunction<3u, double> >; //Instantiated 60 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::LaplacianSharpeningImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<short> >; //Instantiated 316 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<short, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<unsigned short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::BinaryNot<unsigned short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, std::greater<float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<bool, 2u>, itk::Image<bool, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::SpatialObject<4u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, std::greater<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<unsigned char, 2u>, itk::Image<float, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelObject<unsigned char, 3u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::LaplacianImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 82 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<unsigned int, 3u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<unsigned char, 3u>, itk::VectorImage<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorLinearInterpolateNearestNeighborExtrapolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, double> >; //Instantiated 34 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::BinaryThreshold<int, int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::Statistics::SampleToHistogramFilter<itk::Statistics::ListSample<itk::FixedArray<short, 1u> >, itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<float, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<short, 3u>, itk::Image<short, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<short>, short> > >; //Instantiated 86 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<short, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<int, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::MaskInput<int, int, int> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::StreamingImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::ShapeLabelObject<unsigned long, 3u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<std::complex<float>, 2u>, itk::Image<std::complex<float>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<double, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<double, 3u> > > >; //Instantiated 26 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> >, itk::LabelMap<itk::LabelObject<unsigned char, 3u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BSplineControlPointImageFunction<itk::Image<itk::Vector<double, 1u>, 1u>, double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<short, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LightProcessObject>; //Instantiated 22 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<short, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::CovariantVector<double, 3u>, 3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<signed char, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 4u>, float> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Similarity2DTransform<double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MinMaxCurvatureFlowFunction<itk::Image<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 3u>, itk::Image<short, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineControlPointImageFilter<itk::Image<itk::Vector<float, 1u>, 3u>, itk::Image<itk::Vector<float, 1u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::DisplacementFieldTransform<double, 2u> >; //Instantiated 18 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned int, std::less<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<float, unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::DiffusionTensor3D<double>, 3u> const>; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::PDEDeformableRegistrationFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<unsigned int>, unsigned int> > >; //Instantiated 72 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<float, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 54 times
template class itk::SmartPointer<itk::CurvatureFlowImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned short, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorImage<short, 3u> const>; //Instantiated 164 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::VectorImage<float, 3u> const>; //Instantiated 186 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<signed char, std::less<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, std::greater<signed char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorNeighborhoodOperatorImageFilter<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<itk::Vector<float, 1u>, 2u>, itk::Image<itk::Vector<float, 1u>, 2u>, itk::Image<itk::Vector<float, 1u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::BinaryNot<int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<unsigned char, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned long, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned short, 3u>, double> >; //Instantiated 54 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<float, 3u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 2u> > const>; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageSeriesReader<itk::Image<double, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Cast<unsigned int, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Vector<double, 1u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<float, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MedianImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MetaDataObject<int> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<double, 2u>, itk::VectorImage<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u>, itk::Functor::Cast<short, float> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::LabelMap<itk::LabelObject<unsigned char, 2u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<signed char, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::RealTimeClock>; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::DiffusionTensor3D<double>, 3u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<signed char, 3u>, itk::Image<float, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned char, 2u>, double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned int, 3u> > >; //Instantiated 120 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::RGBPixel<unsigned char>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RoundImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ScaleSkewVersor3DTransform<double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::DisplacementFieldTransform<float, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, std::less<unsigned int>, std::less<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryContourImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 56 times
template class itk::SmartPointer<itk::LogTensorImageFilter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u>, itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<unsigned short, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<signed char> >; //Instantiated 280 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u>, itk::Functor::Cast<int, float> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<int, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<double, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageToImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<unsigned int, 2u>, itk::DefaultConvertPixelTraits<unsigned int> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, std::less<short>, std::less<short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Cast<float, float> > >; //Instantiated 96 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::TransformIOBaseTemplate<float> >; //Instantiated 12 times
template class itk::SmartPointer<itk::EquivalencyTable>; //Instantiated 14 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineDeformableTransform<double, 3u, 3u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::GaussianSpatialFunction<double, 3u, itk::Point<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Image<unsigned char, 3u> >; //Instantiated 1036 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> >, itk::VectorImage<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<double, 2u>, itk::Image<double, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<double>, double> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<double, 2u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<short, 3u>, itk::VectorImage<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CompositeTransform<double, 2u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<unsigned char, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VectorImage<short, 2u> >; //Instantiated 268 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<float, 3u>, float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<char, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::DOMNode>; //Instantiated 6 times
template class itk::SmartPointer<itk::BSplineScatteredDataPointSetToImageFilter<itk::PointSet<itk::Vector<float, 1u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 3u, 3u, float, float, itk::Vector<float, 1u> > >, itk::Image<itk::Vector<float, 1u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<int, 2u> > >; //Instantiated 120 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<double, 2u> > const>; //Instantiated 10 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 30 times
template class itk::SmartPointer<itk::ImageSeriesReader<itk::Image<int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<float, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Image<std::complex<double>, 2u> const>; //Instantiated 130 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VelocityFieldTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<double> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> >; //Instantiated 162 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<unsigned char, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::GDCMSeriesFileNames>; //Instantiated 78 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 1u> > const>; //Instantiated 20 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::MaskInput<unsigned int, unsigned int, unsigned int> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, std::greater<unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<float, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<short, 3u>, itk::Functor::Cast<int, short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<double, 3u> const>; //Instantiated 168 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<float, 3u>, itk::Functor::VectorIndexSelectionCast<itk::Vector<float, 3u>, float> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::TileImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >::TileInfo> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<float, 2u>, itk::DefaultConvertPixelTraits<float> > >; //Instantiated 106 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<unsigned int, unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BRAINSROIAutoImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<unsigned int, 2u> const>; //Instantiated 152 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Cast<float, unsigned char> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<unsigned char, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::PointSet<itk::Vector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 3u>, 3u, 3u, float, float, itk::Vector<float, 3u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<int, 2u>, itk::VectorImage<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<signed char, 3u>, itk::VectorImage<signed char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, std::less<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<signed char, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Cast<int, unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SpatialObjectTreeNode<3u> >; //Instantiated 56 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<int, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, std::less<unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<unsigned short, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Image<unsigned short, 3u> const>; //Instantiated 760 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<float, 1u>, itk::Image<double, 1u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SignedMaurerDistanceMapImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, short> >; //Instantiated 956 times
template class itk::SmartPointer<itk::ImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VnlInverseFFTImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 3u> > const>; //Instantiated 34 times
template class itk::SmartPointer<itk::SqrtImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BSplineKernelFunction<1u, double> >; //Instantiated 38 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 7u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 7u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 108 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 2u>, itk::Image<int, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::LaplacianImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<signed char, 3u> const>; //Instantiated 692 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 1u>, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 3u> >, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CompositeTransform<double, 3u> >; //Instantiated 44 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<float, std::less<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorImage<unsigned short, 2u> const>; //Instantiated 152 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Functor::Add2<short, short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Testing::StretchIntensityImageFilter<itk::Image<double, 6u>, itk::Image<unsigned char, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Functor::BinaryNot<short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<float, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 3u>, 4u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::TreeNode<itk::SpatialObject<2u>*> >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorImage<long, 2u> >; //Instantiated 132 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 3u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 1u>, 4u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 1u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VotingBinaryHoleFillingImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 2u>, 3u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned int, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<unsigned char, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<unsigned short, 2u> >; //Instantiated 264 times
template class itk::SmartPointer<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, bool> >; //Instantiated 160 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 3u>, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<unsigned int, 2u>, itk::VectorImage<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageMomentsCalculator<itk::Image<short, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, float> >; //Instantiated 1082 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<double, 3u>, double> >; //Instantiated 34 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ForwardFFTImageFilter<itk::Image<double, 2u>, itk::Image<std::complex<double>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::GaussianExponentialDiffeomorphicTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Cast<unsigned char, unsigned char> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::AndImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::Transform<float, 2u, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<short, 3u> const>; //Instantiated 804 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<unsigned char, 3u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<int, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, std::greater<int> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::GradientRecursiveGaussianImageFilter<itk::Image<double, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, std::less<short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 2u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::DCMTKImageIO>; //Instantiated 6 times
template class itk::SmartPointer<itk::ObjectStore<itk::SparseFieldLevelSetNode<itk::Index<2u> > > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u>, double, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::DisplacementFieldJacobianDeterminantFilter<itk::Image<itk::Vector<float, 3u>, 3u>, float, itk::Image<float, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<signed char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::Vector<float, 3u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::BinaryNot<unsigned short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SingleValuedCostFunction>; //Instantiated 28 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BSplineScatteredDataPointSetToImageFilter<itk::PointSet<itk::Vector<double, 1u>, 1u, itk::DefaultStaticMeshTraits<itk::Vector<double, 1u>, 1u, 1u, float, float, itk::Vector<double, 1u> > >, itk::Image<itk::Vector<double, 1u>, 1u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, itk::Functor::Add2<itk::Vector<double, 3u>, itk::Vector<double, 3u>, itk::Vector<double, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::IntensityWindowingImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Functor::Sub2<signed char, signed char, signed char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VersorTransform<float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<short, 3u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 3u, itk::Function::BlackmanWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 42 times
template class itk::SmartPointer<itk::SparseFieldLevelSetImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::CovariantVector<float, 3u>, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Image<std::complex<float>, 3u> const>; //Instantiated 92 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, char> >; //Instantiated 82 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4HelperThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<int, 3u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<long, 2u>, itk::VectorImage<long, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageMaskSpatialObject<2u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::GDCMImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, std::less<unsigned char>, std::less<unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ScalarImagePortionToHistogramGenerator<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::GradientAnisotropicDiffusionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, std::greater<short> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 58 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BSplineScatteredDataPointSetToImageFilter<itk::PointSet<itk::Vector<double, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<double, 3u>, 3u, 3u, float, float, itk::Vector<double, 3u> > >, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::OneWayEquivalencyTable>; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::DiscreteGaussianImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Functor::Mult<short, short, short> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Vector<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<int, 2u>, itk::Functor::Cast<short, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PointSet<long, 2u, itk::DefaultStaticMeshTraits<long, 2u, 2u, float, float, long> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<float, 4u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<char, 3u>, itk::Image<float, 3u>, itk::Functor::MaskInput<float, char, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned short, 3u> > >; //Instantiated 422 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 2u>, 2u> const>; //Instantiated 36 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 1u>, 3u> const>; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u>, itk::Functor::IntensityLinearTransform<short, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<unsigned int, 2u> >; //Instantiated 824 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<short, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned char, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 4u>, itk::Image<double, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<double, double, double> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<unsigned short, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, std::less<double>, std::less<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned short, 3u>, double> >; //Instantiated 24 times
template class itk::SmartPointer<itk::Statistics::KdTree<itk::Statistics::ListSample<itk::Vector<float, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<float, 3u>, double> >; //Instantiated 68 times
template class itk::SmartPointer<itk::Image<short, 2u> >; //Instantiated 792 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 3u, itk::Function::WelchWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 42 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 2u>, 3u> const>; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<signed char, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::PointSet<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> > const>; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorImage<short, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::IntensityWindowingImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, std::less<int>, std::less<int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Cast<int, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<bool, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<double, 4u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::GaussianKernelFunction<double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, std::greater<int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Vector<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MatrixOffsetTransformBase<double, 3u, 3u> const>; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::SymmetricSecondRankTensor<float, 3u> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, std::less<signed char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<unsigned char, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<unsigned char, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<short, 2u>, itk::Functor::Cast<float, short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, unsigned char> >; //Instantiated 1112 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<short, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::StreamingImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<unsigned short, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned long, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::VectorImageToImageAdaptor<float, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::Image<float, 1u> const>; //Instantiated 12 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::MaskInput<unsigned short, unsigned short, unsigned short> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 64 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 2u>, float> >; //Instantiated 10 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, std::less<short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<double, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::SpatialObject<2u> const>; //Instantiated 22 times
template class itk::SmartPointer<itk::SmoothingRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::ants::CommandLineParser>; //Instantiated 180 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned short, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 3u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MinMaxCurvatureFlowFunction<itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<signed char, 3u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Cast<float, unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<double, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<double, 3u>, itk::VectorImage<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<float, 2u>, itk::Image<float, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<float>, float> > >; //Instantiated 82 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 2u>, 3u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::PointSet<itk::Vector<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 2u>, 2u, 2u, float, float, itk::Vector<float, 2u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Euler3DTransform<double>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Add2<float, float, float> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 7u>, 4u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 7u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<int, 2u>, itk::Functor::Cast<unsigned char, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned long, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 2u> >, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 1u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 1u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned long, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<unsigned short, 2u>, itk::Image<float, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 1u>, 4u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<unsigned char, 2u> > >; //Instantiated 60 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<float, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Sub2<unsigned char, unsigned char, unsigned char> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<short, 2u>, itk::Functor::Cast<unsigned short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<signed char, 2u>, itk::VectorImage<signed char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<double, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 80 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<std::complex<float>, 2u> >; //Instantiated 152 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<long, 6u>, itk::DefaultConvertPixelTraits<long> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AttributeLabelObject<unsigned long, 2u, bool> >; //Instantiated 16 times
template class itk::SmartPointer<itk::IdentityTransform<double, 4u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<int, 3u> > >; //Instantiated 122 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::VectorImageToImageAdaptor<float, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MetaImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::ShrinkImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 64 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> >, itk::MattesMutualInformationImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 4u>, 4u> const>; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BoundingBox<unsigned long, 2, double, itk::VectorContainer<unsigned long, itk::Point<double, 2u> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorESMDemonsRegistrationFunction<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Mult<unsigned short, unsigned short, unsigned short> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ShapeOpeningLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Sub2<double, double, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<float, 2u>, double> >; //Instantiated 78 times
template class itk::SmartPointer<itk::BoundingBox<unsigned long, 1, float, itk::VectorContainer<unsigned long, itk::Point<float, 1u> > > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned short, 2u> > >; //Instantiated 354 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<unsigned int, 2u>, itk::VectorImage<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CoxDeBoorBSplineKernelFunction<3u, double> >; //Instantiated 38 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<unsigned int, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::GDCMImageIO>; //Instantiated 78 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 2u>, 2u> >; //Instantiated 48 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned long, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelOverlapMeasuresImageFilter<itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VnlHalfHermitianToRealInverseFFTImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::Transform<float, 3u, 3u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<float, 2u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<int, 2u>, itk::DefaultConvertPixelTraits<int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<unsigned char, unsigned char> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<double, 2u>, double, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned int, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<int, 2u>, itk::Image<float, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::Div<short, short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<float, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, std::greater<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageMomentsCalculator<itk::Image<float, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<int, 2u> > >; //Instantiated 356 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<short, 2u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RealToHalfHermitianForwardFFTImageFilter<itk::Image<double, 3u>, itk::Image<std::complex<double>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<float, 2u>, itk::Functor::Cast<int, float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, std::less<float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AffineGeometryFrame<double, 3u> >; //Instantiated 56 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<int, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<float, 1u>, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<itk::CovariantVector<double, 2u>, 2u> const>; //Instantiated 10 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::Div<int, int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::BinaryBallStructuringElement<unsigned short, 3u, itk::NeighborhoodAllocator<unsigned short> > > >; //Instantiated 48 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<float, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<float> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<float, 3u>, itk::DefaultConvertPixelTraits<float> > >; //Instantiated 226 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<signed char, 3u> const>; //Instantiated 152 times
template class itk::SmartPointer<itk::Euler3DTransform<double> >; //Instantiated 28 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<signed char, std::greater<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorDiffeomorphicDemonsRegistrationFilter<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u>, itk::Functor::Cast<float, float> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Cast<double, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShrinkImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::MaskInput<unsigned int, unsigned int, unsigned int> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<unsigned short>, unsigned short> > >; //Instantiated 72 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<unsigned short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned char, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelUniqueLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<char, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<double, 2u>, double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Cast<unsigned char, unsigned char> > >; //Instantiated 60 times
template class itk::SmartPointer<itk::TranslationTransform<float, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PointSet<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> > const>; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorCentralDifferenceImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, float> >; //Instantiated 30 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MetaDataObject<double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<int, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<signed char, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Sub2<unsigned int, unsigned int, unsigned int> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::RGBPixel<unsigned char>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<int, 3u>, itk::Functor::Cast<unsigned char, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<double, 3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::GradientDescentOptimizerBasev4ModifyGradientByLearningRateThreaderTemplate<double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<signed char, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Abs<float, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<double, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 58 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<unsigned short> >; //Instantiated 334 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<std::vector<unsigned long, std::allocator<unsigned long> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageToImageFilter<itk::Image<double, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Image<std::complex<double>, 3u> const>; //Instantiated 128 times
template class itk::SmartPointer<itk::VectorImage<unsigned int, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<int> >; //Instantiated 296 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 88 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::SymmetricSecondRankTensor<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<float, 3u>, itk::Image<float, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<float>, float> > >; //Instantiated 102 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::IntensityLinearTransform<double, double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<unsigned short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, vnl_vector<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 3u>, 4u> const>; //Instantiated 10 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<long, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<bool, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<bool> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CreateObjectFunction<itk::MatrixOffsetTransformBase<double, 3u, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ComputeHistogramQuantileThresholds<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<short, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<double, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, int> >; //Instantiated 24 times
template class itk::SmartPointer<itk::TernaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::PostProcessCorrelation<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorNeighborhoodOperatorImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, float> >; //Instantiated 28 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, std::less<unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<signed char, 2u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ListSample<itk::FixedArray<short, 1u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::GaussianDerivativeSpatialFunction<double, 1u, itk::Point<double, 1u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<short, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ANTSNeighborhoodCorrelationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::ANTSNeighborhoodCorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Sub2<unsigned int, unsigned int, unsigned int> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<int, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 3u> >, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<float, 4u>, 4u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<unsigned char, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::Transform<double, 2u, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<std::complex<double> > >; //Instantiated 60 times
template class itk::SmartPointer<itk::CurvatureFlowImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<int, 3u>, itk::DefaultConvertPixelTraits<int> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<short, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, float> >; //Instantiated 12 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::SignedMaurerDistanceMapImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<bool, 3u> >; //Instantiated 156 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned short, 6u>, itk::DefaultConvertPixelTraits<unsigned short> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 1u>, 2u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 1u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned short, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::Vector<double, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::TimeVaryingBSplineVelocityFieldTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Cast<unsigned int, unsigned int> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<unsigned char, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<float, 3u>, float> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Sqrt<double, double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<int, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::RegionOfInterestImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, std::less<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineControlPointImageFilter<itk::Image<itk::Vector<float, 1u>, 2u>, itk::Image<itk::Vector<float, 1u>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<double, 3u>, double, double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::KdTree<itk::Statistics::ListSample<itk::Vector<float, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<double, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<double, 2u>, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, std::deque<itk::LabelObjectLine<3u>, std::allocator<itk::LabelObjectLine<3u> > > > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned int, std::greater<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ConstantBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::Image<unsigned int, 4u> const>; //Instantiated 6 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Add2<float, float, float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 3u, itk::Function::LanczosWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 42 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<unsigned char, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 64 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 2u> >, itk::VectorImage<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned char, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<unsigned short, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<float, 1u>, 3u>, itk::Image<float, 3u>, itk::Functor::VectorIndexSelectionCast<itk::Vector<float, 1u>, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::IdentityTransform<float, 2u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Exp<float, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<double, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned char, std::greater<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Functor::Cast<signed char, signed char> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, itk::Functor::Div<itk::Vector<double, 3u>, double, itk::Vector<double, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::Vector<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u>, itk::Functor::Cast<itk::VariableLengthVector<float>, itk::VariableLengthVector<float> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned int, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<short, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<float, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<signed char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSeriesReader<itk::Image<unsigned short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<unsigned short, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Rigid3DTransform<double> >; //Instantiated 68 times
template class itk::SmartPointer<itk::Image<unsigned short, 2u> const>; //Instantiated 706 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<unsigned int, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::AvantsMutualInformationRegistrationFunction<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned int, 3u> > >; //Instantiated 390 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::ThresholdImageFilter<itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<double, 2u> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Div<unsigned short, unsigned short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<signed char, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<double, 4u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::VectorImageToImageAdaptor<float, 3u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Cast<float, float> > >; //Instantiated 158 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned long, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::Image<float, 3u> >; //Instantiated 1082 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<unsigned int, 3u>, itk::DefaultConvertPixelTraits<unsigned int> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Sqrt<float, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<signed char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<double, 6u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Cast<unsigned char, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MedianImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 92 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<short, 2u>, itk::Image<short, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<short>, short> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::VnlHalfHermitianToRealInverseFFTImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<double, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InvertDisplacementFieldImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned int, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<long, 2u> >; //Instantiated 490 times
template class itk::SmartPointer<itk::BSplineDeformableTransform<float, 3u, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::TranslationTransform<double, 2u> >; //Instantiated 22 times
template class itk::SmartPointer<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> const>; //Instantiated 62 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::Array<unsigned long> > >; //Instantiated 122 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<float, 1u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageAdaptor<itk::Image<itk::CovariantVector<double, 3u>, 3u>, itk::NthElementPixelAccessor<float, itk::CovariantVector<double, 3u> > > >; //Instantiated 28 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<double, std::greater<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::Abs<short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<short, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, double, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 3u, itk::Function::HammingWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 42 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<short, 2u>, itk::Image<float, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<signed char, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned long, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<double, 4u>, itk::DefaultConvertPixelTraits<double> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Image<unsigned long, 3u> >; //Instantiated 384 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Sqrt<float, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::IntensityWindowingTransform<short, short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VectorImage<long, 3u> const>; //Instantiated 22 times
template class itk::SmartPointer<itk::FastMutexLock>; //Instantiated 84 times
template class itk::SmartPointer<itk::NrrdImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<signed char, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned short, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u>, itk::Functor::IntensityLinearTransform<float, short> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryContourImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::BinaryThreshold<float, unsigned short> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<unsigned int, 4u>, itk::DefaultConvertPixelTraits<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<float, 2u> >; //Instantiated 902 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<float, 1u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ForwardFFTImageFilter<itk::Image<double, 3u>, itk::Image<std::complex<double>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<short, 3u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<double, 2u> > >; //Instantiated 130 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned char, std::greater<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<bool, 2u>, itk::Image<bool, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<unsigned int, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ObjectStore<itk::SparseFieldLevelSetNode<itk::Index<3u> > > >; //Instantiated 22 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<signed char, std::less<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::GaussianSmoothingOnUpdateDisplacementFieldTransformParametersAdaptor<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<signed char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned long, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 4u>, 4u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::Histogram<unsigned char, itk::Statistics::DenseFrequencyContainer2> >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Cast<unsigned char, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MetaDataObject<unsigned int> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<signed char, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantVelocityFieldTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<double, 1u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<short, 2u>, double> >; //Instantiated 22 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<unsigned short, 3u>, itk::DefaultConvertPixelTraits<unsigned short> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::MaximumImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<unsigned long> >; //Instantiated 142 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, std::greater<double> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<double, 2u>, itk::Image<itk::Vector<double, 2u>, 2u>, itk::Functor::Mult<itk::Vector<double, 2u>, double, itk::Vector<double, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<float, 4u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<signed char, 3u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Cast<int, unsigned short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CSVNumericObjectFileWriter<double, 1u, 1u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned long, 3u>, itk::Image<unsigned long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MinMaxCurvatureFlowFunction<itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<float, 4u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VectorContainer<unsigned int, float> >; //Instantiated 38 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Cast<double, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Functor::Mult<std::complex<double>, std::complex<double>, std::complex<double> > > >; //Instantiated 20 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<int, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageRegistrationMethod<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MedianImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::OrientImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<itk::FixedArray<float, 3u>, 3u> const>; //Instantiated 10 times
template class itk::SmartPointer<itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<itk::CovariantVector<double, 3u>, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<long, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<int, 3u> const>; //Instantiated 152 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<float, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Cast<unsigned int, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VectorImage<float, 2u> const>; //Instantiated 168 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<double, 4u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageBase<6u> >; //Instantiated 42 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<unsigned short, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Image<signed char, 2u> >; //Instantiated 798 times
template class itk::SmartPointer<itk::WarpImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned char, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::CurvatureFlowImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MinMaxCurvatureFlowFunction<itk::Image<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::FixedArray<float, 3u>, 3u>, double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::MaskInput<short, short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, std::less<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::KernelTransform<double, 3u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<unsigned short, 3u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Functor::Mult<itk::Vector<float, 3u>, float, itk::Vector<float, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 82 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<float, 2u> > >; //Instantiated 84 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<int, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned char, std::less<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::VectorImage<float, 3u> >; //Instantiated 324 times
template class itk::SmartPointer<itk::MaximumImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::NthElementImageAdaptor<itk::Image<itk::CovariantVector<double, 3u>, 3u>, float> >; //Instantiated 30 times
template class itk::SmartPointer<itk::Image<long, 3u> const>; //Instantiated 244 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<signed char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BoundingBox<unsigned long, 3, float, itk::VectorContainer<unsigned long, itk::Point<float, 3u> > > >; //Instantiated 26 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, std::greater<unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, std::greater<int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 58 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 116 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<double, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, unsigned int> >; //Instantiated 24 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<double, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 3u>, 4u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::LBFGSBOptimizer>; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<short, 2u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<unsigned char, 2u> >; //Instantiated 962 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CompositeTransform<float, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::TransformBaseTemplate<double> >; //Instantiated 56 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned char, std::less<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::TransformToDisplacementFieldSource<itk::Image<itk::Vector<float, 3u>, 3u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<short, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<double, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::Image<itk::TileImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >::TileInfo, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<short, 4u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Add2<double, double, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageAdaptor<itk::VectorImage<float, 3u>, itk::Accessor::VectorImageToImagePixelAccessor<float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::GiplImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<int, 3u>, itk::Functor::Cast<double, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<int, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned char, 3u>, itk::DefaultConvertPixelTraits<unsigned char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Cast<double, unsigned char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, std::less<unsigned char>, std::less<unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelObject<unsigned char, 2u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ThreadedIndexedContainerPartitioner>; //Instantiated 24 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, double, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::NumericSeriesFileNames>; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, int> >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::Vector<float, 1u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RegionOfInterestImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<unsigned int, unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VectorImage<unsigned long, 2u> const>; //Instantiated 22 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<float, 4u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<unsigned char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Sub2<float, float, float> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned short, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<short, 3u>, itk::Functor::Cast<unsigned short, short> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::CovariantVector<double, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, std::less<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::CovariantVector<float, 3u>, 3u> >; //Instantiated 22 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned short, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, itk::Functor::Mult<itk::Vector<double, 3u>, double, itk::Vector<double, 3u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 1u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, unsigned short> >; //Instantiated 890 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u>, itk::Functor::Cast<unsigned char, float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<short, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<unsigned int, 3u>, itk::VectorImage<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<unsigned int, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned int, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<float, 3u> > >; //Instantiated 612 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::Euler3DTransform<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<float, 3u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<long, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::BSplineScatteredDataPointSetToImageFilter<itk::PointSet<itk::Vector<float, 1u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 2u, 2u, float, float, itk::Vector<float, 1u> > >, itk::Image<itk::Vector<float, 1u>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 58 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Statistics::ListSample<itk::FixedArray<float, 1u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned char, 3u>, double> >; //Instantiated 32 times
template class itk::SmartPointer<itk::ThreadedImageRegionPartitioner<2u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::SparseFieldLevelSetImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<long, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned long, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VectorImage<unsigned char, 2u> >; //Instantiated 276 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<unsigned short, 2u>, itk::VectorImage<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<unsigned short, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<double> >; //Instantiated 402 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Div<float, float, float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<long, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::CrossCorrelationRegistrationFunction<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::MaskInput<unsigned char, unsigned char, unsigned char> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<char, 3u>, itk::DefaultConvertPixelTraits<char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned char, 2u> > const>; //Instantiated 32 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<double> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::Transform<float, 2u, 2u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::CompositeTransform<double, 2u> >; //Instantiated 20 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::CovariantVector<float, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 4u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::FixedArray<float, 2u>, 2u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::VectorContainer<unsigned int, itk::Index<2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<double, 2u>, itk::DefaultConvertPixelTraits<double> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 6u>, 4u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<float, 4u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned char, 2u>, itk::DefaultConvertPixelTraits<unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, double> >; //Instantiated 930 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<unsigned char, 3u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::TransformFileReaderTemplate<double> >; //Instantiated 46 times
template class itk::SmartPointer<itk::BoundingBox<unsigned long, 4, float, itk::VectorContainer<unsigned long, itk::Point<float, 4u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 4u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 2u>, float> >; //Instantiated 22 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<int, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::BinaryBallStructuringElement<unsigned char, 3u, itk::NeighborhoodAllocator<unsigned char> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<short, 2u>, itk::Functor::Cast<double, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<float, 4u> const>; //Instantiated 34 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<float, 2u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::Image<double, 4u> const>; //Instantiated 18 times
template class itk::SmartPointer<itk::LargestForegroundFilledMaskImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u>, itk::Functor::BinaryThreshold<float, short> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<short, std::less<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, itk::LaplacianRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >::AddMultConstFunctor> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::SampleToHistogramFilter<itk::Statistics::ImageToListSampleAdaptor<itk::Image<short, 3u> >, itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, std::greater<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFunction<itk::Image<float, 3u>, itk::CovariantVector<double, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Functor::VectorCast<itk::Vector<float, 3u>, itk::Vector<float, 3u> > > >; //Instantiated 30 times
template class itk::SmartPointer<itk::SpatialObject<2u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, std::greater<float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<char, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::Sub2<short, short, short> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<int, 3u>, float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<short, 2u> const>; //Instantiated 154 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<double, 3u> > const>; //Instantiated 56 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 2u>, 2u> const>; //Instantiated 34 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<double, 3u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ESMDemonsRegistrationFunction<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<unsigned char, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<signed char, 2u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::Transform<float, 4u, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::Histogram<int, itk::Statistics::DenseFrequencyContainer2> >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 4u>, itk::Image<float, 4u>, itk::Functor::Cast<unsigned int, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::LaplacianRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<unsigned short, 2u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 3u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageBase<3u> >; //Instantiated 1388 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 80 times
template class itk::SmartPointer<itk::Image<unsigned char, 3u> const>; //Instantiated 832 times
template class itk::SmartPointer<itk::VectorImage<long, 6u> const>; //Instantiated 38 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<int, std::greater<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u>, itk::Functor::Cast<unsigned int, float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, float> >; //Instantiated 44 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<char, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 3u, itk::Function::BlackmanWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryNot<unsigned char> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Statistics::SampleToHistogramFilter<itk::Statistics::ListSample<itk::FixedArray<float, 1u> >, itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Sub2<unsigned short, unsigned short, unsigned short> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::Image<short, 2u> const>; //Instantiated 706 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 1u>, 4u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned long, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::TernaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::PostProcessCorrelation<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> >, itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::MattesMutualInformationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<double, 4u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::FindCenterOfBrainFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<double, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Function::WindowConvergenceMonitoringFunction<double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<unsigned int, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, std::greater<short> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<double, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<float, 3u>, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ZeroCrossingImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImportImageFilter<itk::Vector<double, 2u>, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u>, double, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageBase<3u> const>; //Instantiated 134 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<float, std::less<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Image<bool, 2u> >; //Instantiated 98 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::IntensityLinearTransform<float, unsigned short> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ScalableAffineTransform<double, 2u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<unsigned int, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::MatrixOffsetTransformBase<double, 4u, 4u> >; //Instantiated 18 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, double> >; //Instantiated 70 times
template class itk::SmartPointer<itk::PointSet<itk::Vector<double, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<double, 3u>, 3u, 3u, float, float, itk::Vector<double, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<int, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, unsigned char> >; //Instantiated 24 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned long, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<int, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::TransformIOBaseTemplate<double> >; //Instantiated 70 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, std::less<unsigned short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<int, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Functor::Abs<short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<float, std::greater<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 2u> >, itk::LabelMap<itk::LabelObject<unsigned short, 2u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<signed char, 3u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<char, 3u> const>; //Instantiated 10 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<int, 3u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<unsigned int, 2u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, int> >; //Instantiated 860 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Abs<unsigned char, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<unsigned short, 2u>, itk::VectorImage<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<std::complex<float>, 2u> const>; //Instantiated 94 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<double, 1u>, 1u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::SparseFieldLevelSetImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PointSetToImageFilter<itk::PointSet<itk::Vector<double, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<double, 3u>, 3u, 3u, float, float, itk::Vector<double, 3u> > >, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::VectorImageToImageAdaptor<float, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::PermuteAxesImageFilter<itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4HelperThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ANTSAffine3DTransform<double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<short, 3u>, double, double> >; //Instantiated 26 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::LabelObject<unsigned short, 3u> > > >; //Instantiated 16 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ThresholdImageFilter<itk::Image<double, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<signed char, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<float, 4u> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::AND<unsigned char, unsigned char, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VersorRigid3DTransform<float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<short, 2u>, itk::Functor::Cast<unsigned char, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 112 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageSeriesReader<itk::Image<unsigned int, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::LabelUniqueLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFunction<itk::Image<double, 3u>, itk::CovariantVector<double, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned int, 2u>, itk::VectorImage<unsigned int, 2u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<int, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 3u>, 4u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 3u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Cast<int, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 82 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<itk::Vector<float, 4u>, 4u>, itk::Image<itk::Vector<float, 4u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, std::less<int>, std::less<int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<double, 3u>, itk::DefaultConvertPixelTraits<double> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<unsigned char, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ZeroCrossingImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VectorImage<int, 2u> >; //Instantiated 268 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MeanSquaresImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<double> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<signed char, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<float, 4u>, itk::DefaultConvertPixelTraits<float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<short, 3u>, float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::Functor::Mult<signed char, signed char, signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned int, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<short, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<signed char, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Functor::Cast<signed char, signed char> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryNot<unsigned char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<short, 3u>, float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned int, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<int, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<unsigned short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryContourImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::TranslationTransform<float, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<float, 2u>, double> >; //Instantiated 50 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Abs<unsigned int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<short, 3u>, itk::VectorImage<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Cast<double, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AffineTransform<double, 4u> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<double, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImportImageFilter<itk::Vector<double, 3u>, 3u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ANTSCenteredAffine2DTransform<double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::MatrixOffsetTransformBase<double, 3u, 3u> >; //Instantiated 152 times
template class itk::SmartPointer<itk::VectorNeighborhoodOperatorImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<int, std::greater<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, std::less<unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<double, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::TileImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4HelperThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, std::less<float>, std::less<float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ObjectToObjectMultiMetricv4<2u, 2u, itk::Image<double, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::IntensityWindowingImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<unsigned int, 3u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<float, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<long, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<float, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<unsigned char, 3u>, itk::VectorImage<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned char, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, std::less<unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 3u>, 4u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::NarrowBand<itk::BandNode<itk::Index<3u>, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned int, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorImage<unsigned char, 3u> const>; //Instantiated 150 times
template class itk::SmartPointer<itk::WarpVectorImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<unsigned char, 3u> > >; //Instantiated 88 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned char, 3u> > >; //Instantiated 126 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<double, 4u>, 4u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::PasteImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::StreamingImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<short, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::DataObject>; //Instantiated 1454 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<short, 2u>, itk::VectorImage<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::Transform<double, 3u, 3u> >; //Instantiated 214 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Statistics::ScalarImagePortionToHistogramGenerator<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::PointSet<itk::Point<double, 3u>, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MultipleValuedCostFunction>; //Instantiated 8 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<signed char, 2u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<float, 3u>, itk::Image<float, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<int, 3u>, itk::VectorImage<int, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<signed char, 3u>, itk::VectorImage<signed char, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<short, 2u>, itk::DefaultConvertPixelTraits<short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, std::less<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageMomentsCalculator<itk::Image<unsigned char, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::LabelGeometryImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::Image<std::deque<itk::LabelObjectLine<2u>, std::allocator<itk::LabelObjectLine<2u> > >, 1u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::fem::Element::Node const>; //Instantiated 38 times
template class itk::SmartPointer<itk::SparseFieldLevelSetImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Euler2DTransform<double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Offset<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<unsigned long, 3u> const>; //Instantiated 256 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<char, 2u> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Cast<int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveMultiResolutionPyramidImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::Image<int, 2u> >; //Instantiated 800 times
template class itk::SmartPointer<itk::GradientDescentOptimizerv4Template<double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, std::greater<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CyclicShiftImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<signed char, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CurvatureFlowFunction<itk::Image<double, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::TransformFileReaderTemplate<float> >; //Instantiated 10 times
template class itk::SmartPointer<itk::Transform<float, 3u, 3u> >; //Instantiated 18 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<long, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<double, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::BinaryBallStructuringElement<unsigned short, 3u, itk::NeighborhoodAllocator<unsigned short> > > >; //Instantiated 48 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<short, 3u> > >; //Instantiated 94 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 3u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 3u> > > >; //Instantiated 60 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<short, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::Sub2<int, int, int> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned char, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Functor::Mult<itk::Vector<float, 3u>, double, itk::Vector<float, 3u> > > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<float, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<float, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, signed char> >; //Instantiated 776 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, short> >; //Instantiated 24 times
template class itk::SmartPointer<itk::StreamingImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, std::greater<int> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<unsigned char, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, float, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned short, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::DiffusionTensor3D<double> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ComputeHistogramQuantileThresholds<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Vector<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::MatrixOffsetTransformBase<double, 2u, 2u> >; //Instantiated 56 times
template class itk::SmartPointer<itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned int, 2u> >, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<unsigned char, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Offset<2u>, 2u> >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<unsigned short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned char, 3u>, float> >; //Instantiated 10 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned short, 3u>, itk::DefaultConvertPixelTraits<unsigned short> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 1u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<int, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<int, 2u>, itk::VectorImage<int, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<signed char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BSplineInterpolationWeightFunction<float, 3u, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Cast<unsigned char, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Functor::Add2<itk::Vector<float, 3u>, itk::Vector<float, 3u>, itk::Vector<float, 3u> > > >; //Instantiated 36 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned int, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineKernelFunction<0u, double> >; //Instantiated 38 times
template class itk::SmartPointer<itk::VectorImage<signed char, 2u> const>; //Instantiated 154 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, std::less<signed char>, std::less<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSpatialObject<3u, unsigned char> >; //Instantiated 50 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<signed char, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<int, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<short, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::DiscreteGaussianImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, short> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<int, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, double, double> >; //Instantiated 70 times
template class itk::SmartPointer<itk::MinimumMaximumImageFilter<itk::Image<float, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::GradientRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<long, 2u>, itk::DefaultConvertPixelTraits<long> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::MaskInput<float, float, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::EllipsoidInteriorExteriorSpatialFunction<3u, itk::Point<double, 3u> > >; //Instantiated 140 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<float, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 94 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<unsigned int, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::Image<float, 4u> >; //Instantiated 50 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PointSetToImageFilter<itk::PointSet<itk::Vector<float, 1u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 3u, 3u, float, float, itk::Vector<float, 1u> > >, itk::Image<itk::Vector<float, 1u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::RegistrationParameterScalesFromPhysicalShift<itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<double, 3u> > >; //Instantiated 130 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Div<unsigned short, unsigned short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExpImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, std::less<double> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageRegionSplitterSlowDimension>; //Instantiated 118 times
template class itk::SmartPointer<itk::OtsuThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, float> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned long, 3u> > const>; //Instantiated 8 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<int, 3u>, double> >; //Instantiated 26 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Div<unsigned int, unsigned int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, std::less<short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 4u>, 4u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<unsigned short, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::DiscreteGaussianImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned short, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, unsigned char> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<float, 3u> const>; //Instantiated 880 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<double, 3u>, 3u>, double> >; //Instantiated 36 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Mult<double, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Abs<double, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<long, 2u> const>; //Instantiated 250 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::LevelSetFunction<itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Functor::Div<short, short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned char, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::ShrinkImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::CreateObjectFunction<itk::MatrixOffsetTransformBase<double, 2u, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::Image<itk::CovariantVector<double, 2u>, 2u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<double, std::less<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<long, 3u>, itk::DefaultConvertPixelTraits<long> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<int, 3u>, itk::Image<int, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<int>, int> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u>, itk::Functor::Cast<double, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4HelperThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<unsigned char, 3u>, itk::DefaultConvertPixelTraits<unsigned char> > >; //Instantiated 82 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned int, 3u>, itk::DefaultConvertPixelTraits<unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Cast<float, unsigned char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CurvatureFlowFunction<itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::TransformFileWriterTemplate<double> >; //Instantiated 50 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<std::complex<float>, 2u>, itk::DefaultConvertPixelTraits<std::complex<float> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 54 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<float, 1u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<double, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<float, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 54 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 1u>, 4u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::Image<unsigned char, 1u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned long, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<unsigned short, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 80 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned int, 2u> > const>; //Instantiated 32 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<int, std::less<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<double, 1u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, double, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExponentialDisplacementFieldImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<float, 1u>, itk::DefaultConvertPixelTraits<float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<float, 7u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u>, itk::Functor::IntensityLinearTransform<unsigned short, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<short, 3u> >; //Instantiated 934 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Mult<double, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Image<itk::RGBPixel<unsigned char>, 3u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned int, std::less<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::PointSet<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<float, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::LabelObject<unsigned char, 3u> > > >; //Instantiated 16 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<short, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RealToHalfHermitianForwardFFTImageFilter<itk::Image<double, 2u>, itk::Image<std::complex<double>, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >; //Instantiated 440 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned short, 2u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::ObjectToObjectOptimizerBaseTemplate<double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<signed char, double> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned long, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<int, std::less<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BSplineDerivativeKernelFunction<3u, double> >; //Instantiated 32 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<float, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, std::less<signed char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::BinaryThreshold<short, unsigned short> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<float, 2u>, itk::Functor::Cast<unsigned short, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::MaximumImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<unsigned short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<short, std::less<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<short, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AvantsMutualInformationRegistrationFunction<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned short, 2u> > const>; //Instantiated 32 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 6u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<std::deque<itk::LabelObjectLine<3u>, std::allocator<itk::LabelObjectLine<3u> > >, 2u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<std::complex<float>, 3u> > >; //Instantiated 66 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<unsigned short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<float, std::less<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<float, 1u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned int, 3u>, itk::VectorImage<unsigned int, 3u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::TernaryFunctorImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Functor::LandweberMethod<std::complex<double>, std::complex<double>, std::complex<double>, std::complex<double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::GradientNDAnisotropicDiffusionFunction<itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ScaleLogarithmicTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<signed char, 3u> >; //Instantiated 266 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<int, std::greater<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned int, std::greater<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, std::less<unsigned short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<signed char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<int, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<unsigned char>, unsigned char> > >; //Instantiated 72 times
template class itk::SmartPointer<itk::MinimumMaximumImageFilter<itk::Image<short, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<short, 3u>, itk::Functor::Cast<unsigned int, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<unsigned int, 2u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<signed char, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::Array<double> > >; //Instantiated 122 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageMomentsCalculator<itk::Image<float, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::GradientDescentLineSearchOptimizerv4Template<double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::HalfHermitianToRealInverseFFTImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<double, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<itk::CovariantVector<double, 2u>, 2u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u>, itk::Functor::BinaryThreshold<unsigned int, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 20 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ObjectToObjectMultiMetricv4<3u, 3u, itk::Image<double, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<double, 1u> const>; //Instantiated 16 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<signed char, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ImageToImageMetric<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryContourImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::EllipseSpatialObject<3u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<unsigned char, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<unsigned short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AttributeOpeningLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 16 times
template class itk::SmartPointer<itk::DisplacementFieldTransform<float, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<unsigned int>, unsigned int> > >; //Instantiated 72 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<float, 3u>, double> >; //Instantiated 104 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::PointSet<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > const>; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<unsigned char, 6u> >; //Instantiated 42 times
template class itk::SmartPointer<itk::fem::Element2DC0LinearTriangularMembrane>; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<short, 2u> > >; //Instantiated 120 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned int, 2u> > >; //Instantiated 118 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Statistics::SampleToHistogramFilter<itk::Statistics::ImageToListSampleAdaptor<itk::Image<float, 3u> >, itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<unsigned int, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 60 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<signed char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Add2<unsigned short, unsigned short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<short, 3u>, itk::Functor::Cast<double, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<float, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, std::greater<signed char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<short, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorNeighborhoodOperatorImageFilter<itk::Image<itk::Vector<float, 2u>, 3u>, itk::Image<itk::Vector<float, 2u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, std::greater<float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::LabelObject<unsigned int, 2u> > > >; //Instantiated 18 times
template class itk::SmartPointer<itk::FiniteDifferenceFunction<itk::Image<float, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned char, 2u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned int, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<signed char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<unsigned short, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::NodePair<itk::Index<2u>, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSeriesReader<itk::Image<unsigned char, 3u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::Image<float, 1u> >; //Instantiated 40 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<float, std::greater<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<unsigned short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Add2<double, double, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<unsigned int, 3u>, double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<int, 6u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::Image<unsigned long, 2u> >; //Instantiated 396 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BSplineTransform<double, 3u, 3u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<float, unsigned char> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ChangeInformationImageFilter<itk::Image<std::complex<double>, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Functor::Cast<short, short> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::TransformBaseTemplate<double> const>; //Instantiated 76 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned int, 2u>, double> >; //Instantiated 22 times
template class itk::SmartPointer<itk::TransformFactoryBase>; //Instantiated 46 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<double, 3u>, itk::DefaultConvertPixelTraits<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<unsigned int, 2u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, unsigned int> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<signed char, 2u> > >; //Instantiated 120 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Sub2<unsigned char, unsigned char, unsigned char> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::CovariantVector<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::ExponentialDisplacementFieldImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::Image<short, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ExpImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<bool, 3u>, itk::Image<bool, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 2u> >, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 1u>, 1u> const>; //Instantiated 24 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<int, 3u>, itk::Functor::Cast<short, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SpatialObjectTreeNode<2u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::SqrtImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, double> >; //Instantiated 38 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::PNGImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<short, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Cast<unsigned short, unsigned char> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned char, 6u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::DemonsRegistrationFunction<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::Div<int, int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, std::less<int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<float, 2u>, itk::Image<unsigned long, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 3u>, float> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, std::less<float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<float> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::VectorImageToImageAdaptor<float, 3u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<std::complex<double>, 2u>, itk::DefaultConvertPixelTraits<std::complex<double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, unsigned short> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned char, 3u>, itk::VectorImage<unsigned char, 3u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Cast<unsigned short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::DiffusionTensor3D<double>, 3u>, itk::DefaultConvertPixelTraits<itk::DiffusionTensor3D<double> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::InverseFFTImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<double, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MinimumMaximumImageFilter<itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<int, 2u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<int, 3u>, double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SparseFieldLayer<itk::SparseFieldLevelSetNode<itk::Index<2u> > > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::Image<unsigned int, 2u> const>; //Instantiated 716 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 1u>, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, std::greater<unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VectorImage<short, 3u> >; //Instantiated 286 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<short, std::greater<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::PermuteAxesImageFilter<itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Vector<float, 1u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, long> >; //Instantiated 554 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::BinaryThreshold<double, double> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::AnalyzeImageIOFactory>; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 2u>, 3u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::GaussianImageSource<itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Functor::BinaryNot<signed char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Exp<float, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::GaussianDerivativeImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<float, 6u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<unsigned char, 3u>, double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::IdentityTransform<float, 4u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 178 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::ImportImageFilter<float, 3u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<double, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<short, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryReconstructionLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<short, 3u>, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Cast<unsigned int, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<long, 2u> const>; //Instantiated 22 times
template class itk::SmartPointer<itk::Statistics::MinimumDecisionRule>; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ScalarImagePortionToHistogramGenerator<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::SpatialObjectProperty<float> >; //Instantiated 60 times
template class itk::SmartPointer<itk::TransformBaseTemplate<float> const>; //Instantiated 18 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<std::complex<double>, 3u> > >; //Instantiated 84 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned int, 6u>, itk::DefaultConvertPixelTraits<unsigned int> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Sub2<float, float, float> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Image<int, 3u> const>; //Instantiated 740 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Mult<unsigned char, unsigned char, unsigned char> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned long, 6u>, itk::DefaultConvertPixelTraits<unsigned long> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::FixedArray<float, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned short, std::greater<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Abs<unsigned int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Cast<unsigned short, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u>, itk::Functor::Add2<itk::Vector<float, 2u>, itk::Vector<float, 2u>, itk::Vector<float, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Div<unsigned int, unsigned int, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<short, std::less<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 3u> >, itk::LabelMap<itk::LabelObject<unsigned short, 3u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VersorRigid3DTransform<double> const>; //Instantiated 24 times
template class itk::SmartPointer<itk::BOBFFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::VectorLinearInterpolateNearestNeighborExtrapolateImageFunction<itk::Image<itk::Vector<double, 3u>, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<float, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<std::complex<float>, 3u>, itk::DefaultConvertPixelTraits<std::complex<float> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<signed char, std::less<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned char, std::greater<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<double, 3u> > >; //Instantiated 442 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, std::less<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 2u> >, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Testing::ComparisonImageFilter<itk::Image<double, 6u>, itk::Image<double, 6u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ANTSNeighborhoodCorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::Transform<double, 3u, 3u> > >; //Instantiated 122 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::JointHistogramMutualInformationComputeJointPDFThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::JointHistogramMutualInformationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned int, 2u> > >; //Instantiated 372 times
template class itk::SmartPointer<itk::Testing::HashImageFilter<itk::VectorImage<unsigned short, 6u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::PointSet<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<int, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, std::greater<short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<short, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<short, 3u>, double> >; //Instantiated 46 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<double, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, std::less<int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DisplacementFieldTransform<double, 4u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 2u>, itk::Image<float, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<unsigned int, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<unsigned short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<double, 4u>, itk::Image<double, 4u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::BinaryBallStructuringElement<float, 3u, itk::NeighborhoodAllocator<float> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<bool, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<bool> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, std::complex<float> > >; //Instantiated 154 times
template class itk::SmartPointer<itk::DisplacementFieldTransformParametersAdaptor<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 1u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<short, 3u>, itk::DefaultConvertPixelTraits<short> > >; //Instantiated 86 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<unsigned short, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<double, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineScatteredDataPointSetToImageFilter<itk::PointSet<itk::Vector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 3u>, 3u, 3u, float, float, itk::Vector<float, 3u> > >, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<double, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::RegularStepGradientDescentOptimizer>; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned char, std::less<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Cast<unsigned char, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::VectorImage<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<itk::Vector<float, 1u>, 3u>, itk::Image<itk::Vector<float, 1u>, 3u>, itk::Image<itk::Vector<float, 1u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::RGBPixel<unsigned char>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>, float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<float, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::TransformBaseTemplate<float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 64 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<float, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<int, 3u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<unsigned char, 3u> >; //Instantiated 276 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::Vector<double, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Abs<double, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, unsigned short> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AttributeOpeningLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Functor::AttributeLabelObjectAccessor<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 16 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<int, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::LabelOverlapMeasuresImageFilter<itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiResolutionPDEDeformableRegistration<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, float> >; //Instantiated 30 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, std::less<unsigned short>, std::less<unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::RelabelComponentImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<double, double> > >; //Instantiated 64 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<int, std::greater<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::PointSetToImageFilter<itk::PointSet<itk::Vector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 3u>, 3u, 3u, float, float, itk::Vector<float, 3u> > >, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 2u> >, itk::LabelMap<itk::LabelObject<unsigned int, 2u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<double, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::DisplacementFieldTransformParametersAdaptor<itk::DisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::CovariantVector<double, 2u>, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u>, itk::MaxFunctor<signed char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<long, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::EllipsoidInteriorExteriorSpatialFunction<2u, itk::Point<double, 2u> > >; //Instantiated 82 times
template class itk::SmartPointer<itk::NarrowBand<itk::BandNode<itk::Index<2u>, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<double> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned short, 2u>, double> >; //Instantiated 22 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<int, 3u>, itk::VectorImage<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<unsigned short, 3u>, itk::VectorImage<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<unsigned char, 3u>, double, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::DomainThreader<itk::ThreadedIndexedContainerPartitioner, itk::GradientDescentOptimizerBasev4Template<double> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ComputeHistogramQuantileThresholds<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::FastSymmetricForcesDemonsRegistrationFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<int, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::TimeVaryingVelocityFieldTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::TransformParametersAdaptor<itk::Euler3DTransform<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned long, 2u> >; //Instantiated 132 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Rigid3DTransform<float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<signed char, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::BinaryBallStructuringElement<unsigned char, 3u, itk::NeighborhoodAllocator<unsigned char> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<itk::CovariantVector<double, 3u>, 3u> >; //Instantiated 30 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<short, 3u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::Div<double, double, double> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::CropImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<signed char, 2u> const>; //Instantiated 700 times
template class itk::SmartPointer<itk::SparseFieldLayer<itk::ListNode<itk::Index<3u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<double, 4u>, itk::Image<double, 4u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<float, 3u>, itk::Image<int, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Image<std::complex<float>, 3u> >; //Instantiated 150 times
template class itk::SmartPointer<VCommandIterationUpdate<float, 3u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned short, 3u> > const>; //Instantiated 32 times
template class itk::SmartPointer<itk::Statistics::SampleToHistogramFilter<itk::Statistics::ImageToListSampleAdaptor<itk::Image<float, 2u> >, itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<signed char, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<unsigned char> >; //Instantiated 324 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ScaleTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 6u>, 3u> const>; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::BinaryThreshold<double, double> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ConjugateGradientLineSearchOptimizerv4Template<double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::VectorImageToImageAdaptor<float, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 58 times
template class itk::SmartPointer<itk::BRAINSFitHelper>; //Instantiated 18 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<short, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<unsigned short, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<unsigned short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelObject<unsigned short, 2u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Cast<short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Transform<float, 4u, 4u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Statistics::GaussianDistribution>; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 7u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<float, double> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<double, 3u>, double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<double, std::greater<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<long, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u>, itk::Functor::Cast<float, short> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<double, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<unsigned short, 3u>, itk::VectorImage<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AttributeLabelObject<unsigned long, 3u, bool> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ScalableAffineTransform<double, 3u> >; //Instantiated 58 times
template class itk::SmartPointer<itk::VectorImage<int, 2u> const>; //Instantiated 154 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u>, itk::Functor::IntensityLinearTransform<double, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ants::OptionFunction>; //Instantiated 338 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<double, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> >, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, std::greater<unsigned int> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<signed char, 2u> > >; //Instantiated 340 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<float, 1u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned short, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned char, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<short, 3u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<float, 3u> > >; //Instantiated 192 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::Transform<double, 4u, 4u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorImage<unsigned short, 3u> >; //Instantiated 266 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<int, 3u>, double> >; //Instantiated 20 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 6u>, 4u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 6u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 66 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned int, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Functor::MaskInput<int, int, int> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::Image<double, 4u> >; //Instantiated 22 times
template class itk::SmartPointer<itk::VectorImage<unsigned long, 3u> const>; //Instantiated 22 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<int, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned int, 3u> > const>; //Instantiated 32 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<unsigned char, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> >, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u> > >; //Instantiated 70 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, std::less<int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::LaplacianRecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >::AddMultConstFunctor> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineSmoothingOnUpdateDisplacementFieldTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<unsigned short, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 2u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<signed char, 3u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<float, 2u>, itk::DefaultConvertPixelTraits<float> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<int, 2u>, itk::Image<int, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<int>, int> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::BinaryThreshold<short, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<short, 2u>, double, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<double, 2u> >; //Instantiated 864 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Abs<unsigned short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelObject<unsigned short, 3u> >; //Instantiated 38 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CrossCorrelationRegistrationFunction<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<float, 4u>, itk::DefaultConvertPixelTraits<float> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned char, 2u>, double> >; //Instantiated 26 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 2u>, itk::Image<short, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<short, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::Transform<double, 2u, 2u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::TileImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >::TileInfo> >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<unsigned int, 3u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, std::less<int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<char, 6u>, itk::DefaultConvertPixelTraits<char> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::PointSet<itk::Vector<float, 1u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 2u, 2u, float, float, itk::Vector<float, 1u> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ImageRegionSplitterDirection>; //Instantiated 110 times
template class itk::SmartPointer<itk::ComposeDisplacementFieldsImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CompositeTransform<float, 2u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::TernaryFunctorImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Functor::LandweberMethod<std::complex<double>, std::complex<double>, std::complex<double>, std::complex<double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageMomentsCalculator<itk::Image<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShapeLabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> >, itk::Image<unsigned long, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u>, itk::Functor::Cast<unsigned short, float> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<signed char, 2u>, itk::Image<signed char, 2u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<signed char>, signed char> > >; //Instantiated 74 times
template class itk::SmartPointer<itk::Image<itk::FixedArray<float, 2u>, 2u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::Functor::BinaryNot<short> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelUniqueLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<int, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Functor::Cast<itk::Vector<float, 3u>, itk::Vector<float, 3u> > > >; //Instantiated 42 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<double, 3u>, itk::VectorImage<double, 3u> > >; //Instantiated 90 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 60 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, std::less<unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::VectorImage<double, 2u>, itk::VectorImage<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<int, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<double, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, itk::Functor::Div<itk::Vector<float, 3u>, double, itk::Vector<float, 3u> > > >; //Instantiated 34 times
template class itk::SmartPointer<itk::MultiplyByConstantImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, double, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<unsigned char, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<int, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<short, 3u> > >; //Instantiated 138 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 3u>, 3u> const>; //Instantiated 54 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<int, 2u>, double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::VectorNeighborhoodOperatorImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::MultiplyByConstantImageFilter<itk::Image<float, 3u>, float, itk::Image<float, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ResampleImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, double, double> >; //Instantiated 28 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageToImageFilter<itk::Image<float, 2u>, itk::Image<itk::CovariantVector<double, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<int, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::AffineTransform<double, 2u> >; //Instantiated 32 times
template class itk::SmartPointer<itk::InPlaceLabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<short, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::VectorImage<double, 2u> >; //Instantiated 290 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<float> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned short, std::greater<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConnectedComponentImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::BinaryThreshold<signed char, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Cast<unsigned short, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 3u> >, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<std::complex<double>, 3u>, itk::DefaultConvertPixelTraits<std::complex<double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<short, 3u>, itk::Functor::Cast<unsigned char, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ShiftScaleImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned int, 2u> > >; //Instantiated 54 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::PointSetToImageFilter<itk::PointSet<itk::Vector<double, 1u>, 1u, itk::DefaultStaticMeshTraits<itk::Vector<double, 1u>, 1u, 1u, float, float, itk::Vector<double, 1u> > >, itk::Image<itk::Vector<double, 1u>, 1u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<float, 3u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 3u>, itk::Image<short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::Add2<int, int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<short, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::VectorMultiResolutionPDEDeformableRegistration<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorResampleImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSeriesReader<itk::Image<short, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Sub2<unsigned short, unsigned short, unsigned short> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::CompositeTransform<double, 3u> const>; //Instantiated 24 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<unsigned short, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::OtsuThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, double> >; //Instantiated 50 times
template class itk::SmartPointer<itk::DemonsRegistrationFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Functor::Mult<signed char, signed char, signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PasteImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 4u>, itk::Image<float, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<double, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<signed char, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned int, 2u>, double> >; //Instantiated 28 times
template class itk::SmartPointer<itk::BSplineResampleImageFunction<itk::Image<double, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<std::complex<float>, 2u> > >; //Instantiated 66 times
template class itk::SmartPointer<itk::SimpleMemberCommand<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<float, 3u>, float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::CovariantVector<float, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, std::greater<unsigned short> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<bool, 3u>, itk::Image<bool, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::NthElementImageAdaptor<itk::Image<itk::CovariantVector<float, 3u>, 3u>, float> >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 2u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryNotImageFilter<itk::Image<unsigned int, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ants::CommandLineOption>; //Instantiated 338 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<signed char, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<double, 2u>, double> >; //Instantiated 28 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 2u>, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, unsigned int> >; //Instantiated 868 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned int, 3u>, double> >; //Instantiated 30 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, std::greater<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Add2<unsigned short, unsigned short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 5u, itk::Function::BlackmanWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BSplineInterpolationWeightFunction<double, 3u, 3u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<signed char, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, std::greater<unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned long, 2u> > const>; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<unsigned short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::AffineTransform<double, 3u> >; //Instantiated 96 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<float> >; //Instantiated 402 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<float, 3u>, itk::Image<char, 3u>, itk::Image<float, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::VectorImage<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::VectorIndexSelectionCast<itk::VariableLengthVector<unsigned char>, unsigned char> > >; //Instantiated 72 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RegistrationParameterScalesFromPhysicalShift<itk::MattesMutualInformationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<double, 3u> const>; //Instantiated 766 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Functor::IntensityWindowingTransform<double, double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<short, std::less<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Cast<short, unsigned char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<itk::FixedArray<float, 3u>, 3u> >; //Instantiated 18 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<unsigned short, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<unsigned int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Transform<double, 3u, 3u> const>; //Instantiated 76 times
template class itk::SmartPointer<itk::TransformParametersAdaptor<itk::AffineTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<double, 1u>, 1u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, std::complex<double> > >; //Instantiated 188 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::CovariantVector<double, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 112 times
template class itk::SmartPointer<itk::SyNImageRegistrationMethod<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::DisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<int, 2u>, itk::FlatStructuringElement<2u>, itk::MinFunctor<int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<double, double> > >; //Instantiated 60 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::Abs<float, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned int, std::less<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<float, 3u>, 4u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Add2<unsigned int, unsigned int, unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::TimeVaryingVelocityFieldIntegrationImageFilter<itk::Image<itk::Vector<float, 2u>, 3u>, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorErodeImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ObjectToObjectMetricBaseTemplate<double> >; //Instantiated 18 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned long, 2u>, itk::VectorImage<unsigned long, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<short, 2u>, itk::Functor::Cast<unsigned int, short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BMPImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<int, std::less<int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<float, 6u>, 3u>, itk::DefaultConvertPixelTraits<itk::Vector<float, 6u> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::LabelObject<unsigned char, 2u> > > >; //Instantiated 16 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::TimeVaryingVelocityFieldIntegrationImageFilter<itk::Image<itk::Vector<float, 3u>, 4u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Cast<short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ThresholdImageFilter<itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MetaDataObject<float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned char, 6u>, itk::DefaultConvertPixelTraits<unsigned char> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<float, 3u>, itk::DefaultConvertPixelTraits<float> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::LabelObject<unsigned int, 2u> >; //Instantiated 42 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::Vector<float, 6u>, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned short, 2u> > >; //Instantiated 118 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u>, itk::Functor::Cast<unsigned char, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::RoundImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<short, std::greater<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<double, 4u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BoxImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 98 times
template class itk::SmartPointer<itk::GaussianSmoothingOnUpdateTimeVaryingVelocityFieldTransform<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::MinimumMaximumImageFilter<itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SpatialObject<3u> const>; //Instantiated 50 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<unsigned int, 3u>, itk::VectorImage<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Rigid2DTransform<double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<char> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<signed char, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::AbsImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::TIFFImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<signed char, 3u>, itk::Image<float, 3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::OtsuMultipleThresholdsCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2> > >; //Instantiated 64 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<unsigned int, 3u>, itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, unsigned long> >; //Instantiated 464 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, float> >; //Instantiated 22 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::VnlRealToHalfHermitianForwardFFTImageFilter<itk::Image<double, 3u>, itk::Image<std::complex<double>, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned char, 3u> > >; //Instantiated 542 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<long, 2u>, itk::Image<long, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned short, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<unsigned long, 3u>, itk::VectorImage<unsigned long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorResampleImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u>, double> >; //Instantiated 32 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 58 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> >, itk::MattesMutualInformationImageToImageMetricv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImage<float, 4u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u>, itk::Functor::Mult<itk::Vector<float, 2u>, float, itk::Vector<float, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ReconstructionByDilationImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::NodePair<itk::Index<3u>, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned char, std::greater<unsigned char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageMomentsCalculator<itk::Image<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<unsigned int, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<float, 4u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::MersenneTwisterRandomVariateGenerator>; //Instantiated 63 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<int, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<double, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::AnchorCloseImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<double, 3u>, 4u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 3u>, 3u> >; //Instantiated 92 times
template class itk::SmartPointer<itk::StreamingImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 36 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::VectorImage<int, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<float, 2u> >; //Instantiated 298 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<float, 3u>, 3u>, float> >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Functor::IntensityLinearTransform<float, float> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<float, 1u>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<float, 3u> > >; //Instantiated 54 times
template class itk::SmartPointer<itk::TranslationTransform<double, 4u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<float, 4u>, itk::Image<float, 4u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 3u> >, itk::VectorImage<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<float, 4u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Cast<float, unsigned short> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ANTSNeighborhoodCorrelationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::ANTSNeighborhoodCorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageRegionSplitterBase>; //Instantiated 114 times
template class itk::SmartPointer<itk::MetaDataObject<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >; //Instantiated 38 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Abs<unsigned char, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4HelperThreader<itk::ThreadedImageRegionPartitioner<2u>, itk::ImageToImageMetricv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryDilateImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Statistics::DenseFrequencyContainer2>; //Instantiated 156 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::AddImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::BSplineControlPointImageFilter<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<int, 3u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<int, 2u>, itk::Functor::Cast<unsigned short, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VnlForwardFFTImageFilter<itk::Image<double, 3u>, itk::Image<std::complex<double>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned short, std::less<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<int, 2u>, itk::Functor::Cast<double, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned int, 4u>, itk::Image<unsigned int, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Cast<float, unsigned int> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<float, 3u>, double> >; //Instantiated 134 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<int, 3u>, itk::FlatStructuringElement<3u>, itk::MinFunctor<int> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, std::greater<unsigned char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u>, itk::Functor::Cast<int, double> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::ReconstructionByErosionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Image<int, 2u> const>; //Instantiated 714 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VnlInverseFFTImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::BinaryThreshold<float, unsigned int> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MattesMutualInformationImageToImageMetricv4GetValueAndDerivativeThreader<itk::ThreadedImageRegionPartitioner<3u>, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::MattesMutualInformationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<double, std::less<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<float, 2u>, double> >; //Instantiated 20 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<float, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MedianImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::WarpHarmonicEnergyCalculator<itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<int, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MedianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<float, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, std::less<float> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<bool, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::IntensityLinearTransform<float, unsigned char> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<signed char, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<signed char, 3u>, double, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<bool, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::LBFGSBOptimizerv4>; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeDilateImageFilter<itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, itk::MaxFunctor<signed char> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ShrinkImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<signed char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned int, 3u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BoundingBox<unsigned long, 3, double, itk::VectorContainer<unsigned long, itk::Point<double, 3u> > > >; //Instantiated 56 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::IntensityLinearTransform<float, float> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<unsigned short, 3u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorInterpolateImageFunction<itk::Image<itk::Vector<double, 3u>, 3u>, double> >; //Instantiated 30 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::DanielssonDistanceMapImageFilter<itk::Image<signed char, 2u>, itk::Image<float, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VersorRigid3DTransformOptimizer>; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<short, 3u>, itk::DefaultConvertPixelTraits<short> > >; //Instantiated 24 times
template class itk::SmartPointer<ants::RegistrationHelper<double, 3u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, signed char> >; //Instantiated 24 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned short, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<double, 2u>, itk::Image<unsigned int, 2u>, itk::Functor::Cast<double, unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Div<unsigned char, unsigned char, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<float, 2u> const>; //Instantiated 742 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Cast<short, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned long, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<int, 2u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<signed char, 3u>, itk::VectorImage<signed char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Functor::Add2<unsigned int, unsigned int, unsigned int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<unsigned char, 3u>, double> >; //Instantiated 58 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::LabelObject<unsigned short, 2u> > > >; //Instantiated 16 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<float, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::VTKImageIOFactory>; //Instantiated 40 times
template class itk::SmartPointer<itk::CorrelationImageToImageMetricv4HelperThreader<itk::ThreadedIndexedContainerPartitioner, itk::ImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> >, itk::CorrelationImageToImageMetricv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double, itk::DefaultImageToImageMetricTraitsv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u>, double> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ZeroCrossingImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SparseFieldLayer<itk::SparseFieldLevelSetNode<itk::Index<3u> > > >; //Instantiated 22 times
template class itk::SmartPointer<itk::Image<itk::CovariantVector<float, 2u>, 2u> >; //Instantiated 14 times
template class itk::SmartPointer<itk::Statistics::MaskedImageToHistogramFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 3u, itk::Function::WelchWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::TransformParametersAdaptor<itk::DisplacementFieldTransform<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<double, 3u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Add2<unsigned char, unsigned char, unsigned char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Object>; //Instantiated 12 times
template class itk::SmartPointer<itk::Image<bool, 3u> const>; //Instantiated 34 times
template class itk::SmartPointer<itk::VectorContainer<unsigned long, itk::Point<double, 3u> > >; //Instantiated 66 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Vector<double, 3u> > >; //Instantiated 56 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<unsigned short, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::Testing::ExtractSliceImageFilter<itk::Image<double, 6u>, itk::Image<double, 2u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<itk::Vector<double, 4u>, 4u>, itk::DefaultConvertPixelTraits<itk::Vector<double, 4u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::TimeVaryingVelocityFieldIntegrationImageFilter<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelMap<itk::LabelObject<unsigned int, 3u> > >; //Instantiated 54 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned char, 2u> > >; //Instantiated 124 times
template class itk::SmartPointer<itk::Image<itk::FixedArray<float, 2u>, 2u> const>; //Instantiated 8 times
template class itk::SmartPointer<itk::SubtractImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 20 times
template class itk::SmartPointer<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::RegionOfInterestImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FiniteDifferenceFunction<itk::Image<double, 3u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::NearestNeighborInterpolateImageFunction<itk::Image<float, 2u>, double> >; //Instantiated 26 times
template class itk::SmartPointer<itk::MovingHistogramImageFilterBase<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LargestForegroundFilledMaskImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BasicErodeImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned long, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<short, 2u>, itk::Image<float, 2u>, itk::Functor::Cast<short, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<signed char, 2u> >; //Instantiated 268 times
template class itk::SmartPointer<itk::Image<double, 6u> >; //Instantiated 42 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::AffineTransform<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PointSetToImageFilter<itk::PointSet<itk::Vector<float, 1u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 2u, 2u, float, float, itk::Vector<float, 1u> > >, itk::Image<itk::Vector<float, 1u>, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<signed char, 2u>, itk::DefaultConvertPixelTraits<signed char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorImage<unsigned short, 3u> const>; //Instantiated 150 times
template class itk::SmartPointer<itk::FlipImageFilter<itk::Image<double, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, std::less<double>, std::less<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<float, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<float, 2u>, 2u>, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<float, 3u>, float> >; //Instantiated 52 times
template class itk::SmartPointer<itk::ConstantPadImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<signed char, std::greater<signed char> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<signed char, 3u> > >; //Instantiated 340 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::Offset<3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::IdentityTransform<double, 2u> >; //Instantiated 44 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<unsigned char, 2u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ValuedRegionalExtremaImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, std::less<unsigned int>, std::less<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExpTensorImageFilter<itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u>, itk::Image<itk::SymmetricSecondRankTensor<float, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<unsigned int, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::DiffeomorphicDemonsRegistrationFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::MovingHistogramDilateImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::VectorContainer<unsigned int, itk::Index<3u> > >; //Instantiated 50 times
template class itk::SmartPointer<CommandIterationUpdate<float, 3u> >; //Instantiated 14 times
template class itk::SmartPointer<itk::MaximumImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<long, 3u>, itk::Image<long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MultiplyImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<unsigned short, 2u>, itk::DefaultConvertPixelTraits<unsigned short> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<unsigned short, 3u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<signed char, 2u>, double> >; //Instantiated 22 times
template class itk::SmartPointer<itk::RankImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned char, 2u>, double> >; //Instantiated 24 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned short, std::greater<unsigned short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::MedianImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Cast<unsigned int, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CompositeTransform<double, 4u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::Histogram<unsigned int, itk::Statistics::DenseFrequencyContainer2> >; //Instantiated 12 times
template class itk::SmartPointer<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<int, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<unsigned char, 3u>, double> >; //Instantiated 70 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 2u> >, itk::VectorImage<unsigned char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::CreateObjectFunction<itk::MatrixOffsetTransformBase<double, 4u, 4u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>, itk::Functor::InverseDeconvolutionFunctor<std::complex<double>, std::complex<double>, std::complex<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BoundingBox<unsigned long, 2, float, itk::VectorContainer<unsigned long, itk::Point<float, 2u> > > >; //Instantiated 18 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::Abs<int, int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<unsigned int, 3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<float, 2u>, float> >; //Instantiated 12 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 3u> >, itk::Image<unsigned short, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 3u, itk::Function::LanczosWindowFunction<3u, double, double>, itk::ConstantBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 46 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 3u> >, itk::VectorImage<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 78 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>, itk::Functor::Cast<float, unsigned short> > >; //Instantiated 44 times
template class itk::SmartPointer<itk::BasicDilateImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::BSplineDecompositionImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<unsigned long, 2u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::BinaryMorphologyImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleAdaptor<itk::Image<signed char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::Image<short, 4u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u>, itk::Functor::IntensityLinearTransform<unsigned char, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<unsigned short, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<float, std::greater<float> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::Add2<unsigned char, unsigned char, unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 2u>, itk::LabelMap<itk::LabelObject<unsigned char, 2u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<double, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<int, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::Testing::StretchIntensityImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::VectorNeighborhoodOperatorImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<signed char, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 70 times
template class itk::SmartPointer<itk::AnchorErodeDilateImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u>, std::less<unsigned char> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<std::complex<float>, 3u>, itk::Image<std::complex<float>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<int, 3u>, itk::Functor::IntensityLinearTransform<float, int> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::Image<bool, 2u> const>; //Instantiated 34 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<unsigned char, 2u>, itk::Functor::BinaryThreshold<int, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::VectorNeighborhoodOperatorImageFilter<itk::Image<itk::Vector<float, 3u>, 4u>, itk::Image<itk::Vector<float, 3u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<int, 2u>, double> >; //Instantiated 20 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramMorphologyImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<unsigned int, std::greater<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::WarpImageMultiTransformFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<itk::Vector<float, 2u>, 2u>, itk::MatrixOffsetTransformBase<double, 2u, 2u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::MaskInput<float, float, float> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::Similarity3DTransform<double> >; //Instantiated 12 times
template class itk::SmartPointer<itk::QuaternionRigidTransform<double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::Cast<int, int> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::ObjectStore<itk::ListNode<itk::Index<3u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<unsigned int, unsigned char> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ValuedRegionalMinimaImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<unsigned char, 4u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Statistics::EuclideanDistanceMetric<itk::Array<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 52 times
template class itk::SmartPointer<itk::MovingHistogramErodeImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ShapeLabelObject<unsigned long, 2u> >; //Instantiated 10 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::DemonsRegistrator<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>, float> >; //Instantiated 14 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned short, 2u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::BinaryThreshold<int, int> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<double, 3u>, float, itk::CovariantVector<double, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Image<int, 2u>, itk::Functor::Mult<int, int, int> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<double, 3u>, 4u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ResampleInPlaceImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned char, 3u>, 5u, itk::Function::WelchWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VectorImageToImageAdaptor<float, 3u> >; //Instantiated 16 times
template class itk::SmartPointer<itk::DiscreteGaussianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 66 times
template class itk::SmartPointer<itk::ImageSeriesReader<itk::Image<float, 3u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HMinimaImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<int, 3u>, itk::VectorImage<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 3u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 66 times
template class itk::SmartPointer<itk::ImageSource<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 3u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned int, 2u>, itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> >, itk::Image<unsigned long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelImageGaussianInterpolateImageFunction<itk::Image<int, 2u>, double, std::less<double> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, itk::FlatStructuringElement<2u>, itk::Function::MorphologyHistogram<unsigned int, std::greater<unsigned int> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<double, 1u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::InverseDeconvolutionImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>, itk::Image<int, 3u>, double> >; //Instantiated 6 times
template class itk::SmartPointer<itk::FiniteDifferenceFunction<itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<short, 2u>, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ESMDemonsRegistrationWithMaskFunction<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>, int> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<long, 3u> >; //Instantiated 374 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<float, 4u>, float> >; //Instantiated 8 times
template class itk::SmartPointer<itk::PointSetToImageFilter<itk::PointSet<itk::Vector<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 2u>, 2u, 2u, float, float, itk::Vector<float, 2u> > >, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<unsigned char, 2u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::RescaleIntensityImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 40 times
template class itk::SmartPointer<itk::Transform<double, 2u, 2u> >; //Instantiated 70 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 4u>, 4u> >; //Instantiated 18 times
template class itk::SmartPointer<itk::ProcessObject>; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>, double> >; //Instantiated 10 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<short, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::VanHerkGilWermanErodeImageFilter<itk::Image<unsigned char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 3u>, itk::Image<int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorCastImageFilter<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >; //Instantiated 30 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<double, 2u>, itk::DefaultConvertPixelTraits<double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LaplacianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<short, 2u>, double, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtrapolateImageFunction<itk::Image<float, 3u>, double> >; //Instantiated 72 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<long, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::FFTConvolutionImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::DivideImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<short, 2u>, itk::VectorImage<short, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 3u>, 5u, itk::Function::HammingWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>, itk::Functor::InverseDeconvolutionFunctor<std::complex<double>, std::complex<double>, std::complex<double> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned int, 2u>, itk::DefaultConvertPixelTraits<unsigned int> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<short, 6u>, itk::DefaultConvertPixelTraits<short> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::AnchorDilateImageFilter<itk::Image<long, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PointSet<itk::Vector<float, 1u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 3u, 3u, float, float, itk::Vector<float, 1u> > > >; //Instantiated 10 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::MinimumMaximumImageFilter<itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u>, itk::GradientMagnitudeRecursiveGaussianImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >::SqrSpacing> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageFileWriter<itk::VectorImage<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<itk::VariableLengthVector<signed char> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u>, itk::Functor::BinaryThreshold<unsigned int, float> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<std::complex<float> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>, itk::Functor::Abs<unsigned short, unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 3u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::MaskImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryErodeImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Functor::Mult<float, float, float> > >; //Instantiated 16 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<signed char, 3u> > >; //Instantiated 120 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 64 times
template class itk::SmartPointer<itk::VotingBinaryImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MovingHistogramImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>, itk::FlatStructuringElement<3u>, itk::Function::MorphologyHistogram<short, std::greater<short> > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Functor::Div<unsigned int, double, double> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BSplineInterpolateImageFunction<itk::Image<float, 2u>, double, double> >; //Instantiated 16 times
template class itk::SmartPointer<itk::DataObjectDecorator<itk::Transform<float, 3u, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<short, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::PointSet<itk::Vector<double, 1u>, 1u, itk::DefaultStaticMeshTraits<itk::Vector<double, 1u>, 1u, 1u, float, float, itk::Vector<double, 1u> > > >; //Instantiated 18 times
template class itk::SmartPointer<itk::BinaryThresholdImageFunction<itk::Image<int, 2u>, float> >; //Instantiated 6 times
template class itk::SmartPointer<itk::Testing::ExtractSliceImageFilter<itk::Image<unsigned char, 6u>, itk::Image<unsigned char, 2u> > >; //Instantiated 38 times
template class itk::SmartPointer<itk::PointSet<double, 2u, itk::DefaultStaticMeshTraits<double, 2u, 2u, float, float, double> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<double, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::PadImageFilter<itk::VectorImage<float, 2u>, itk::VectorImage<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::VectorLinearInterpolateImageFunction<itk::Image<itk::Vector<double, 3u>, 4u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageSource<itk::Image<itk::DiffusionTensor3D<double>, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::AttributeLabelObject<unsigned long, 2u, bool> >, itk::Image<unsigned char, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::Image<double, 6u>, itk::DefaultConvertPixelTraits<double> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::CentralDifferenceImageFunction<itk::Image<signed char, 2u>, float, itk::CovariantVector<double, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelUniqueLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned int, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelObject<unsigned long, 2u> >; //Instantiated 30 times
template class itk::SmartPointer<itk::LinearInterpolateImageFunction<itk::Image<unsigned long, 2u>, double> >; //Instantiated 14 times
template class itk::SmartPointer<itk::BSplineScatteredDataPointSetToImageFilter<itk::PointSet<itk::Vector<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 2u>, 2u, 2u, float, float, itk::Vector<float, 2u> > >, itk::Image<itk::Vector<float, 2u>, 2u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ExtractImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >; //Instantiated 42 times
template class itk::SmartPointer<itk::NormalizeToConstantImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::VanHerkGilWermanDilateImageFilter<itk::Image<unsigned char, 2u>, itk::FlatStructuringElement<2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, itk::RGBPixel<unsigned char> > >; //Instantiated 12 times
template class itk::SmartPointer<itk::ReconstructionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>, std::less<double> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::HistogramMatchingImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>, unsigned int> >; //Instantiated 6 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::Statistics::ImageToHistogramFilter<itk::Image<signed char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::LabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned short, 2u> >, itk::Image<unsigned short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::Image<std::complex<double>, 2u> >; //Instantiated 186 times
template class itk::SmartPointer<itk::LargestForegroundFilledMaskImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 14 times
template class itk::SmartPointer<itk::Image<unsigned char, 2u> const>; //Instantiated 752 times
template class itk::SmartPointer<itk::BinaryThresholdImageFilter<itk::Image<short, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::DisplacementFieldTransform<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::StatisticsImageFilter<itk::Image<signed char, 2u> > >; //Instantiated 26 times
template class itk::SmartPointer<itk::LabelMapToBinaryImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 3u> >, itk::Image<unsigned char, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<unsigned int, 2u>, 5u, itk::Function::LanczosWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::InterpolateImageFunction<itk::Image<long, 3u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 50 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::ImportImageContainer<unsigned long, std::deque<itk::LabelObjectLine<2u>, std::allocator<itk::LabelObjectLine<2u> > > > >; //Instantiated 12 times
template class itk::SmartPointer<itk::IsoContourDistanceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<float, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::LabelObject<unsigned int, 3u> >; //Instantiated 42 times
template class itk::SmartPointer<itk::Image<itk::Vector<float, 6u>, 4u> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelUniqueLabelMapFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::NeighborhoodOperatorImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>, double> >; //Instantiated 78 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<float, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::LabelImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned char, 3u> > > >; //Instantiated 8 times
template class itk::SmartPointer<itk::ImageFileReader<itk::VectorImage<unsigned short, 2u>, itk::DefaultConvertPixelTraits<unsigned short> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::UnaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::BinaryThreshold<unsigned char, unsigned char> > >; //Instantiated 48 times
template class itk::SmartPointer<itk::GaussianSpatialFunction<double, 1u, itk::Point<double, 1u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::HistogramThresholdCalculator<itk::Statistics::Histogram<double, itk::Statistics::DenseFrequencyContainer2>, unsigned short> >; //Instantiated 24 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::PadImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> > >; //Instantiated 62 times
template class itk::SmartPointer<itk::KernelImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>, itk::FlatStructuringElement<3u> > >; //Instantiated 34 times
template class itk::SmartPointer<itk::Image<itk::Vector<double, 4u>, 4u> >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<double, 2u> > >; //Instantiated 28 times
template class itk::SmartPointer<itk::RecursiveGaussianImageFilter<itk::Image<unsigned char, 2u>, itk::Image<float, 2u> > >; //Instantiated 22 times
template class itk::SmartPointer<itk::ComposeImageFilter<itk::Image<signed char, 2u>, itk::VectorImage<signed char, 2u> > >; //Instantiated 76 times
template class itk::SmartPointer<itk::GaussianInterpolateImageFunction<itk::Image<unsigned int, 2u>, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::CastImageFilter<itk::Image<unsigned char, 2u>, itk::Image<short, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ImageTransformer<itk::Image<signed char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::MetaDataObjectBase const>; //Instantiated 118 times
template class itk::SmartPointer<itk::WindowedSincInterpolateImageFunction<itk::Image<short, 2u>, 5u, itk::Function::CosineWindowFunction<5u, double, double>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >, double> >; //Instantiated 8 times
template class itk::SmartPointer<itk::Transform<double, 4u, 4u> >; //Instantiated 24 times
template class itk::SmartPointer<itk::LabelStatisticsImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageDuplicator<itk::Image<itk::Vector<double, 3u>, 3u> > >; //Instantiated 8 times
template class itk::SmartPointer<itk::VDemonsRegistrator<itk::Image<float, 3u>, itk::Image<float, 3u>, float> >; //Instantiated 16 times
template class itk::SmartPointer<itk::CenteredTransformInitializer<itk::AffineTransform<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 6 times
template class itk::SmartPointer<itk::BinaryImageToLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::LabelObject<unsigned int, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::MinimumMaximumImageCalculator<itk::Image<unsigned char, 3u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::BinaryFunctorImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>, itk::Functor::Mult<unsigned char, unsigned char, unsigned char> > >; //Instantiated 18 times
template class itk::SmartPointer<itk::SimpleDataObjectDecorator<bool> >; //Instantiated 122 times
template class itk::SmartPointer<itk::BinaryImageToShapeLabelMapFilter<itk::Image<unsigned char, 3u>, itk::LabelMap<itk::ShapeLabelObject<unsigned long, 3u> > > >; //Instantiated 6 times
template class itk::SmartPointer<itk::ThresholdImageFilter<itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::ImageSource<itk::VectorImage<unsigned short, 3u> > >; //Instantiated 122 times
template class itk::SmartPointer<itk::Statistics::ImageToListSampleFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::HistogramThresholdImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >; //Instantiated 24 times
template class itk::SmartPointer<itk::CyclicShiftImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> > >; //Instantiated 32 times
template class itk::SmartPointer<itk::ShrinkImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> > >; //Instantiated 10 times
template class itk::SmartPointer<itk::VectorIndexSelectionCastImageFilter<itk::VectorImage<int, 3u>, itk::Image<int, 3u> > >; //Instantiated 80 times
