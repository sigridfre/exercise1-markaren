cmake_minimum_required(VERSION 3.15)
project(exercise1)

set(CMAKE_CXX_STANDARD 17)

add_library(vector3lib Vector3.cpp)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC vector3lib)

add_executable(main2 main2.cpp)
target_link_libraries(main2 PUBLIC vector3lib)
