#ifndef __ExplicitInstantiation_itkConstNeighborhoodIterator_h__
#define __ExplicitInstantiation_itkConstNeighborhoodIterator_h__

#include "itkRGBPixel.h"
#include "itkRGBAPixel.h"
#include "itkVectorImage.h"
#include "itkConstantBoundaryCondition.h"
#include "itkDiffusionTensor3D.h"

extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<long, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 1u>, itk::Image<long, 1u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<bool, 4u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 4u>, itk::Image<bool, 4u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::RGBPixel<unsigned char>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::RGBPixel<unsigned char>, 2u>, itk::Image<itk::RGBPixel<unsigned char>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<long, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 3u>, itk::Image<long, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<bool, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 1u>, itk::Image<bool, 1u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<short, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::RGBPixel<float>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::RGBPixel<float>, 3u>, itk::Image<itk::RGBPixel<float>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<double, 2u>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 2u>, 3u>, itk::Image<itk::Vector<double, 2u>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned short, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<bool, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 3u>, itk::Image<bool, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<double, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<float, 2u>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 2u>, 3u>, itk::Image<itk::Vector<float, 2u>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::RGBAPixel<float>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::RGBAPixel<float>, 2u>, itk::Image<itk::RGBAPixel<float>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::VectorImage<int, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::VectorImage<int, 2u>, itk::VectorImage<int, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<double, 2u>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::RGBPixel<float>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::RGBPixel<float>, 2u>, itk::Image<itk::RGBPixel<float>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::FixedArray<unsigned char, 1u>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::FixedArray<unsigned char, 1u>, 2u>, itk::Image<itk::FixedArray<unsigned char, 1u>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<char, 2u>, itk::Image<char, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<double, 3u>, 4u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned int, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned char, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 1u>, itk::Image<unsigned char, 1u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned long, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<int, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<int, 4u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 4u>, itk::Image<int, 4u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<signed char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<bool, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<float, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 1u>, itk::Image<float, 1u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned long, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned char, 2u>, itk::ConstantBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<float, 3u>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 2u>, itk::Image<itk::Vector<float, 3u>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<short, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<int, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<float, 2u>, itk::ConstantBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<float, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<float, 3u>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::VectorImage<float, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::VectorImage<float, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::VectorImage<float, 2u>, itk::VectorImage<float, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<signed char, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned char, 3u>, itk::ConstantBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::RGBAPixel<float>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::RGBAPixel<float>, 3u>, itk::Image<itk::RGBAPixel<float>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<int, 1u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 1u>, itk::Image<int, 1u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned char, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<int, 2u>, itk::ConstantBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<unsigned short, 1u>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<unsigned short, 1u>, 3u>, itk::Image<itk::Vector<unsigned short, 1u>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned char, 4u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 4u>, itk::Image<unsigned char, 4u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::CovariantVector<float, 2u>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::CovariantVector<float, 2u>, 2u>, itk::Image<itk::CovariantVector<float, 2u>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::DiffusionTensor3D<float>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::DiffusionTensor3D<float>, 3u>, itk::Image<itk::DiffusionTensor3D<float>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::DiffusionTensor3D<float>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::DiffusionTensor3D<float>, 2u>, itk::Image<itk::DiffusionTensor3D<float>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<double, 6u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 6u>, itk::Image<double, 6u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<float, 4u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 4u>, itk::Image<float, 4u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<float, 2u>, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned int, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<long, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 2u>, itk::Image<long, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<double, 3u>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<double, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::FixedArray<unsigned char, 4u>, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::FixedArray<unsigned char, 4u>, 3u>, itk::Image<itk::FixedArray<unsigned char, 4u>, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Index<4u>, 4u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Index<4u>, 4u>, itk::Image<itk::Index<4u>, 4u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<float, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<unsigned short, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::VectorImage<unsigned char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::VectorImage<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u> > >;
extern template class itk::ConstNeighborhoodIterator<itk::Image<itk::Vector<float, 3u>, 4u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 4u>, itk::Image<itk::Vector<float, 3u>, 4u> > >;
#endif //__ExplicitInstantiation_itkConstNeighborhoodIterator_h__
