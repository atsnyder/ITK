/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef __itkTubeSpatialObjectExplicit_h
#define __itkTubeSpatialObjectExplicit_h
#include "itkVesselTubeSpatialObjectPoint.h"
#include "itkDTITubeSpatialObjectPoint.h"
extern template class itk::TubeSpatialObject<3u, itk::TubeSpatialObjectPoint<3u> >;
extern template class itk::TubeSpatialObject<3u, itk::VesselTubeSpatialObjectPoint<3u> >;
extern template class itk::TubeSpatialObject<2u, itk::VesselTubeSpatialObjectPoint<2u> >;
extern template class itk::TubeSpatialObject<2u, itk::TubeSpatialObjectPoint<2u> >;
extern template class itk::TubeSpatialObject<2u, itk::DTITubeSpatialObjectPoint<2u> >;
extern template class itk::TubeSpatialObject<3u, itk::DTITubeSpatialObjectPoint<3u> >;
#endif //__itkTubeSpatialObjectExplicit_h
