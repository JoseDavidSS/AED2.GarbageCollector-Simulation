cmake_minimum_required(VERSION 3.13)
project(TareaExtraclase_3)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)


add_executable(TareaExtraclase_3 main.cpp Node.cpp Node.h List.cpp List.h Collector.cpp Collector.h CollectorNode.cpp CollectorNode.h)
target_link_libraries(TareaExtraclase_3 gtest gtest_main)