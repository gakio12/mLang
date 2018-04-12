# cmake_minimum_required(VERSION <specify CMake version here>)
project(mLang)

set(CMAKE_CXX_STANDARD 11)

set(HEADERS src/h/main.h
            src/h/help.h)

add_executable(mLang
        src/main.cpp
        ${HEADERS})
