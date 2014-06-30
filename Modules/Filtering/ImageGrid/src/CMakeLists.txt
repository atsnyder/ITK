if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_IMAGEGRID_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_IMAGEGRID_EXPLICIT_SOURCES "")
endif()

set(ITKImageGrid_SRC
${ITK_IMAGEGRID_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKImageGrid_SRC)
  add_library(ITKImageGrid ${ITKImageGrid_SRC})
  target_link_libraries(ITKImageGrid
    ${ITKImageFunction_LIBRARIES}
    ${ITKImageFilterBase_LIBRARIES}
    ${ITKImageAdaptors_LIBRARIES}
    )
  itk_module_target(ITKImageGrid)
endif()
