if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_IMAGESTATISTICS_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_IMAGESTATISTICS_EXPLICIT_SOURCES "")
endif()

set(ITKImageStatistics_SRC
${ITK_IMAGESTATISTICS_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKImageStatistics_SRC)
  add_library(ITKImageStatistics ${ITKImageStatistics_SRC})
  target_link_libraries(ITKImageStatistics
    ${ITKImageFilterBase_LIBRARIES}
    ${ITKStatistics_LIBRARIES}
    ${ITKSpatialObjects_LIBRARIES}
    ${ITKImageCompose_LIBRARIES}
    )
  itk_module_target(ITKImageStatistics)
endif()
