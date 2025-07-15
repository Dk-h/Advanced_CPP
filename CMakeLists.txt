cmake_minimum_required(VERSION 3.28)  # Specify the minimum required CMake version
project(AdvancedCPP)                  # Define the project name

set(CMAKE_CXX_STANDARD 20)            # Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON)   # Make C++20 support mandatory

# Add subdirectories for source and utils
# This allows CMake to process CMakeLists.txt in src/ and utils/
# Any targets or variables (with PARENT_SCOPE) defined there become available here
add_subdirectory(src)
add_subdirectory(utils)

# Create the main executable target from src/init.cpp
# You can also use a variable like ${PROJECT_SOURCES} if you want to include all source files
add_executable(${PROJECT_NAME} src/init.cpp)

# Link the 'utils' library to the main executable
# This ensures that functions defined in utils (like LOG, LOG2) are available to the executable
target_link_libraries(${PROJECT_NAME} PRIVATE utils)

# Set the output directory for the built executable
# ${CMAKE_BINARY_DIR} is typically the build/ directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

# Add a custom target to run the executable after build
add_custom_target(run
    COMMAND ${PROJECT_NAME}
    DEPENDS ${PROJECT_NAME}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Running ${PROJECT_NAME} after build"
)