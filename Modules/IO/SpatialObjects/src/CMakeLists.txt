if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_COMMON_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_COMMON_EXPLICIT_SOURCES "")
endif()

set(ITKIOSpatialObjects_SRC
itkPolygonGroupSpatialObjectXMLFile.cxx
${ITK_COMMON_EXPLICIT_SOURCES}
)

add_library(ITKIOSpatialObjects ${ITKIOSpatialObjects_SRC})
target_link_libraries(ITKIOSpatialObjects  ${ITKSpatialObjects_LIBRARIES} ${ITKIOXML_LIBRARIES} ${ITKIOImageBase_LIBRARIES})
itk_module_target(ITKIOSpatialObjects)
