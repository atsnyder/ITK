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
#ifndef __itkMeshSourceExplicit_h
#define __itkMeshSourceExplicit_h
#include "itkSimplexMesh.h"
//exclude VoronoiDiagram2D
//exclude QuadEdgeMesh
extern template class itk::MeshSource<itk::PointSet<long, 3u, itk::DefaultStaticMeshTraits<long, 3u, 3u, float, float, long> > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshSource<itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshSource<itk::PointSet<itk::Matrix<double, 3u, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Matrix<double, 3u, 3u>, 3u, 3u, float, float, itk::Matrix<double, 3u, 3u> > > >;
extern template class itk::MeshSource<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> > >;
extern template class itk::MeshSource<itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> > >;
extern template class itk::MeshSource<itk::Mesh<itk::Point<float, 2u>, 3u, itk::DefaultStaticMeshTraits<itk::Point<float, 2u>, 3u, 3u, float, float, itk::Point<float, 2u> > > >;
extern template class itk::MeshSource<itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshSource<itk::PointSet<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> > >;
extern template class itk::MeshSource<itk::PointSet<itk::Vector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<float, 3u>, 3u, 3u, float, float, itk::Vector<float, 3u> > > >;
extern template class itk::MeshSource<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
#endif //__itkMeshSourceExplicit_h
