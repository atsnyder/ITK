if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_IMAGEFUNCTION_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_IMAGEFUNCTION_EXPLICIT_SOURCES "")
endif()

set(ITKImageFunction_SRC
${ITK_IMAGEFUNCTION_EXPLICIT_SOURCES}
)

add_library(ITKImageFunction ${ITKImageFunction_SRC})
target_link_libraries(ITKImageFunction  ${ITKTransform_LIBRARIES})
itk_module_target(ITKImageFunction)
