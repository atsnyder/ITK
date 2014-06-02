#ifndef __ExplicitInstantiation_itkZeroFluxNeumannBoundaryCondition_h__
#define __ExplicitInstantiation_itkZeroFluxNeumannBoundaryCondition_h__
#include "itkRGBAPixel.h"
#include "itkRGBPixel.h"
#include "itkImage.h"
#include "itkVectorImage.h"
//exclude LabelObjectLine
//exclude NormalBandNode
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<unsigned short, 1u>, 3u>, itk::Image<itk::Vector<unsigned short, 1u>, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 4u>, itk::Image<float, 4u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 3u>, itk::Image<int, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 1u>, itk::Image<long, 1u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 1u>, itk::Image<bool, 1u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 2u>, 3u>, itk::Image<itk::Vector<double, 2u>, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 3u>, itk::Image<signed char, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 3u>, 4u>, itk::Image<itk::Vector<double, 3u>, 4u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 2u>, 3u>, itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::FixedArray<unsigned char, 4u>, 3u>, itk::Image<itk::FixedArray<unsigned char, 4u>, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::RGBPixel<unsigned char>, 2u>, itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 3u>, itk::Image<double, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 2u>, itk::Image<itk::Vector<float, 3u>, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<int, 2u>, itk::Image<int, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 1u>, itk::Image<unsigned char, 1u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 6u>, itk::Image<double, 6u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 3u>, itk::Image<short, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 3u>, 3u>, itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Index<4u>, 4u>, itk::Image<itk::Index<4u>, 4u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<char, 2u>, itk::Image<char, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::CovariantVector<float, 2u>, 2u>, itk::Image<itk::CovariantVector<float, 2u>, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<double, 2u>, itk::Image<double, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::VectorImage<int, 2u>, itk::VectorImage<int, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<long, 2u>, itk::Image<long, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::RGBPixel<float>, 2u>, itk::Image<itk::RGBPixel<float>, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<itk::Vector<float, 2u>, 2u>, itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 3u>, itk::Image<float, 3u> >;
#endif //__ExplicitInstantiation_itkZeroFluxNeumannBoundaryCondition_h__