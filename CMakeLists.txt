if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
      CACHE STRING "")
endif()

message(STATUS "Vcpkg integration script found : " ${CMAKE_TOOLCHAIN_FILE})

cmake_minimum_required(VERSION 3.13)

project(introduction-to-algorithm CXX)

find_package(GTest REQUIRED)

add_subdirectory(sorting)
add_subdirectory(searching)
