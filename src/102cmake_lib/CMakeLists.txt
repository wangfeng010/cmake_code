cmake_minimum_required(VERSION 3.20)

project(xlog)

include_directories("xlog")

add_library(xlog SHARED xlog/xlog.cpp xlog/xlog.h)

add_executable(test_xlog test_xlog/test_xlog.cpp)

target_link_libraries(test_xlog xlog)