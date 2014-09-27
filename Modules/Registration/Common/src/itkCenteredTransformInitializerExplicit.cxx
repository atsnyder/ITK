#include "itkCenteredTransformInitializer.h"

template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 3u>, itk::Image<double, 3u>, itk::Image<double, 3u> >; //Instantiated 9 times
template class itk::CenteredTransformInitializer<itk::VersorRigid3DTransform<double>, itk::Image<short, 3u>, itk::Image<short, 3u> >; //Instantiated 9 times
template class itk::CenteredTransformInitializer<itk::CenteredRigid2DTransform<double>, itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u> >; //Instantiated 6 times
template class itk::CenteredTransformInitializer<itk::VersorRigid3DTransform<double>, itk::Image<float, 3u>, itk::Image<float, 3u> >; //Instantiated 6 times
template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 4u>, itk::Image<double, 4u>, itk::Image<double, 4u> >; //Instantiated 6 times
template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 2u>, itk::Image<double, 2u>, itk::Image<double, 2u> >; //Instantiated 9 times
template class itk::CenteredTransformInitializer<itk::AffineTransform<double, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 6 times
template class itk::CenteredTransformInitializer<itk::AffineTransform<float, 3u>, itk::Image<float, 3u>, itk::Image<float, 3u> >; //Instantiated 6 times
template class itk::CenteredTransformInitializer<itk::VersorRigid3DTransform<double>, itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u> >; //Instantiated 6 times
template class itk::CenteredTransformInitializer<itk::CenteredRigid2DTransform<double>, itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 6 times
template class itk::CenteredTransformInitializer<itk::AffineTransform<float, 2u>, itk::Image<float, 2u>, itk::Image<float, 2u> >; //Instantiated 6 times
