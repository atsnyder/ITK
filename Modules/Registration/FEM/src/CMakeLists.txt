if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_FEMRegistration_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_FEMRegistration_EXPLICIT_SOURCES "")
endif()

set(ITKFEMRegistration_SRC
${ITK_FEMRegistration_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKFEMRegistration_SRC)
  add_library(ITKFEMRegistration ${ITKFEMRegistration_SRC})
  target_link_libraries(ITKFEMRegistration
    ${ITKFEM_LIBRARIES}
    ${ITKImageStatistics_LIBRARIES}
    ${ITKPDEDeformableRegistration_LIBRARIES}
    ${ITKImageFeature_LIBRARIES}
    ${ITKSpatialObjects_LIBRARIES}
    )
  itk_module_target(ITKFEMRegistration)
endif()
