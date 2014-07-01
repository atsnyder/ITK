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
#ifndef __itkMetaImageConverterExplicit_h
#define __itkMetaImageConverterExplicit_h
#include "itkImageMaskSpatialObject.h"
extern template class itk::MetaImageConverter<3u, unsigned char, itk::ImageSpatialObject<3u, unsigned char> >;
extern template class itk::MetaImageConverter<2u, unsigned char, itk::ImageMaskSpatialObject<2u> >;
extern template class itk::MetaImageConverter<3u, unsigned char, itk::ImageMaskSpatialObject<3u> >;
extern template class itk::MetaImageConverter<3u, unsigned short, itk::ImageSpatialObject<3u, unsigned short> >;
extern template class itk::MetaImageConverter<2u, unsigned char, itk::ImageSpatialObject<2u, unsigned char> >;
extern template class itk::MetaImageConverter<3u, float, itk::ImageSpatialObject<3u, float> >;
#endif //__itkMetaImageConverterExplicit_h
