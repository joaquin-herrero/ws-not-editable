cmake_minimum_required(VERSION 3.14)

project(WorkspaceProject)

include(${CMAKE_CURRENT_BINARY_DIR}/conanworkspace.cmake)
conan_workspace_subdirectories()

