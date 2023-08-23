cmake_minimum_required(VERSION 3.15)
project(c_template VERSION 0.1)

# Add ./cmake to the module path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

add_executable(c_template main.c)
# add_library(c_template_lib STATIC lib/*.c)
# target_link_libraries(c_template_lib latroya_telnetd_lib)
target_include_directories(c_template PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

option(ENABLE_TESTS "Build tests" ON)
if(ENABLE_TESTS)
  # Check for criterion
  find_package(Criterion REQUIRED)

  # Add tests
  enable_testing()
  add_subdirectory(test)
endif()
