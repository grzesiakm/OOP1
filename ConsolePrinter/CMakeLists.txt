cmake_minimum_required(VERSION 3.15)
project(asd)

set(CMAKE_CXX_STANDARD 14)

add_executable(asd main.cpp AttColor.h AttFormat.h MyPrinter.h MyPrintable.h MyPrinter.cpp MyLine.h MyLine.cpp MyText.h MyText.cpp)