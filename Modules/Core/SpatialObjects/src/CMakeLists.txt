if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_COMMON_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_COMMON_EXPLICIT_SOURCES "")
endif()

set(ITKSpatialObjects_SRC
itkCylinderSpatialObject.cxx
itkSpatialObjectFactoryBase.cxx
itkArrowSpatialObject.cxx

${ITK_COMMON_EXPLICIT_SOURCES}
)

add_library(ITKSpatialObjects ${ITKSpatialObjects_SRC})
target_link_libraries(ITKSpatialObjects  ${ITKImageFunction_LIBRARIES} ${ITKMesh_LIBRARIES} ${ITKIOImageBase_LIBRARIES})
itk_module_target(ITKSpatialObjects)
