cmake_minimum_required(VERSION 3.25)
project(untitled6)

set(CMAKE_CXX_STANDARD 17)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(untitled6 main.cpp)

target_link_libraries(untitled6 PRIVATE nlohmann_json::nlohmann_json)
