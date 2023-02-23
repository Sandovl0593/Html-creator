cmake_minimum_required(VERSION 3.23)
project(Html_creator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Html_creator main.cpp head_tag.h body_tag.h tag_builder.h tag_builder.cpp)
