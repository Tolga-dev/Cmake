project(.)

add_library(${PROJECT_NAME} INTERFACE)
add_library(sublib2::bit::inc::bit ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
        INTERFACE
        ../../../SubLib/sublib1/include
        )
