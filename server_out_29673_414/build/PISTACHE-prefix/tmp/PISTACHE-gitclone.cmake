
if(NOT "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE-stamp/PISTACHE-gitinfo.txt" IS_NEWER_THAN "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE-stamp/PISTACHE-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE-stamp/PISTACHE-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout "https://github.com/oktal/pistache.git" "PISTACHE"
    WORKING_DIRECTORY "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/oktal/pistache.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout master --
  WORKING_DIRECTORY "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'master'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE-stamp/PISTACHE-gitinfo.txt"
    "/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE-stamp/PISTACHE-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/root/openapi-generator/server_out_29673_414/build/PISTACHE-prefix/src/PISTACHE-stamp/PISTACHE-gitclone-lastrun.txt'")
endif()

