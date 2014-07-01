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
#ifndef __itkImageRegistrationMethodv4Explicit_h
#define __itkImageRegistrationMethodv4Explicit_h
//exclude ANTSAffine3DTransform
extern template class itk::ImageRegistrationMethodv4<itk::Image<float, 2u>, itk::Image<float, 2u>, itk::Transform<double, 2u, 2u>, itk::Image<float, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::BSplineSmoothingOnUpdateDisplacementFieldTransform<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::GaussianExponentialDiffeomorphicTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::TimeVaryingBSplineVelocityFieldTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::DisplacementFieldTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::AffineTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::DisplacementFieldTransform<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::Euler2DTransform<double>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::BSplineTransform<double, 2u, 3u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::BSplineExponentialDiffeomorphicTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::GaussianSmoothingOnUpdateTimeVaryingVelocityFieldTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::BSplineExponentialDiffeomorphicTransform<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::GaussianExponentialDiffeomorphicTransform<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::GaussianSmoothingOnUpdateTimeVaryingVelocityFieldTransform<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::BSplineTransform<double, 3u, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Euler3DTransform<double>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::Similarity3DTransform<double>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::TranslationTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<float, 3u>, itk::Image<float, 3u>, itk::Transform<double, 3u, 3u>, itk::Image<float, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::AffineTransform<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 3u>, itk::Image<double, 3u>, itk::BSplineSmoothingOnUpdateDisplacementFieldTransform<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ImageRegistrationMethodv4<itk::Image<double, 2u>, itk::Image<double, 2u>, itk::TimeVaryingBSplineVelocityFieldTransform<double, 2u>, itk::Image<double, 2u> >;
#endif //__itkImageRegistrationMethodv4Explicit_h
