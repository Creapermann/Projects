cmake_minimum_required(VERSION 3.0)

project(lib)

add_library(${PROJECT_NAME} SHARED)


target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_sources(${PROJECT_NAME} PRIVATE
    src/primes.cpp
)
