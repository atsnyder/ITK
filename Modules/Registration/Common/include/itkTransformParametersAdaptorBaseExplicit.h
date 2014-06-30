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
#ifndef __itkTransformParametersAdaptorBaseExplicit_h
#define __itkTransformParametersAdaptorBaseExplicit_h
//exclude ANTSAffine3DTransform
#include "itkDisplacementFieldTransform.h"
#include "itkBSplineExponentialDiffeomorphicTransform.h"
#include "itkGaussianExponentialDiffeomorphicTransform.h"
#include "itkGaussianSmoothingOnUpdateTimeVaryingVelocityFieldTransform.h"
#include "itkEuler3DTransform.h"
#include "itkEuler2DTransform.h"
#include "itkGaussianSmoothingOnUpdateDisplacementFieldTransform.h"
#include "itkAffineTransform.h"
#include "itkTranslationTransform.h"
#include "itkSimilarity3DTransform.h"
#include "itkTimeVaryingBSplineVelocityFieldTransform.h"
#include "itkBSplineTransform.h"
#include "itkBSplineSmoothingOnUpdateDisplacementFieldTransform.h"

extern template class itk::TransformParametersAdaptorBase<itk::DisplacementFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::DisplacementFieldTransform<double, 2u> >;
extern template class itk::TransformParametersAdaptorBase<itk::Transform<double, 2u, 2u> >;
extern template class itk::TransformParametersAdaptorBase<itk::BSplineExponentialDiffeomorphicTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::GaussianExponentialDiffeomorphicTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::GaussianSmoothingOnUpdateTimeVaryingVelocityFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::Euler3DTransform<double> >;
extern template class itk::TransformParametersAdaptorBase<itk::Euler2DTransform<double> >;
extern template class itk::TransformParametersAdaptorBase<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 2u> >;
extern template class itk::TransformParametersAdaptorBase<itk::TranslationTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::AffineTransform<double, 2u> >;
extern template class itk::TransformParametersAdaptorBase<itk::TimeVaryingBSplineVelocityFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::Similarity3DTransform<double> >;
extern template class itk::TransformParametersAdaptorBase<itk::Transform<double, 3u, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::AffineTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::GaussianSmoothingOnUpdateDisplacementFieldTransform<double, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::BSplineTransform<double, 3u, 3u> >;
extern template class itk::TransformParametersAdaptorBase<itk::BSplineSmoothingOnUpdateDisplacementFieldTransform<double, 3u> >;
#endif //__itkTransformParametersAdaptorBaseExplicit_h
