cmake_minimum_required(VERSION 3.30)
project(directx_playground)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(directwrite/0_base)
add_subdirectory(directwrite/textformat_flowdirection)
add_subdirectory(directwrite/textformat_linespacing)

add_subdirectory(winrt/capture)