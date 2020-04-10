cmake_minimum_required(VERSION 3.10)

project(cpp_assignment_01)

include_directories(include)

add_executable(as1
    src/main.cpp
    src/groupA/groupA-file1.cpp 
    src/groupA/groupA-file2.cpp
)

