file(GLOB SRC_FILES "*.cpp")

add_executable(advanced_cpp ${SRC_FILES})

# Link utils (if it’s a library)
target_link_libraries(advanced_cpp utils)