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
#ifndef __itkThinPlateR2LogRSplineKernelTransform_h
#define __itkThinPlateR2LogRSplineKernelTransform_h

#include "itkKernelTransform.h"

namespace itk
{
/** \class ThinPlateR2LogRSplineKernelTransform
 * This class defines the thin plate spline (TPS) transformation.
 * It is implemented in as straightforward a manner as possible from
 * the IEEE TMI paper by Davis, Khotanzad, Flamig, and Harms,
 * Vol. 16 No. 3 June 1997.
 *
 * The kernel used in this variant of TPS is \f$ R^2 log(R) \f$
 *
 * \ingroup ITKTransform
 */
template< typename TScalar,         // Data type for scalars (float or double)
          unsigned int NDimensions = 3 >
// Number of dimensions
class ThinPlateR2LogRSplineKernelTransform:
  public KernelTransform< TScalar, NDimensions >
{
public:
  /** Standard class typedefs. */
  typedef ThinPlateR2LogRSplineKernelTransform    Self;
  typedef KernelTransform< TScalar, NDimensions > Superclass;
  typedef SmartPointer< Self >                    Pointer;
  typedef SmartPointer< const Self >              ConstPointer;

  /** New macro for creation of through a Smart Pointer */
  itkNewMacro(Self);

  /** Run-time type information (and related methods). */
  itkTypeMacro(ThinPlateR2LogRSplineKernelTransform, KernelTransform);

  /** Scalar type. */
  typedef typename Superclass::ScalarType ScalarType;

  /** Parameters type. */
  typedef typename Superclass::ParametersType ParametersType;

  /** Jacobian Type */
  typedef typename Superclass::JacobianType JacobianType;

  /** Dimension of the domain space. */
  itkStaticConstMacro(SpaceDimension, unsigned int, Superclass::SpaceDimension);

  typedef typename Superclass::InputPointType            InputPointType;
  typedef typename Superclass::OutputPointType           OutputPointType;
  typedef typename Superclass::InputVectorType           InputVectorType;
  typedef typename Superclass::OutputVectorType          OutputVectorType;
  typedef typename Superclass::InputCovariantVectorType  InputCovariantVectorType;
  typedef typename Superclass::OutputCovariantVectorType OutputCovariantVectorType;
  typedef typename Superclass::PointsIterator            PointsIterator;

protected:
  ThinPlateR2LogRSplineKernelTransform() {}
  virtual ~ThinPlateR2LogRSplineKernelTransform() {}

  typedef typename Superclass::GMatrixType GMatrixType;
  /** Compute G(x)
   * For the thin plate spline, this is:
   * G(x) = r(x)*I
   * \f$ G(x) = r(x)^2 log(r(x) ) *I \f$
   * where
   * r(x) = Euclidean norm = sqrt[x1^2 + x2^2 + x3^2]
   * \f[ r(x) = \sqrt{ x_1^2 + x_2^2 + x_3^2 }  \f]
   * I = identity matrix. */
  virtual void ComputeG(const InputVectorType & landmarkVector, GMatrixType & gmatrix) const;

  /** Compute the contribution of the landmarks weighted by the kernel funcion
      to the global deformation of the space  */
  virtual void ComputeDeformationContribution(const InputPointType & inputPoint,
                                              OutputPointType & result) const;

private:
  ThinPlateR2LogRSplineKernelTransform(const Self &); //purposely not
                                                      // implemented
  void operator=(const Self &);                       //purposely not
                                                      // implemented
};
} // namespace itk

#ifndef ITK_MANUAL_INSTANTIATION
#include "itkThinPlateR2LogRSplineKernelTransform.hxx"
#endif

#ifdef ITK_COMMON_EXPLICIT_INSTANTIATION
#include "itkThinPlateR2LogRSplineKernelTransformExplicit.h"
#endif

#endif // __itkThinPlateR2LogRSplineKernelTransform_h
