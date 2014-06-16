#ifndef __ExplicitInstantiation_itkTubeSpatialObject_h__
#define __ExplicitInstantiation_itkTubeSpatialObject_h__
#include "itkVesselTubeSpatialObjectPoint.h"
#include "itkDTITubeSpatialObjectPoint.h"
extern template class itk::TubeSpatialObject<3u, itk::TubeSpatialObjectPoint<3u> >;
extern template class itk::TubeSpatialObject<3u, itk::VesselTubeSpatialObjectPoint<3u> >;
extern template class itk::TubeSpatialObject<2u, itk::VesselTubeSpatialObjectPoint<2u> >;
extern template class itk::TubeSpatialObject<2u, itk::TubeSpatialObjectPoint<2u> >;
extern template class itk::TubeSpatialObject<2u, itk::DTITubeSpatialObjectPoint<2u> >;
extern template class itk::TubeSpatialObject<3u, itk::DTITubeSpatialObjectPoint<3u> >;
#endif //__ExplicitInstantiation_itkTubeSpatialObject_h__
