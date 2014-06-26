project(ITK-Convolution)

if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  set(ITKConvolution_LIBRARIES ITKConvolution)
endif()

itk_module_impl()
