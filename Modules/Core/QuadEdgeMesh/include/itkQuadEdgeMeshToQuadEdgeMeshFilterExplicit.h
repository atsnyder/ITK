#ifndef __ExplicitInstantiation_itkQuadEdgeMeshToQuadEdgeMeshFilter_h__
#define __ExplicitInstantiation_itkQuadEdgeMeshToQuadEdgeMeshFilter_h__
#include "itkQuadEdgeMesh.h"
extern template class itk::QuadEdgeMeshToQuadEdgeMeshFilter<itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshTraits<float, 3u, bool, bool, float, float> >, itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshTraits<float, 3u, bool, bool, float, float> > >;
extern template class itk::QuadEdgeMeshToQuadEdgeMeshFilter<itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshExtendedTraits<double, 3u, 2u, double, double, double, bool, bool> >, itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshExtendedTraits<double, 3u, 2u, double, double, double, bool, bool> > >;
extern template class itk::QuadEdgeMeshToQuadEdgeMeshFilter<itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshTraits<double, 3u, bool, bool, float, float> >, itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshTraits<double, 3u, bool, bool, float, float> > >;
extern template class itk::QuadEdgeMeshToQuadEdgeMeshFilter<itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshExtendedTraits<float, 3u, 2u, double, double, float, bool, bool> >, itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshExtendedTraits<float, 3u, 2u, double, double, float, bool, bool> > >;
#endif //__ExplicitInstantiation_itkQuadEdgeMeshToQuadEdgeMeshFilter_h__
