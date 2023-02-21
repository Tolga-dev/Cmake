cmake_minimum_required(VERSION 3.23)
project(CmakePractice)

set(CMAKE_CXX_STANDARD 20)
set(IS_STATIC 1)
set(IS_INSTALL 0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra " CACHE STRING " c++ flag! " FORCE)


add_subdirectory(lib/sublib/Bit)
add_subdirectory(lib/sublib2/Bit)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++20" COMPILER_SUPPORTS_CXX20)




if(COMPILER_SUPPORTS_CXX20)
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++20")
else()
    message("Ur compiler has no c++10 support!")
endif()


if(IS_STATIC)
    message("Static")
    add_library(CmakePractice STATIC lib/sublib/Static/Src/st.cpp)
else()
    message("Not Static")
endif()

target_include_directories(CmakePractice PUBLIC lib/sublib/Static/Inc )
target_link_libraries(${PROJECT_NAME}
        sublib::bit::inc::bit
        sublib2::bit::inc::bit
        )

add_executable(CmakePractice_bin main.cpp)
target_link_libraries( CmakePractice_bin PRIVATE CmakePractice)


if(IS_INSTALL)
    message("Install!")
    install(TARGETS CmakePractice_bin DESTINATION bin) # binary

    install(TARGETS CmakePractice LIBRARY DESTINATION lib) # lib

    install(DIRECTORY lib/sublib/Static/Inc DESTINATION include) # Include

    install(FILES h.conf DESTINATION etc) # conf
endif()
