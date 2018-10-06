cmake_minimum_required(VERSION 3.1)

project(AlgoBasic C CXX)

set(CMAKE_CXX_STANDARD 11) 

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ./Include )
add_subdirectory(SelectionSort)
add_subdirectory(InsertionSort)
add_subdirectory(InterchangeSort)


#link lib
target_link_libraries(${PROJECT_NAME} SelectionSort InsertionSort InterchangeSort)