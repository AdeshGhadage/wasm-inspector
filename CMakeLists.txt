cmake_minimum_required(VERSION 3.10)
project(wasm_inspector)

set(CMAKE_CXX_STANDARD 17)

add_executable(wasm_inspector src/main.cpp src/wasm_parser.cpp)
