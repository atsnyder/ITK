set(DOCUMENTATION "This module contains classes to perform image segmentation by
a deformable mesh that experiences a variety of forces.")

itk_module(ITKDeformableMesh
  DEPENDS
    ITKMesh
    ITKImageIntensity
    ITKThresholding
    ITKImageFeature
    ITKAnisotropicSmoothing
  TEST_DEPENDS
    ITKImageGradient
    ITKTestKernel
  DESCRIPTION
    "${DOCUMENTATION}"
)
