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
#ifndef __itkTransformParametersAdaptorExplicit_h
#define __itkTransformParametersAdaptorExplicit_h
//exclude ANTSAffine3DTransform
extern template class itk::TransformParametersAdaptor<itk::DisplacementFieldTransform<double, 2u> >;
extern template class itk::TransformParametersAdaptor<itk::AffineTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::DisplacementFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::Euler2DTransform<double> >;
extern template class itk::TransformParametersAdaptor<itk::BSplineExponentialDiffeomorphicTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::TimeVaryingBSplineVelocityFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::BSplineTransform<double, 3u, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::GaussianSmoothingOnUpdateTimeVaryingVelocityFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::Euler3DTransform<double> >;
extern template class itk::TransformParametersAdaptor<itk::AffineTransform<double, 2u> >;
extern template class itk::TransformParametersAdaptor<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 2u> >;
extern template class itk::TransformParametersAdaptor<itk::GaussianExponentialDiffeomorphicTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::Similarity3DTransform<double> >;
extern template class itk::TransformParametersAdaptor<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::BSplineSmoothingOnUpdateDisplacementFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptor<itk::TranslationTransform<double, 3u> >;
#endif //__itkTransformParametersAdaptorExplicit_h
