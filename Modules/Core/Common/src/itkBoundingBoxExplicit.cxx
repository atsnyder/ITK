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
#include "itkBoundingBox.h"

template class itk::BoundingBox<unsigned long, 3, double, itk::VectorContainer<unsigned long, itk::Point<double, 3u> > >; //Instantiated 126 times
template class itk::BoundingBox<unsigned long, 4, double, itk::VectorContainer<unsigned long, itk::Point<double, 4u> > >; //Instantiated 4 times
template class itk::BoundingBox<unsigned long, 3, float, itk::VectorContainer<unsigned long, itk::Point<float, 3u> > >; //Instantiated 120 times
template class itk::BoundingBox<unsigned long, 1, float, itk::VectorContainer<unsigned long, itk::Point<float, 1u> > >; //Instantiated 84 times
template class itk::BoundingBox<unsigned long, 3, double, itk::MapContainer<unsigned long, itk::Point<double, 3u> > >; //Instantiated 16 times
template class itk::BoundingBox<unsigned long, 2, double, itk::VectorContainer<unsigned long, itk::Point<double, 2u> > >; //Instantiated 78 times
template class itk::BoundingBox<unsigned int, 2, float, itk::VectorContainer<unsigned long, itk::Point<float, 2u> > >; //Instantiated 4 times
template class itk::BoundingBox<unsigned long, 2, float, itk::VectorContainer<unsigned long, itk::Point<float, 2u> > >; //Instantiated 70 times
template class itk::BoundingBox<unsigned long, 3, float, itk::MapContainer<unsigned long, itk::Point<float, 3u> > >; //Instantiated 12 times
template class itk::BoundingBox<unsigned long, 2, double, itk::MapContainer<unsigned long, itk::Point<double, 2u> > >; //Instantiated 12 times
