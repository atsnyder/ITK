project(ITKDisplacementField)

if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  set(ITKDisplacementField_LIBRARIES ITKDisplacementField)
endif()

itk_module_impl()
