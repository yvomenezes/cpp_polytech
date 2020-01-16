cmake_minimum_required (VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)
project(td8)
add_executable(main
main.cpp
Tableau.hpp
IndexException.hpp
IndexOverflow.hpp
IndexUnderflow.hpp
)
