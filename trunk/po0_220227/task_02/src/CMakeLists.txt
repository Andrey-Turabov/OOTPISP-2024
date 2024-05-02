cmake_minimum_required(VERSION 3.15.0)

project(LAB_02_220227)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)



set(SOURCE_FILES  Main.cpp
Engine.cpp ICEngine.cpp DieselEngine.cpp TurbojetEngine.cpp)

set(HEADER_FILES Engine.h ICEngine.h DieselEngine.h TurbojetEngine.h)

set(ALL_SOURCES ${HEADER_FILES}
                ${SOURCE_FILES})


add_executable(${PROJECT_NAME} ${ALL_SOURCES})
