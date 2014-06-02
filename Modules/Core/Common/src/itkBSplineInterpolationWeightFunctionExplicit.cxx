#include "itkBSplineInterpolationWeightFunction.h"

template class itk::BSplineInterpolationWeightFunction<float, 3u, 3u>; //Instantiated 6 times
template class itk::BSplineInterpolationWeightFunction<double, 2u, 2u>; //Instantiated 6 times
template class itk::BSplineInterpolationWeightFunction<double, 2u, 1u>; //Instantiated 4 times
template class itk::BSplineInterpolationWeightFunction<double, 3u, 2u>; //Instantiated 4 times
template class itk::BSplineInterpolationWeightFunction<double, 2u, 3u>; //Instantiated 38 times
template class itk::BSplineInterpolationWeightFunction<double, 3u, 3u>; //Instantiated 22 times