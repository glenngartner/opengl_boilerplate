cmake_minimum_required(VERSION 3.8)
project(starter01)

# configure GLFW subdirectory
option(GLFW_BUILD_DOCS OFF)
option(GLFW_BUILD_EXAMPLES OFF)
option(GLFW_BUILD_TESTS OFF)
add_subdirectory(${PROJECT_SOURCE_DIR}/lib/glfw)

include_directories(${PROJECT_SOURCE_DIR}/lib/glfw/include ${PROJECT_SOURCE_DIR}/lib/glm ${PROJECT_SOURCE_DIR}/lib/glad/include ${PROJECT_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/main.cpp ${PROJECT_SOURCE_DIR}/src/GL_Renderer.cpp ${PROJECT_SOURCE_DIR}/include/GL_Renderer.h)
add_executable(starter01 ${SOURCE_FILES} ${PROJECT_SOURCE_DIR}/lib/glad/src/glad.c)

target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES} ${GLAD_IBRARIES})