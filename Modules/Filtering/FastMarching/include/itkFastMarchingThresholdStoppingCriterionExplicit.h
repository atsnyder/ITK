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
#ifndef __itkFastMarchingThresholdStoppingCriterionExplicit_h
#define __itkFastMarchingThresholdStoppingCriterionExplicit_h
extern template class itk::FastMarchingThresholdStoppingCriterion<itk::Image<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::FastMarchingThresholdStoppingCriterion<itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::FastMarchingThresholdStoppingCriterion<itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshExtendedTraits<float, 3u, 2u, double, double, float, bool, bool> >, itk::QuadEdgeMesh<float, 3u, itk::QuadEdgeMeshExtendedTraits<float, 3u, 2u, double, double, float, bool, bool> > >;
#endif //__itkFastMarchingThresholdStoppingCriterionExplicit_h
