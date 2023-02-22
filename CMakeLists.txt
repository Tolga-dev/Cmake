cmake_minimum_required(VERSION 3.23)
project(Cmake)

set(CMAKE_CXX_STANDARD 20)
set(IS_STATIC YES)

if(IS_STATIC)
    MESSAGE("YE")
    add_library(Cmake STATIC Lib/Static/Src/st.cpp)
    target_include_directories(Cmake PUBLIC ${PROJECT_SOURCE_DIR}/Cmake/Lib/Static)
endif()

#before
ADD_LIBRARY(GEOLIB INTERFACE)
TARGET_SOURCES(
        GEOLIB INTERFACE
        FILE_SET HEADERS
        BASE_DIRS ${PROJECT_SOURCE_DIR}
        FILES "Geometry.h"
)

add_executable(CmakeBinary main.cpp)

if(IS_STATIC)
    target_link_libraries(CmakeBinary PRIVATE Cmake)
endif()

add_subdirectory("Lib/GeometryHeaderLib/Shape")
add_subdirectory("Lib/GeometryHeaderLib/Square")




#before
target_sources(Cmake PRIVATE "main.cpp")

target_link_libraries(Cmake PRIVATE GEOLIB)

target_include_directories(Cmake PRIVATE "${PROJECT_SOURCE_DIR}" )
add_subdirectory("Lib/GeometryBasic/Shape")
add_subdirectory("Lib/GeometryBasic/Rectangle")

install(TARGETS Cmake)
install(TARGETS GEOLIB FILE_SET HEADERS)


