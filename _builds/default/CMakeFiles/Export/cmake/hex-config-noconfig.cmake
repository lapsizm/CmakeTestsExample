#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hex" for configuration ""
set_property(TARGET hex APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(hex PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libhex.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS hex )
list(APPEND _IMPORT_CHECK_FILES_FOR_hex "${_IMPORT_PREFIX}/lib/libhex.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
