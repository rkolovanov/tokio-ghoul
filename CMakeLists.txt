cmake_minimum_required(VERSION 3.16)
project(tokio-ghoul)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS audio REQUIRED)

set(SOURCES src/main.cpp)
add_executable(tokio-ghoul ${SOURCES})
target_link_libraries(tokio-ghoul sfml-audio)

file(COPY "resources" DESTINATION ".")