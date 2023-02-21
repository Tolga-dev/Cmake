project(Bit)

add_library(${PROJECT_NAME} Src/Bit.cpp)
add_library(sublib::bit::inc::bit ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/lib/sublib/Bit/Include)
