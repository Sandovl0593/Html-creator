cmake_minimum_required(VERSION 3.23)
project(Html_creator)

set(CMAKE_CXX_STANDARD 20)
add_executable(Html_creator main.cpp)

target_include_directories(Html_creator PUBLIC
        base_tags/ container_tags/ text_tags/ other_tags/)

