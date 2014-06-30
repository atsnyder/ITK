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
#ifndef __itkEdgeDecimationQuadEdgeMeshFilterExplicit_h
#define __itkEdgeDecimationQuadEdgeMeshFilterExplicit_h
#include "itkQuadEdgeMeshDecimationCriteria.h"
extern template class itk::EdgeDecimationQuadEdgeMeshFilter<itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshTraits<double, 3u, bool, bool, float, float> >, itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshTraits<double, 3u, bool, bool, float, float> >, itk::NumberOfFacesCriterion<itk::QuadEdgeMesh<double, 3u, itk::QuadEdgeMeshTraits<double, 3u, bool, bool, float, float> >, unsigned long, double, itk::MinPriorityQueueElementWrapper<itk::GeometricalQuadEdge<unsigned long, unsigned long, bool, bool, true>*, std::pair<bool, double>, unsigned long> > >;
#endif //__itkEdgeDecimationQuadEdgeMeshFilterExplicit_h
