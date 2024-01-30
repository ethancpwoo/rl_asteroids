cmake_minimum_required(VERSION 3.10)

project(asteroids)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(asteroids main.cpp)
target_link_libraries(asteroids OpenGL::GL GLUT::GLUT)