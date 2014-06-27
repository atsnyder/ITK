if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_FASTMARCHING_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_FASTMARCHING_EXPLICIT_SOURCES "")
endif()

set(ITKFastMarching_SRC
${ITK_FASTMARCHING_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKFastMarching_SRC)
  add_library(ITKFastMarching ${ITKFastMarching_SRC})
  target_link_libraries(ITKFastMarching
    ${ITKCommon_LIBRARIES}
    ${ITKQuadEdgeMesh_LIBRARIES}
    ${ITKConnectedComponents_LIBRARIES}
  )
  itk_module_target(ITKFastMarching)
endif()
