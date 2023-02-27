cmake_minimum_required(VERSION 3.5) # cmake --version

project (static) # set project name


##################
#Create Lib
##################

add_library(static_lib STATIC src/bit.cpp) # create lib
target_include_directories(static_lib PUBLIC ../../SubLib/sublib1/include/bit)

#static -> .a .lib, it is directly linked into the program at compile time

##################
#Create Executable
##################

add_executable(static_bin main.cpp) # Add an executable
target_link_libraries(static_bin PRIVATE static_lib) # link lib with hello_bin target



# PROJECT_SOURCE_DIR -> source directory of current cmake project

