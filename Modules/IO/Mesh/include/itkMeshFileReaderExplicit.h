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
#ifndef __itkMeshFileReaderExplicit_h
#define __itkMeshFileReaderExplicit_h
//exclude QuadEdgeMesh
extern template class itk::MeshFileReader<itk::Mesh<itk::VariableLengthVector<float>, 3u, itk::DefaultStaticMeshTraits<itk::VariableLengthVector<float>, 3u, 3u, float, float, itk::VariableLengthVector<float> > >, itk::MeshConvertPixelTraits<itk::VariableLengthVector<float> >, itk::MeshConvertPixelTraits<itk::VariableLengthVector<float> > >;
extern template class itk::MeshFileReader<itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> >, itk::MeshConvertPixelTraits<float>, itk::MeshConvertPixelTraits<float> >;
extern template class itk::MeshFileReader<itk::Mesh<itk::CovariantVector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::CovariantVector<float, 3u>, 3u, 3u, float, float, itk::CovariantVector<float, 3u> > >, itk::MeshConvertPixelTraits<itk::CovariantVector<float, 3u> >, itk::MeshConvertPixelTraits<itk::CovariantVector<float, 3u> > >;
#endif //__itkMeshFileReaderExplicit_h
