#include "itkGradientAnisotropicDiffusionImageFilter.h"

template class itk::GradientAnisotropicDiffusionImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 26 times
template class itk::GradientAnisotropicDiffusionImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u> >; //Instantiated 6 times
template class itk::GradientAnisotropicDiffusionImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u> >; //Instantiated 6 times
template class itk::GradientAnisotropicDiffusionImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u> >; //Instantiated 12 times
