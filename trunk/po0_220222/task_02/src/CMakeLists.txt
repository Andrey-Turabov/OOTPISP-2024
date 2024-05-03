cmake_minimum_required(VERSION 3.15.0)

project(LAB_02_220222)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES main.cpp
challenge.cpp exam.cpp final_exam.cpp test.cpp)

set(HEADER_FILES challenge.h exam.h final_exam.h text.h)

set(ALL_SOURCES ${HEADER_FILSE}
				${SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCES})