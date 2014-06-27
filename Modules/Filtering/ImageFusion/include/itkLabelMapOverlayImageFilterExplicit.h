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
#ifndef __itkLabelMapOverlayImageFilterExplicit_h
#define __itkLabelMapOverlayImageFilterExplicit_h
#include "itkLabelMap.h"
#include "itkLabelObject.h"
extern template class itk::LabelMapOverlayImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u> >;
extern template class itk::LabelMapOverlayImageFilter<itk::LabelMap<itk::LabelObject<unsigned char, 2u> >, itk::Image<unsigned char, 2u>, itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
#endif //__itkLabelMapOverlayImageFilterExplicit_h
