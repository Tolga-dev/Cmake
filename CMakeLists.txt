cmake_minimum_required(VERSION 3.23)
project(CmakePractice)

set(CMAKE_CXX_STANDARD 20)
set(IS_STATIC 0)

if(IS_STATIC)
    message("Static")
    add_library(CmakePractice STATIC Static/Src/st.cpp)
    target_include_directories(CmakePractice PUBLIC ${PROJECT_SOURCE_DIR}/Static/Inc )

    add_executable(CmakePractice_bin main.cpp)
    target_link_libraries( CmakePractice_bin PRIVATE CmakePractice)
else()
    message("Not Static")
    add_library(CmakePractice SHARED Static/Src/st.cpp)
    target_include_directories(CmakePractice PUBLIC ${PROJECT_SOURCE_DIR}/Static/Inc )

    add_executable(CmakePractice_bin main.cpp)
    target_link_libraries( CmakePractice_bin PRIVATE CmakePractice)

endif()