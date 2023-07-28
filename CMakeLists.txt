cmake_minimum_required(VERSION 3.25)
project(OCTA_Trial)

set(CMAKE_CXX_STANDARD 17)
# >>>> Open cv setting! >>>>
find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})
# <<<< Open cv setting! <<<<


add_executable(OCTA_Trial main.cpp)
target_link_libraries(OCTA_Trial ${OpenCV_LIBS})