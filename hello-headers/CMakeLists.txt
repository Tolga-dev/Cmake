cmake_minimum_required(VERSION 3.5) # cmake --version

project (hello-headers) # set project name


add_executable(${PROJECT_NAME} main.cpp src/Shape.cpp) # Add an executable

target_include_directories(${PROJECT_NAME} PRIVATE ../SubLib/sublib1/include)

# PROJECT_SOURCE_DIR -> source directory of current cmake project




