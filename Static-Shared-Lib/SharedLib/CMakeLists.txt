cmake_minimum_required(VERSION 3.5) # cmake --version

project (shared) # set project name


##################
#Create Lib
##################

add_library(shared_lib SHARED src/bit.cpp) # create lib

target_include_directories(shared_lib PUBLIC ${PROJECT_SOURCE_DIR}/include/bit)


#shared -> SHARED libraries are linked and loaded at runtime , .so, .dll, .dylib
# use static libraries when binary does not have many external dependencies
##################
#Create Executable
##################

add_executable(shared_bin main.cpp) # Add an executable
target_link_libraries(shared_bin PRIVATE shared_lib) # link lib with hello_bin target



# PROJECT_SOURCE_DIR -> source directory of current cmake project

