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
#ifndef __itkCellInterfaceExplicit_h
#define __itkCellInterfaceExplicit_h
#include "itkPoint.h"
#include "itkMapContainer.h"
#include "itkVectorContainer.h"
#include <set>
#include <algorithm>
//exclude QuadEdgeMesh
//subs std:: std::
extern template class itk::CellInterface<double, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::MapContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<float, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::MapContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<itk::Point<float, 2u>, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<float, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<unsigned short, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<double, itk::CellTraitsInfo<2, double, float, unsigned long, unsigned long, unsigned long, itk::Point<double, 2u>, itk::MapContainer<unsigned long, itk::Point<double, 2u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<double, itk::CellTraitsInfo<3, double, double, unsigned long, unsigned long, unsigned long, itk::Point<double, 3u>, itk::MapContainer<unsigned long, itk::Point<double, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<double, itk::CellTraitsInfo<3, double, double, unsigned long, unsigned long, unsigned long, itk::Point<double, 3u>, itk::VectorContainer<unsigned long, itk::Point<double, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<unsigned char, itk::CellTraitsInfo<2, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 2u>, itk::VectorContainer<unsigned long, itk::Point<float, 2u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<int, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<double, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<unsigned char, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
extern template class itk::CellInterface<float, itk::CellTraitsInfo<2, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 2u>, itk::VectorContainer<unsigned long, itk::Point<float, 2u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >;
#endif //__itkCellInterfaceExplicit_h
