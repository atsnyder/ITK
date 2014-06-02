#ifndef __ExplicitInstantiation_itkPointSetToImageFilter_h__
#define __ExplicitInstantiation_itkPointSetToImageFilter_h__
#include "itkPointSet.h"
extern template class itk::PointSetToImageFilter<itk::PointSet<itk::Vector<double, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<double, 3u>, 3u, 3u, float, float, itk::Vector<double, 3u> > >, itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::PointSetToImageFilter<itk::PointSet<itk::Vector<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 2u>, 2u, 2u, float, float, itk::Vector<float, 2u> > >, itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::PointSetToImageFilter<itk::PointSet<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> >, itk::Image<unsigned char, 2u> >;
extern template class itk::PointSetToImageFilter<itk::PointSet<itk::Vector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 3u>, 3u, 3u, float, float, itk::Vector<float, 3u> > >, itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::PointSetToImageFilter<itk::PointSet<itk::Vector<float, 1u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 1u>, 2u, 2u, float, float, itk::Vector<float, 1u> > >, itk::Image<itk::Vector<float, 1u>, 2u> >;
extern template class itk::PointSetToImageFilter<itk::PointSet<itk::Vector<double, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<double, 2u>, 2u, 2u, float, float, itk::Vector<double, 2u> > >, itk::Image<itk::Vector<double, 2u>, 2u> >;
extern template class itk::PointSetToImageFilter<itk::PointSet<itk::Vector<double, 1u>, 1u, itk::DefaultStaticMeshTraits<itk::Vector<double, 1u>, 1u, 1u, float, float, itk::Vector<double, 1u> > >, itk::Image<itk::Vector<double, 1u>, 1u> >;
extern template class itk::PointSetToImageFilter<itk::PointSet<itk::Vector<double, 3u>, 1u, itk::DefaultStaticMeshTraits<itk::Vector<double, 3u>, 1u, 1u, float, float, itk::Vector<double, 3u> > >, itk::Image<itk::Vector<double, 3u>, 1u> >;
#endif //__ExplicitInstantiation_itkPointSetToImageFilter_h__