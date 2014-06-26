if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_CONVOLUTION_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_CONVOLUTION_EXPLICIT_SOURCES "")
endif()

set(ITKConvolution_SRC
${ITK_CONVOLUTION_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKConvolution_SRC)
  add_library(ITKConvolution ${ITKConvolution_SRC})
  target_link_libraries(ITKConvolution  ${ITKImageIntensity_LIBRARIES} )
  itk_module_target(ITKConvolution)
endif()
