#ifndef __ExplicitInstantiation_itkMesh_h__
#define __ExplicitInstantiation_itkMesh_h__
#include "itkSymmetricSecondRankTensor.h"
#include "itkVariableLengthVector.h"
//exclude QuadEdge
//exclude bio::Cell
extern template class itk::Mesh<double, 2u, itk::DefaultDynamicMeshTraits<double, 2u, 2u, double, float, double> >;
extern template class itk::Mesh<itk::CovariantVector<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::CovariantVector<float, 3u>, 3u, 3u, float, float, itk::CovariantVector<float, 3u> > >;
extern template class itk::Mesh<float, 2u, itk::DefaultStaticMeshTraits<float, 2u, 2u, float, float, float> >;
extern template class itk::Mesh<int, 2u, itk::DefaultDynamicMeshTraits<int, 2u, 2u, float, float, int> >;
extern template class itk::Mesh<int, 3u, itk::DefaultStaticMeshTraits<int, 3u, 3u, float, float, int> >;
extern template class itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::Mesh<unsigned short, 3u, itk::DefaultStaticMeshTraits<unsigned short, 3u, 3u, float, float, unsigned short> >;
extern template class itk::Mesh<itk::Point<float, 2u>, 3u, itk::DefaultStaticMeshTraits<itk::Point<float, 2u>, 3u, 3u, float, float, itk::Point<float, 2u> > >;
extern template class itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, float, float, double> >;
extern template class itk::Mesh<float, 3u, itk::DefaultDynamicMeshTraits<float, 3u, 3u, float, float, float> >;
extern template class itk::Mesh<unsigned char, 2u, itk::DefaultStaticMeshTraits<unsigned char, 2u, 2u, float, float, unsigned char> >;
extern template class itk::Mesh<itk::Point<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Point<float, 2u>, 2u, 2u, float, float, itk::Point<float, 2u> > >;
extern template class itk::Mesh<itk::SymmetricSecondRankTensor<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::SymmetricSecondRankTensor<float, 2u>, 2u, 2u, float, float, itk::SymmetricSecondRankTensor<float, 2u> > >;
extern template class itk::Mesh<double, 3u, itk::DefaultStaticMeshTraits<double, 3u, 3u, double, double, double> >;
extern template class itk::Mesh<unsigned char, 3u, itk::DefaultStaticMeshTraits<unsigned char, 3u, 3u, float, float, unsigned char> >;
extern template class itk::Mesh<itk::Vector<float, 2u>, 2u, itk::DefaultStaticMeshTraits<itk::Vector<float, 2u>, 2u, 2u, float, float, itk::Vector<float, 2u> > >;
extern template class itk::Mesh<itk::Vector<double, 4u>, 3u, itk::DefaultStaticMeshTraits<itk::Vector<double, 4u>, 3u, 2u, double, double, itk::Matrix<double, 4u, 3u> > >;
extern template class itk::Mesh<double, 3u, itk::DefaultDynamicMeshTraits<double, 3u, 3u, float, float, double> >;
extern template class itk::Mesh<itk::VariableLengthVector<float>, 3u, itk::DefaultStaticMeshTraits<itk::VariableLengthVector<float>, 3u, 3u, float, float, itk::VariableLengthVector<float> > >;
extern template class itk::Mesh<itk::SymmetricSecondRankTensor<float, 3u>, 3u, itk::DefaultStaticMeshTraits<itk::SymmetricSecondRankTensor<float, 3u>, 3u, 3u, float, float, itk::SymmetricSecondRankTensor<float, 3u> > >;
extern template class itk::Mesh<float, 3u, itk::DefaultStaticMeshTraits<float, 3u, 3u, float, float, float> >;
extern template class itk::Mesh<itk::Point<float, 3u>, 2u, itk::DefaultStaticMeshTraits<itk::Point<float, 3u>, 2u, 2u, float, float, itk::Point<float, 3u> > >;
#endif //__ExplicitInstantiation_itkMesh_h__