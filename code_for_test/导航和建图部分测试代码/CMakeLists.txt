cmake_minimum_required(VERSION 3.16)
project(test_code)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_code main.cpp navigation.cpp slam.cpp nav_selfnav.cpp nav_self_control.cpp nav_add_save_change_point.cpp nav_to_aimed_point.cpp slam_test.cpp)