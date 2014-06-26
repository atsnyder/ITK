project(ITK-Deconvolution)

if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  set(ITKDeconvolution_LIBRARIES ITKDeconvolution)
endif()

itk_module_impl()
