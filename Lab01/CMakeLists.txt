cmake_minimum_required(VERSION 3.12)

project(hello)
set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV 4.5.5 REQUIRED)

add_executable(point-test point-test.cpp)

target_include_directories(point-test PUBLIC ${OpenCV_INCLUDE_DIRS})
target_link_libraries(point-test ${OpenCV_LIBS})

