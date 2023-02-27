#cmake_minimum_required(VERSION 3.23)
#project(CmakePractice)
#
#set(CMAKE_CXX_STANDARD 20)
#
###########################################################
## set a project version
###########################################################
#
#set(IS_STATIC 1)
#set(IS_INSTALL 1)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra " CACHE STRING " c++ flag! " FORCE)
#
#set (CmakePractice_VERSION_MAJOR 0)
#set (CmakePractice_VERSION_MINOR 2)
#set (CmakePractice_VERSION_PATCH 1)
#set (CmakePractice_VERSION "${CmakePractice_VERSION_MAJOR}.${CmakePractice_VERSION_MINOR}.
#            ${CmakePractice_VERSION_PATCH}")
#
###########################################################
## Configuration
###########################################################
#
#configure_file(ConfigureFiles/versions.h.in ${PROJECT_BINARY_DIR}/vers.h)
#configure_file(ConfigureFiles/paths.h.in ${PROJECT_BINARY_DIR}/path.h @ONLY)
#
#add_subdirectory(lib/sublib/Bit)
#add_subdirectory(lib/sublib2/Bit)
#
###########################################################
## set flag
###########################################################
#
#include(CheckCXXCompilerFlag)
#CHECK_CXX_COMPILER_FLAG("-std=c++20" COMPILER_SUPPORTS_CXX20)
#
#if(COMPILER_SUPPORTS_CXX20)
#    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++20")
#else()
#    message("Ur compiler has no c++10 support!")
#endif()
#
###########################################################
## set lib feature AND create Lib
###########################################################
#if(IS_STATIC)
#    message("Static")
#    add_library(CmakePractice STATIC lib/sublib/Static/Src/st.cpp)
#else()
#    message("Not Static")
#    add_library(CmakePractice SHARE lib/sublib/Static/Src/st.cpp)
#endif()
#
#target_include_directories( CmakePractice PUBLIC  ${CMAKE_BINARY_DIR} )
#target_include_directories(CmakePractice PUBLIC lib/sublib/Static/Inc )
#target_link_libraries(${PROJECT_NAME}
#        sublib::bit::inc::bit
#        sublib2::bit::inc::bit
#        )

###########################################################
## Create an executable
###########################################################
#add_executable(CmakePractice_bin main.cpp)
#target_link_libraries( CmakePractice_bin PRIVATE CmakePractice)
#
###########################################################
## install
###########################################################
#if(IS_INSTALL)
#    message("Install!")
#    install(TARGETS CmakePractice_bin DESTINATION bin) # binary
#
#    install(TARGETS CmakePractice LIBRARY DESTINATION lib) # lib
#
#    install(DIRECTORY lib/sublib/Static/Inc DESTINATION include) # Include
#
#    install(FILES h.conf DESTINATION etc) # conf
#endif()
#
###########################################################
## Create Deb
###########################################################
#
#
#set(CPACK_GENERATOR "DEB") # GENERATE .DEB
#
#set(CPACK_DEBIAN_PACKAGE_MAINTAINER "BLOTTO") # pack maintainer
#
#set(CPACK_PACKAGE_VERSION ${CmakePractice_VERSION})
#
#include(CPack)
#
#
#
#
#
#
#
#
#
