cmake_minimum_required(VERSION 3.10)
project(oid_debug_sample CXX)

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable(sample sample.cpp)
target_link_libraries(sample ${OpenCV_LIBS})
