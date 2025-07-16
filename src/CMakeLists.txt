file(GLOB SRC_FILES "*.cpp")

# Add source files to the main executable
target_sources(${PROJECT_NAME} PRIVATE ${SRC_FILES})
