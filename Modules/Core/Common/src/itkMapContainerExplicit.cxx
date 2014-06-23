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
#include "itkMapContainer.h"

template class itk::MapContainer<unsigned long, itk::Point<float, 2u> >; //Instantiated 4 times
template class itk::MapContainer<unsigned long, float>; //Instantiated 32 times
template class itk::MapContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::MapContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>; //Instantiated 4 times
template class itk::MapContainer<unsigned long, itk::Point<float, 3u> >; //Instantiated 14 times
template class itk::MapContainer<unsigned long, itk::Point<double, 2u> >; //Instantiated 12 times
template class itk::MapContainer<unsigned long, int>; //Instantiated 8 times
template class itk::MapContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<2, double, float, unsigned long, unsigned long, unsigned long, itk::Point<double, 2u>, itk::MapContainer<unsigned long, itk::Point<double, 2u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>; //Instantiated 10 times
template class itk::MapContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<3, double, double, unsigned long, unsigned long, unsigned long, itk::Point<double, 3u>, itk::MapContainer<unsigned long, itk::Point<double, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>; //Instantiated 16 times
template class itk::MapContainer<unsigned long, itk::CellInterface<float, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::MapContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>; //Instantiated 8 times
template class itk::MapContainer<unsigned long, bool>; //Instantiated 96 times
template class itk::MapContainer<unsigned long, unsigned long>; //Instantiated 18 times
template class itk::MapContainer<unsigned long, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > >; //Instantiated 144 times
template class itk::MapContainer<unsigned long, double>; //Instantiated 100 times
template class itk::MapContainer<unsigned long, itk::Point<double, 3u> >; //Instantiated 20 times
