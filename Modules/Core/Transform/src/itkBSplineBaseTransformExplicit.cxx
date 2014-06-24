#include "itkBSplineBaseTransform.h"

template class itk::BSplineBaseTransform<float, 2u, 2u>; //Instantiated 6 times
template class itk::BSplineBaseTransform<double, 3u, 3u>; //Instantiated 45 times
template class itk::BSplineBaseTransform<double, 2u, 3u>; //Instantiated 51 times
template class itk::BSplineBaseTransform<double, 2u, 2u>; //Instantiated 12 times
template class itk::BSplineBaseTransform<float, 3u, 3u>; //Instantiated 15 times
template class itk::BSplineBaseTransform<double, 2u, 1u>; //Instantiated 6 times
template class itk::BSplineBaseTransform<double, 3u, 2u>; //Instantiated 6 times
