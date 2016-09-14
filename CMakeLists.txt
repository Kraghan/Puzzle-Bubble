cmake_minimum_required(VERSION 3.3)
project(Puzzle_Bubble)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Bubble.cpp src/Bubble.h src/BubbleColor.h src/BubbleType.h src/Area.cpp src/Area.h)
add_executable(Puzzle_Bubble ${SOURCE_FILES})