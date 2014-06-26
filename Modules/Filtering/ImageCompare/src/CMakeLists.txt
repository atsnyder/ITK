if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_IMAGECOMPARE_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_IMAGECOMPARE_EXPLICIT_SOURCES "")
endif()

set(ITKImageCompare_SRC
${ITK_IMAGECOMPARE_EXPLICIT_SOURCES}
)

# only add library if it will have object files;
# otherwise it causes a build error.
if(ITKImageCompare_SRC)
  add_library(ITKImageCompare ${ITKImageCompare_SRC})
  target_link_libraries(ITKImageCompare  ${ITKTransform_LIBRARIES} )
  itk_module_target(ITKImageCompare)
endif()
