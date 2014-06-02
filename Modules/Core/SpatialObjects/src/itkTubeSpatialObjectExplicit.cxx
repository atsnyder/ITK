#include "itkTubeSpatialObject.h"

template class itk::TubeSpatialObject<3u, itk::TubeSpatialObjectPoint<3u> >; //Instantiated 32 times
template class itk::TubeSpatialObject<3u, itk::VesselTubeSpatialObjectPoint<3u> >; //Instantiated 26 times
template class itk::TubeSpatialObject<2u, itk::VesselTubeSpatialObjectPoint<2u> >; //Instantiated 36 times
template class itk::TubeSpatialObject<2u, itk::TubeSpatialObjectPoint<2u> >; //Instantiated 38 times
template class itk::TubeSpatialObject<2u, itk::DTITubeSpatialObjectPoint<2u> >; //Instantiated 36 times
template class itk::TubeSpatialObject<3u, itk::DTITubeSpatialObjectPoint<3u> >; //Instantiated 30 times