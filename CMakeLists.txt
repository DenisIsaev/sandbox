cmake_minimum_required(VERSION 3.1)

project(borsh_sandbox CXX)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib)

# Include GoogleTest
include_directories(
        lib/googletest/include
        lib/googletest)

add_executable(borsh_sandbox
        # Consts
        src/consts/const_modifier.cpp
        src/consts/static_const_members.cpp
        src/consts/const_members.cpp
        # Classes
        src/classes/constuctors.cpp)

target_link_libraries(borsh_sandbox gtest gtest_main)