cmake_minimum_required(VERSION 3.14)
project(pkgA CXX)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo_multi.cmake)
conan_basic_setup()

add_library(helloA helloA.cpp)
target_include_directories(helloA PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(helloA PROPERTIES OUTPUT_NAME "better_name")