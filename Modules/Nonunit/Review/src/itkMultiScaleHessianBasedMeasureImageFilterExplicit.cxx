#include "itkMultiScaleHessianBasedMeasureImageFilter.h"

template class itk::MultiScaleHessianBasedMeasureImageFilter<itk::Image<float, 2u>, itk::Image<itk::SymmetricSecondRankTensor<double, 2u>, 2u>, itk::Image<float, 2u> >; //Instantiated 3 times