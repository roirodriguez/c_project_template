include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

function(register_criterion_test arg_test_name arg_test_source_file)
  add_executable(${arg_test_name} ${arg_test_source_file})

  target_link_libraries(${arg_test_name} ${CRITERION_LIBRARIES})
  #target_link_libraries(${arg_test_name} c_template_lib)

  # use C99
  set_property(TARGET ${arg_test_name} PROPERTY C_STANDARD 99)

  # Enable a few warnings
  if (CMAKE_COMPILER_IS_GNUCC)
    target_compile_options(${arg_test_name} PRIVATE -Wall -Wextra)
  endif (CMAKE_COMPILER_IS_GNUCC)
  if (MSVC)
    target_compile_options(${arg_test_name} PRIVATE /W4)
  endif (MSVC)

  add_test(${arg_test_name} ${arg_test_name})
endfunction()

register_criterion_test(test_main test_main.c)
#target_sources(test_main PRIVATE util/test_data.c)
