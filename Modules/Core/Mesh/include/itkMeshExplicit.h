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
#ifndef __itkMeshExplicit_h
#define __itkMeshExplicit_h
#include "itkSymmetricSecondRankTensor.h"
#include "itkVariableLengthVector.h"
//exclude QuadEdge
//exclude bio::Cell
extern template class itk::Mesh<double, 2u, itk::DefaultDynamicMeshTraits<double, 2u, 2u, double, float, double> >;
extern template class itk::Mesh<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> >;
extern template class itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> >;
extern template class itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::Mesh<unsigned short, 3u, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> >;
extern template class itk::Mesh<itk::Point<float, 2u>, 3u, itk::DefaultStaticMeshTraits<itk::Point<float, 2u>, 3u, 3u, float, float, itk::Point<float, 2u> > >;
extern template class itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> >;
extern template class itk::Mesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> >;
extern template class itk::Mesh<unsigned char, 2u, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> >;
extern template class itk::Mesh<unsigned char, 3u, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> >;
extern template class itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> >;
extern template class itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> >;
#endif //__itkMeshExplicit_h
