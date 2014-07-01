if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_REGISTRATIONMETHODSv4_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_REGISTRATIONMETHODSv4_EXPLICIT_SOURCES "")
endif()

set(ITKRegistrationMethodsv4_SRC
${ITK_REGISTRATIONMETHODSv4_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKRegistrationMethodsv4_SRC)
  add_library(ITKRegistrationMethodsv4 ${ITKRegistrationMethodsv4_SRC})
  target_link_libraries(ITKRegistrationMethodsv4
    ${ITKOptimizersv4_LIBRARIES}
    ${ITKMetricsv4_LIBRARIES}
    )
  itk_module_target(ITKRegistrationMethodsv4)
endif()
