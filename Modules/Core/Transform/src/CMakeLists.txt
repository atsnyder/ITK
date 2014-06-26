if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_TRANSFORM_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_TRANSFORM_EXPLICIT_SOURCES "")
endif()

set(ITKTransform_SRC
${ITK_TRANSFORM_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKTransform_SRC)
  add_library(ITKTransform ${ITKTransform_SRC})
  target_link_libraries(ITKTransform ITKStatistics ITKDisplacementField)
  itk_module_target(ITKTransform)
endif()
