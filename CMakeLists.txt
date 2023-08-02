cmake_minimum_required(VERSION 3.25)
project(OCTA_Trial)
set(CMAKE_CXX_STANDARD 17)
# >>>> Open cv setting! >>>>
#find_package(OpenCV)
find_package(Qt6 COMPONENTS Widgets Core REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
# <<<< Open cv setting! <<<<
# >>>> Google Tests >>>>
#add_subdirectory(Google_tests)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
# <<<< Google Tests <<<<
add_executable(OCTA_Trial main.cpp src/DataLoader.cpp src/DataLoader.h
        src/ConfigUI.cpp
        src/ConfigUI.h)
target_link_libraries(OCTA_Trial PRIVATE Qt6::Widgets Qt6::Core)
