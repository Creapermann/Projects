cmake_minimum_required(VERSION 3.0)


set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")


project(test1)

add_executable(${PROJECT_NAME} test.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC "/pkg/google/googletest/include/")
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../lib/include/)

target_link_libraries(${PROJECT_NAME} PUBLIC gtest.lib libs)
