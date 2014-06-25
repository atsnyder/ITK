if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_Colormap_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_Colormap_EXPLICIT_SOURCES "")
endif()

set(ITKColormap_SRC
${ITK_Colormap_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKColormap_SRC)
  add_library(ITKColormap ${ITKColormap_SRC})
  target_link_libraries(ITKColormap
    ${ITKImageGrid_LIBRARIES}
    ${ITKCurvatureFlow_LIBRARIES}
    ${ITKFiniteDifference_LIBRARIES}
    )
  itk_module_target(ITKColormap)
endif()
