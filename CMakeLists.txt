cmake_minimum_required(VERSION 3.23)
project(CmakePractice)

set(CMAKE_CXX_STANDARD 20)
set(IS_STATIC 0)
set(IS_INSTALL 0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra " CACHE STRING " c++ flag! " FORCE)


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

if(IS_INSTALL)
    message("Install!")
    install(TARGETS CmakePractice_bin DESTINATION bin) # binary

    install(TARGETS CmakePractice LIBRARY DESTINATION lib) # lib

    install(DIRECTORY ${PROJECT_SOURCE_DIR}/Static/Inc DESTINATION include) # include

    install(FILES h.conf DESTINATION etc) # conf
endif()
