#ifndef __ExplicitInstantiation_itkDataObjectDecorator_h__
#define __ExplicitInstantiation_itkDataObjectDecorator_h__
#include "itkVectorContainer.h"
//exclude GaussianSmoothingOnUpdateDisplacementFieldTransform
//exclude Transform
//exclude BSplineTransform
//exclude AffineTransform
//exclude DisplacementFieldTransform
//exclude FunctionBase
extern template class itk::DataObjectDecorator<itk::VectorContainer<unsigned char, double> >;
#endif //__ExplicitInstantiation_itkDataObjectDecorator_h__