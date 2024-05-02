cmake_minimum_required(VERSION 3.15.0)

project(LAB_03_220217)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES main.cpp Person.cpp Preschooler.cpp Schoolboy.cpp StudentBrSTU.cpp Worker.cpp MyContainer.cpp)

set(HEADER_FILES Person.h Preschooler.h Schoolboy.h StudentBrSTU.h Worker.h MyContainer.h)

set(ALL_SOURCES ${HEADER_FILSE}
				${SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCES})