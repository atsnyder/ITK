#ifndef __ExplicitInstantiation_itkVectorContainer_h__
#define __ExplicitInstantiation_itkVectorContainer_h__
#include "itkCellInterface.h"
#include "itkPoint.h"
#include "itkContinuousIndex.h"
#include "itkMatrix.h"
#include "itkVariableSizeMatrix.h"
#include <set>
#include <algorithm>
//exclude LevelSetNode
//exclude NodePair
//exclude fem
//exclude ::Statistics
//subs std::__1:: std::
extern template class itk::VectorContainer<unsigned long, float>;
extern template class itk::VectorContainer<unsigned long, itk::Vector<double, 3u> >;
extern template class itk::VectorContainer<unsigned long, itk::Point<double, 3u> >;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<float, itk::CellTraitsInfo<2, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 2u>, itk::VectorContainer<unsigned long, itk::Point<float, 2u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned long, itk::Vector<float, 1u> >;
extern template class itk::VectorContainer<unsigned long, itk::CovariantVector<float, 3u> >;
extern template class itk::VectorContainer<unsigned char, double>;
extern template class itk::VectorContainer<unsigned long, unsigned int>;
extern template class itk::VectorContainer<unsigned long, itk::Vector<double, 1u> >;
extern template class itk::VectorContainer<unsigned long, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > >;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<float, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned short, itk::VariableSizeMatrix<double>*>;
extern template class itk::VectorContainer<unsigned int, double>;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned long, itk::Vector<float, 3u> >;
extern template class itk::VectorContainer<unsigned long, itk::Point<double, 4u> >;
extern template class itk::VectorContainer<unsigned int, float>;
extern template class itk::VectorContainer<unsigned long, unsigned long>;
extern template class itk::VectorContainer<unsigned long, itk::Vector<float, 2u> >;
extern template class itk::VectorContainer<unsigned long, itk::Point<float, 1u> >;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<unsigned short, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned int, itk::Index<2u> >;
extern template class itk::VectorContainer<unsigned char, short>;
extern template class itk::VectorContainer<unsigned long, double>;
extern template class itk::VectorContainer<unsigned long, itk::Point<double, 2u> >;
extern template class itk::VectorContainer<unsigned long, itk::Point<float, 3u> >;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<double, itk::CellTraitsInfo<3, double, double, unsigned long, unsigned long, unsigned long, itk::Point<double, 3u>, itk::VectorContainer<unsigned long, itk::Point<double, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned long, unsigned short>;
extern template class itk::VectorContainer<unsigned short, itk::Vector<double, 1u>*>;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<unsigned char, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned long, itk::Vector<double, 2u> >;
extern template class itk::VectorContainer<unsigned int, itk::Index<3u> >;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<int, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<itk::Point<float, 2u>, itk::CellTraitsInfo<3, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 3u>, itk::VectorContainer<unsigned long, itk::Point<float, 3u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
extern template class itk::VectorContainer<unsigned long, int>;
extern template class itk::VectorContainer<unsigned int, itk::ContinuousIndex<double, 2u> >;
extern template class itk::VectorContainer<unsigned int, itk::Vector<double, 2u> >;
extern template class itk::VectorContainer<unsigned long, itk::Point<float, 2u> >;
extern template class itk::VectorContainer<unsigned char, itk::Offset<2u> >;
extern template class itk::VectorContainer<unsigned int, vnl_vector_fixed<double, 3u> >;
extern template class itk::VectorContainer<unsigned long, unsigned char>;
extern template class itk::VectorContainer<unsigned long, itk::Matrix<double, 3u, 3u> >;
extern template class itk::VectorContainer<unsigned long, itk::CellInterface<unsigned char, itk::CellTraitsInfo<2, float, float, unsigned long, unsigned long, unsigned long, itk::Point<float, 2u>, itk::VectorContainer<unsigned long, itk::Point<float, 2u> >, std::set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long> > > >*>;
#endif //__ExplicitInstantiation_itkVectorContainer_h__