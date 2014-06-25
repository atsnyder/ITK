set(DOCUMENTATION "This module contains filters that perform pixel-wise
operations on the intensities of images. In particular you will find here
filters that compute trigonometric operations on pixel values, intensity
rescaling, exponentials, conversions between complex and reals, and filters
that combine multiple images into images of multiple components, as well as
filters that compute single scalar images from images of multiple components.")

itk_module(ITKImageIntensity
  DEPENDS
    ITKImageFilterBase
    ITKImageAdaptors
    ITKImageStatistics
    ITKImageGrid
    ITKPath
  TEST_DEPENDS
    ITKTestKernel
    ITKSpatialObjects
    ITKDistanceMap
    ITKBinaryMathematicalMorphology
  DESCRIPTION
    "${DOCUMENTATION}"
)

# Extra dependency of ITKSpatialObjects is introduced by itkPolylineMaskImageFilterTest.
# Extra dependency of ITKSpatialObjects is introduced by itkModulusImageFilterTest.
