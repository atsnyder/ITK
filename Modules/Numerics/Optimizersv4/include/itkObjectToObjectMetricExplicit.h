#ifndef __ExplicitInstantiation_itkObjectToObjectMetric_h__
#define __ExplicitInstantiation_itkObjectToObjectMetric_h__
extern template class itk::ObjectToObjectMetric<3u, 3u, itk::Image<itk::Vector<double, 3u>, 3u>, double>;
extern template class itk::ObjectToObjectMetric<2u, 2u, itk::Image<float, 2u>, double>;
extern template class itk::ObjectToObjectMetric<3u, 3u, itk::Image<itk::Vector<double, 2u>, 3u>, double>;
extern template class itk::ObjectToObjectMetric<2u, 2u, itk::Image<itk::Vector<float, 2u>, 2u>, double>;
extern template class itk::ObjectToObjectMetric<3u, 3u, itk::Image<double, 3u>, double>;
extern template class itk::ObjectToObjectMetric<2u, 2u, itk::Image<double, 2u>, double>;
extern template class itk::ObjectToObjectMetric<3u, 3u, itk::Image<float, 3u>, double>;
#endif //__ExplicitInstantiation_itkObjectToObjectMetric_h__