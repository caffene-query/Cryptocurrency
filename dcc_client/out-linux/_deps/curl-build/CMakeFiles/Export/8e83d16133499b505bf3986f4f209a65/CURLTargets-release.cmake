#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CURL::libcurl" for configuration "Release"
set_property(TARGET CURL::libcurl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CURL::libcurl PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcurl.so"
  IMPORTED_SONAME_RELEASE "libcurl.so"
  )

list(APPEND _cmake_import_check_targets CURL::libcurl )
list(APPEND _cmake_import_check_files_for_CURL::libcurl "${_IMPORT_PREFIX}/lib/libcurl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
