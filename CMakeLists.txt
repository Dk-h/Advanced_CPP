cmake_minimum_required(VERSION 3.28)
project(AdvancedCPP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create the executable
add_executable(${PROJECT_NAME} src/init.cpp)

# Add subdirectories AFTER defining the executable
add_subdirectory(src)
add_subdirectory(inc)
add_subdirectory(utils)

# Link the 'utils' static library
target_link_libraries(${PROJECT_NAME} PRIVATE utils)

# Set output location for binary
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

# Custom run target
add_custom_target(run
    COMMAND ${PROJECT_NAME}
    DEPENDS ${PROJECT_NAME}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Running ${PROJECT_NAME} after build"
)
