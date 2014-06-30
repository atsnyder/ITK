if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_RegistrationCommon_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_RegistrationCommon_EXPLICIT_SOURCES "")
endif()

set(ITKRegistrationCommon_SRC
${ITK_RegistrationCommon_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKRegistrationCommon_SRC)
  add_library(ITKRegistrationCommon ${ITKRegistrationCommon_SRC})
  target_link_libraries(ITKRegistrationCommon
    ${ITKOptimizers_LIBRARIES}
    ${ITKImageIntensity_LIBRARIES}
    ${ITKImageFunction_LIBRARIES}
    ${ITKImageGrid_LIBRARIES}
    ${ITKSpatialObjects_LIBRARIES}
    ${ITKSmoothing_LIBRARIES}
    ${ITKImageGradient_LIBRARIES}
    ${ITKImageFeature_LIBRARIES}
    ${ITKFiniteDifference_LIBRARIES}
    ${ITKDisplacementField_LIBRARIES}
    ${ITKStatistics_LIBRARIES}
    )
  itk_module_target(ITKRegistrationCommon)
endif()
