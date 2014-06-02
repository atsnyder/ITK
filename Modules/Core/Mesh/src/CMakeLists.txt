if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_MESH_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_MESH_EXPLICIT_SOURCES "")
endif()

set(ITKMesh_SRC
itkMeshRegion.cxx
itkSimplexMeshGeometry.cxx

${ITK_MESH_EXPLICIT_SOURCES}
)

add_library(ITKMesh ${ITKMesh_SRC})
target_link_libraries(ITKMesh  ${ITKTransform_LIBRARIES})
itk_module_target(ITKMesh)
