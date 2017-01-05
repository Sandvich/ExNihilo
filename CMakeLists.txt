cmake_minimum_required(VERSION 3.6)
project(ExNihilo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        exnihilo.cpp)

find_package(Qt5Core REQUIRED)
#find_package(Qt5Components REQUIRED)

add_executable(ExNihilo ${SOURCE_FILES})
set(CMAKE_AUTOMOC TRUE)
target_link_libraries(ExNihilo Qt5::Core)