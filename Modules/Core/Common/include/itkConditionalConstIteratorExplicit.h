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
#ifndef __itkConditionalConstIteratorExplicit_h
#define __itkConditionalConstIteratorExplicit_h
#include "itkImage.h"
extern template class itk::ConditionalConstIterator<itk::Image<bool, 1u> >;
extern template class itk::ConditionalConstIterator<itk::Image<bool, 3u> >;
extern template class itk::ConditionalConstIterator<itk::Image<unsigned char, 2u> >;
extern template class itk::ConditionalConstIterator<itk::Image<float, 2u> >;
extern template class itk::ConditionalConstIterator<itk::Image<bool, 2u> >;
extern template class itk::ConditionalConstIterator<itk::Image<unsigned char, 3u> >;
extern template class itk::ConditionalConstIterator<itk::Image<bool, 4u> >;
extern template class itk::ConditionalConstIterator<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
#endif //__itkConditionalConstIteratorExplicit_h
