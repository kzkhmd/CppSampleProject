cmake_minimum_required(VERSION 3.14)

project(CppSampleProject CXX)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Source)
add_subdirectory(Test)

enable_testing()
