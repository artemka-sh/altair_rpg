cmake_minimum_required(VERSION 3.0)

project(rpg VERSION 0.1)

add_executable(rpg main.cpp)
target_link_libraries(rpg sfml-graphics sfml-window sfml-system)
