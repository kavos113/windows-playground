cmake_minimum_required(VERSION 3.30)
project(directx_playground)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(directwrite/0_base)
add_subdirectory(directwrite/textformat_flow-direction)
add_subdirectory(directwrite/textformat_line-spacing)
add_subdirectory(directwrite/textformat_paragraph-alignment)
add_subdirectory(directwrite/textformat_text-alignment)
add_subdirectory(directwrite/textformat_trimming)

add_subdirectory(winrt/capture)