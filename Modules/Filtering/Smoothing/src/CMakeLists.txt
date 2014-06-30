if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_SMOOTHING_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_SMOOTHING_EXPLICIT_SOURCES "")
endif()

set(ITKSmoothing_SRC
${ITK_SMOOTHING_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKSmoothing_SRC)
  add_library(ITKSmoothing ${ITKSmoothing_SRC})
  target_link_libraries(ITKSmoothing
    ${ITKImageFilterBase_LIBRARIES}
    ${ITKImageFunction_LIBRARIES}
    )
  itk_module_target(ITKSmoothing)
endif()
