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
#ifndef __itkMeshToMeshFilterExplicit_h
#define __itkMeshToMeshFilterExplicit_h
//exclude QuadEdgeMesh
//exclude Vector
extern template class itk::MeshToMeshFilter<itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> >, itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> > >;
extern template class itk::MeshToMeshFilter<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> >, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> > >;
extern template class itk::MeshToMeshFilter<itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshToMeshFilter<itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >, itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshToMeshFilter<itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> > >;
extern template class itk::MeshToMeshFilter<itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >, itk::SimplexMesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> > >;
#endif //__itkMeshToMeshFilterExplicit_h
