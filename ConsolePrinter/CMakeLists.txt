cmake_minimum_required(VERSION 3.15)
project(asd)

set(CMAKE_CXX_STANDARD 14)

add_executable(asd main.cpp AttColor.h AttFormat.h ConsolePrinter.h StringConvertable.h ConsolePrinter.cpp MyLine.h MyLine.cpp MyText.h MyText.cpp)