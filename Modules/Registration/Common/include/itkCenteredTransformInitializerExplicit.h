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
#ifndef __itkCenteredTransformInitializerExplicit_h
#define __itkCenteredTransformInitializerExplicit_h
#include "itkVersorRigid3DTransform.h"
#include "itkCenteredRigid2DTransform.h"

extern template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::CenteredTransformInitializer<itk::VersorRigid3DTransform<double>, itk::Image<short, 3u>, itk::Image<short, 3u> >;
extern template class itk::CenteredTransformInitializer<itk::CenteredRigid2DTransform<double>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::CenteredTransformInitializer<itk::VersorRigid3DTransform<double>, itk::Image<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 4u>, itk::Image<double, 4u>, itk::Image<double, 4u> >;
extern template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::CenteredTransformInitializer<itk::AffineTransform<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> >;
extern template class itk::CenteredTransformInitializer<itk::VersorRigid3DTransform<double>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::CenteredTransformInitializer<itk::CenteredRigid2DTransform<double>, itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::CenteredTransformInitializer<itk::AffineTransform<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> >;
#endif //__itkCenteredTransformInitializerExplicit_h
