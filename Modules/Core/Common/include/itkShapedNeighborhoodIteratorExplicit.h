#ifndef __ExplicitInstantiation_itkShapedNeighborhoodIterator_h__
#define __ExplicitInstantiation_itkShapedNeighborhoodIterator_h__
extern template class itk::ShapedNeighborhoodIterator<itk::Image<short, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<short, 2u>, itk::Image<short, 2u> > >;
extern template class itk::ShapedNeighborhoodIterator<itk::Image<unsigned char, 3u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> > >;
extern template class itk::ShapedNeighborhoodIterator<itk::Image<float, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<float, 2u>, itk::Image<float, 2u> > >;
extern template class itk::ShapedNeighborhoodIterator<itk::Image<unsigned char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> > >;
extern template class itk::ShapedNeighborhoodIterator<itk::Image<bool, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<bool, 2u>, itk::Image<bool, 2u> > >;
extern template class itk::ShapedNeighborhoodIterator<itk::Image<signed char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<signed char, 2u>, itk::Image<signed char, 2u> > >;
extern template class itk::ShapedNeighborhoodIterator<itk::Image<char, 2u>, itk::ZeroFluxNeumannBoundaryCondition<itk::Image<char, 2u>, itk::Image<char, 2u> > >;
#endif //__ExplicitInstantiation_itkShapedNeighborhoodIterator_h__