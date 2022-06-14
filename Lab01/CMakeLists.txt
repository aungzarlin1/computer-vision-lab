cmake_minimum_required(VERSION 3.12)

project(hello)
set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV 4.5.5 REQUIRED)

add_executable(point-test point-test.cpp)
add_executable(videoshow videoshow.cpp)
add_executable(sparsetest sparsetest.cpp)
add_executable(densetest densetest.cpp)

target_include_directories(point-test PUBLIC ${OpenCV_INCLUDE_DIRS})
target_include_directories(videoshow PUBLIC ${OpenCV_INCLUDE_DIRS})
target_include_directories(sparsetest PUBLIC ${OpenCV_INCLUDE_DIRS})
target_include_directories(densetest PUBLIC ${OpenCV_INCLUDE_DIRS})

target_link_libraries(point-test ${OpenCV_LIBS})
target_link_libraries(videoshow ${OpenCV_LIBS})
target_link_libraries(sparsetest ${OpenCV_LIBS})
target_link_libraries(densetest ${OpenCV_LIBS})

