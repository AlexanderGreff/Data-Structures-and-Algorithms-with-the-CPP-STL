cmake_minimum_required(VERSION 3.10)

project(01_cstylearray)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(example_lib STATIC)
target_sources(example_lib PRIVATE 01_classexample.cpp)

add_executable(01_cstylearray 01_cstylearray.cpp)
add_executable(01_stdarray 01_stdarray.cpp)
target_compile_options(01_stdarray PRIVATE --save-temps)
add_executable(02_cstylearray 02_stdvector.cpp)

