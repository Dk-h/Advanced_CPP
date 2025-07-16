file(GLOB UTILS_SOURCES "*.cpp")

# Create static library from utils
add_library(utils STATIC ${UTILS_SOURCES})

# Make utils headers accessible if needed
target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
