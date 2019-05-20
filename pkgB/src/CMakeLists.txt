cmake_minimum_required(VERSION 3.14)
project(pkgB CXX)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo_multi.cmake)
conan_basic_setup()

add_executable(helloB helloB.cpp)

conan_target_link_libraries(helloB)
