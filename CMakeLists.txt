cmake_minimum_required(VERSION 3.23)
project(Cmake)

set(CMAKE_CXX_STANDARD 20)


#ADD_LIBRARY(GEOLIB INTERFACE)
#TARGET_SOURCES(
#        GEOLIB INTERFACE
#        FILE_SET HEADERS
#        BASE_DIRS ${PROJECT_SOURCE_DIR}
#        FILES "Geometry.h"
#)
#
#add_subdirectory("Lib/GeometryHeaderLib/Shape")
#add_subdirectory("Lib/GeometryHeaderLib/Square")


add_executable(Cmake main.cpp)

#target_sources(iforgot PRIVATE "main.cpp")
#
#target_link_libraries(iforgot PRIVATE GEOLIB)
#
#target_include_directories(iforgot PRIVATE "${PROJECT_SOURCE_DIR}" )
#add_subdirectory("Lib/GeometryBasic/Shape")
#add_subdirectory("Lib/GeometryBasic/Rectangle")
#
#install(TARGETS iforgot)
#install(TARGETS GEOLIB FILE_SET HEADERS)


