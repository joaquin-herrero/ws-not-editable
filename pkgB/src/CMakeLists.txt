cmake_minimum_required(VERSION 2.8)
project(pkgB CXX)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_executable(helloB helloB.cpp)
target_link_libraries(helloB CONAN_PKG::pkgA)
