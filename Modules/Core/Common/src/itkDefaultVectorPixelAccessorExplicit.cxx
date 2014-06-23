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
#include "itkDefaultVectorPixelAccessor.h"

template class itk::DefaultVectorPixelAccessor<unsigned short>; //Instantiated 6 times
template class itk::DefaultVectorPixelAccessor<unsigned char>; //Instantiated 20 times
template class itk::DefaultVectorPixelAccessor<short>; //Instantiated 4 times
template class itk::DefaultVectorPixelAccessor<double>; //Instantiated 10 times
template class itk::DefaultVectorPixelAccessor<float>; //Instantiated 38 times
