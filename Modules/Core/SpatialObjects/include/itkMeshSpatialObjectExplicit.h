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
#ifndef __itkMeshSpatialObjectExplicit_h
#define __itkMeshSpatialObjectExplicit_h
extern template class itk::MeshSpatialObject<itk::Mesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> > >;
extern template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 2u, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> > >;
extern template class itk::MeshSpatialObject<itk::Mesh<unsigned char, 3u, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> > >;
extern template class itk::MeshSpatialObject<itk::Mesh<unsigned short, 3u, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> > >;
#endif //__itkMeshSpatialObjectExplicit_h
