cmake_minimum_required(VERSION 3.13)
project(CS372_CPS)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)
include_directories(tests)

add_executable(TEST
        src/secret_agent.cpp
        src/auth_proxy.cpp
        tests/catch.hpp
        tests/secret_tests.cpp
        tests/cps_test_main.cpp)
