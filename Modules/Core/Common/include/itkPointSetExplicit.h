#ifndef __ExplicitInstantiation_itkPointSet_h__
#define __ExplicitInstantiation_itkPointSet_h__
#include "itkDefaultStaticMeshTraits.h"
#include "itkDefaultDynamicMeshTraits.h"
//exclude QuadEdgeMesh
extern template class itk::PointSet<itk::Point<double, 2u>, 2u, itk::DefaultStaticMeshTraits<double, 2u, 2u, double, double, double> >;
extern template class itk::PointSet<itk::CovariantVector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::CovariantVector<float, 3u>, 3u, 3u, float, float, itk::CovariantVector<float, 3u> > >;
extern template class itk::PointSet<unsigned char, 3u, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> >;
extern template class itk::PointSet<itk::Vector<float, 1u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 2u, 2u, float, float, itk::Vector<float, 1u> > >;
extern template class itk::PointSet<itk::Vector<double, 3u>, 1u, itk::DefaultStaticMeshTraits<itk::Vector<double, 3u>, 1u, 1u, float, float, itk::Vector<double, 3u> > >;
extern template class itk::PointSet<itk::Point<float, 2u>, 3u, itk::DefaultStaticMeshTraits<itk::Point<float, 2u>, 3u, 3u, float, float, itk::Point<float, 2u> > >;
extern template class itk::PointSet<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> >;
extern template class itk::PointSet<itk::Vector<double, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<double, 2u>, 2u, 2u, float, float, itk::Vector<double, 2u> > >;
extern template class itk::PointSet<itk::Matrix<double, 3u, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Matrix<double, 3u, 3u>, 3u, 3u, float, float, itk::Matrix<double, 3u, 3u> > >;
extern template class itk::PointSet<unsigned short, 3u, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> >;
extern template class itk::PointSet<itk::Vector<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 2u>, 2u, 2u, float, float, itk::Vector<float, 2u> > >;
extern template class itk::PointSet<unsigned int, 2u, itk::DefaultStaticMeshTraits<unsigned int, 2u, 2u, float, float, unsigned int> >;
extern template class itk::PointSet<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::PointSet<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> >;
extern template class itk::PointSet<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> >;
extern template class itk::PointSet<itk::Vector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 3u>, 3u, 3u, float, float, itk::Vector<float, 3u> > >;
extern template class itk::PointSet<itk::Vector<double, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<double, 3u>, 3u, 3u, float, float, itk::Vector<double, 3u> > >;
extern template class itk::PointSet<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> >;
extern template class itk::PointSet<double, 2u, itk::DefaultStaticMeshTraits<double, 2u, 2u, float, float, double> >;
extern template class itk::PointSet<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> >;
extern template class itk::PointSet<double, 2u, itk::DefaultDynamicMeshTraits<double, 2u, 2u, double, float, double> >;
extern template class itk::PointSet<itk::Point<double, 3u>, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::PointSet<unsigned char, 2u, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> >;
extern template class itk::PointSet<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::PointSet<itk::Vector<double, 2u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<double, 2u>, 3u, 3u, float, float, itk::Vector<double, 2u> > >;
extern template class itk::PointSet<itk::Vector<double, 1u>, 1u, itk::DefaultStaticMeshTraits<itk::Vector<double, 1u>, 1u, 1u, float, float, itk::Vector<double, 1u> > >;
extern template class itk::PointSet<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> >;
#endif //__ExplicitInstantiation_itkPointSet_h__