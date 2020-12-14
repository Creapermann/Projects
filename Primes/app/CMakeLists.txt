cmake_minimum_required(VERSION 3.0)
project(Primes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Primes src/main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC lib)
