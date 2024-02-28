cmake_minimum_required(VERSION 3.0)
project(test)

# python解释器的路径
set(PYTHON_EXECUTABLE /usr/bin/python3)
# pip install pybind11  pybind11_DIR需要修改为python环境中的pybind11对应的路径
set(pybind11_DIR "/home/uos/.local/lib/python3.10/site-packages/pybind11/share/cmake/pybind11/")
# sudo apt install pybind11-dev first
find_package(pybind11 REQUIRED)
# add_subdirectory(pybind11)

pybind11_add_module(test test.cpp)