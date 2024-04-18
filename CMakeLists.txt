cmake_minimum_required(VERSION 3.0)

project(rpg VERSION 0.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(GAME_SOURCES ${GAME_SOURCES})

include_directories("src")
file(GLOB_RECURSE GAME_SOURCES "src/*.cpp")
add_executable(rpg ${GAME_SOURCES})


target_link_libraries(rpg sfml-audio sfml-graphics sfml-window sfml-system)

file(COPY ${CMAKE_SOURCE_DIR}/data DESTINATION ${CMAKE_BINARY_DIR})