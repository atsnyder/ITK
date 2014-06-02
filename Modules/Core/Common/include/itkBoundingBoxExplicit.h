#ifndef __ExplicitInstantiation_itkBoundingBox_h__
#define __ExplicitInstantiation_itkBoundingBox_h__
#include "itkMapContainer.h"
#include "itkVectorContainer.h"
//exclude QuadEdgeMeshPoint
extern template class itk::BoundingBox<unsigned long, 3, double, itk::VectorContainer<unsigned long, itk::Point<double, 3u> > >;
extern template class itk::BoundingBox<unsigned long, 4, double, itk::VectorContainer<unsigned long, itk::Point<double, 4u> > >;
extern template class itk::BoundingBox<unsigned long, 3, float, itk::VectorContainer<unsigned long, itk::Point<float, 3u> > >;
extern template class itk::BoundingBox<unsigned long, 1, float, itk::VectorContainer<unsigned long, itk::Point<float, 1u> > >;
extern template class itk::BoundingBox<unsigned long, 3, double, itk::MapContainer<unsigned long, itk::Point<double, 3u> > >;
extern template class itk::BoundingBox<unsigned long, 2, double, itk::VectorContainer<unsigned long, itk::Point<double, 2u> > >;
extern template class itk::BoundingBox<unsigned int, 2, float, itk::VectorContainer<unsigned long, itk::Point<float, 2u> > >;
extern template class itk::BoundingBox<unsigned long, 2, float, itk::VectorContainer<unsigned long, itk::Point<float, 2u> > >;
extern template class itk::BoundingBox<unsigned long, 3, float, itk::MapContainer<unsigned long, itk::Point<float, 3u> > >;
extern template class itk::BoundingBox<unsigned long, 2, double, itk::MapContainer<unsigned long, itk::Point<double, 2u> > >;
#endif //__ExplicitInstantiation_itkBoundingBox_h__