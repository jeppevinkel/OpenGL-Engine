cmake_minimum_required(VERSION 3.17)
project(OpenGL_Engine)

set(CMAKE_CXX_STANDARD 17)

add_executable(OpenGL_Engine main.cpp Api/Vector3D.cpp Api/Vector3D.h)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS})

target_link_libraries(OpenGL_Engine ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})