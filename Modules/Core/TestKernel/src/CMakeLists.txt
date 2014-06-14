if(ITK_COMMON_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_COMMON_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_COMMON_EXPLICIT_SOURCES "")
endif()

set(ITK_TESTDRIVER_SRCS
${ITK_COMMON_EXPLICIT_SOURCES}
)

add_executable(itkTestDriver itkTestDriver.cxx ${ITK_TESTDRIVER_SRCS})
target_link_libraries(itkTestDriver ${ITKTestKernel_LIBRARIES})
itk_module_target_label(itkTestDriver)
itk_module_target_export(itkTestDriver)
itk_module_target_install(itkTestDriver)
