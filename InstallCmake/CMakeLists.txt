cmake_minimum_required(VERSION 3.5) # cmake --version

project (install) # set project name

##################
#set pre target flag
##################
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra" CACHE STRING "Default CXX options" FORCE)

##################
#Create Lib
##################

add_library(install_lib SHARED src/bit.cpp) # create lib

target_include_directories(install_lib PUBLIC ${PROJECT_SOURCE_DIR}/include/bit)


#shared -> SHARED libraries are linked and loaded at runtime , .so, .dll, .dylib
# use static libraries when binary does not have many external dependencies
##################
#Create Executable
##################

add_executable(install_bin main.cpp) # Add an executable
target_link_libraries(install_bin PRIVATE install_lib) # link lib with hello_bin target



# PROJECT_SOURCE_DIR -> source directory of current cmake project

####################
# Install
####################

# Binaries
install (TARGETS install_bin
        DESTINATION bin)

# Library
#Shared libraries, except
#DLLs (these go to RUNTIME)
install (TARGETS install_lib
        LIBRARY DESTINATION lib)

# Header files
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
        DESTINATION include)

