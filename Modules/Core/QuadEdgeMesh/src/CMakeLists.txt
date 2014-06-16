if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_COMMON_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_COMMON_EXPLICIT_SOURCES "")
endif()

set(ITKQuadEdgeMesh_SRC
itkQuadEdge.cxx

${ITK_COMMON_EXPLICIT_SOURCES}
)

add_library(ITKQuadEdgeMesh ${ITKQuadEdgeMesh_SRC})
target_link_libraries(ITKQuadEdgeMesh  ${ITKMesh_LIBRARIES})
itk_module_target(ITKQuadEdgeMesh)
