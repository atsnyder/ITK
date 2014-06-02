#ifndef __ExplicitInstantiation_itkImageLinearIteratorWithIndex_h__
#define __ExplicitInstantiation_itkImageLinearIteratorWithIndex_h__
//exclude VectorImage
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 3u>, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<short, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned char, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned short, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 1u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::RGBPixel<unsigned char>, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned short, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<itk::Vector<float, 2u>, 2u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 1u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<double, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<unsigned char, 3u> >;
extern template class itk::ImageLinearIteratorWithIndex<itk::Image<float, 3u> >;
#endif //__ExplicitInstantiation_itkImageLinearIteratorWithIndex_h__