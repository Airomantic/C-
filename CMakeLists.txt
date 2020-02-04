cmake_minimum_required(VERSION 3.15)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test main.cpp test_2.cpp test_2.h test_1.cpp test_1.h test_3.cpp test_3.h test_4.cpp test_4.h test_parameter_pointer.cpp test_parameter_pointer.h test_parameter_void.cpp test_parameter_void.h test_parameter_pointer_integer.cpp test_parameter_pointer_integer.h)