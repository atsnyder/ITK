if(ITK_TEMPLATE_EXPLICIT_INSTANTIATION)
  file(GLOB ITK_COMMON_EXPLICIT_SOURCES "*Explicit.cxx")
else()
  set(ITK_COMMON_EXPLICIT_SOURCES "")
endif()

set(ITKIOImageBase_SRC
itkArchetypeSeriesFileNames.cxx
itkImageIOFactory.cxx
itkIOCommon.cxx
itkNumericSeriesFileNames.cxx
itkImageIOBase.cxx
itkRegularExpressionSeriesFileNames.cxx
itkStreamingImageIOBase.cxx

${ITK_COMMON_EXPLICIT_SOURCES}
)

add_library(ITKIOImageBase ${ITK_LIBRARY_BUILD_TYPE} ${ITKIOImageBase_SRC})
target_link_libraries(ITKIOImageBase  ${ITKCommon_LIBRARIES})
itk_module_target(ITKIOImageBase)
