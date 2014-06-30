if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_IMAGEINTENSITY_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_IMAGEINTENSITY_EXPLICIT_SOURCES "")
endif()

set(ITKImageIntensity_SRC
${ITK_IMAGEINTENSITY_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKImageIntensity_SRC)
  add_library(ITKImageIntensity ${ITKImageIntensity_SRC})
  target_link_libraries(ITKImageIntensity
    ${ITKImageFilterBase_LIBRARIES}
    ${ITKImageAdaptors_LIBRARIES}
    ${ITKImageStatistics_LIBRARIES}
    ${ITKImageGrid_LIBRARIES}
    ${ITKPath_LIBRARIES}
    )
  itk_module_target(ITKImageIntensity)
endif()
