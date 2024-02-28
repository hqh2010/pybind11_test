#include <pybind11/pybind11.h>
#include <iostream>

namespace py = pybind11;

int demo(int a, int b)
{
    int result = 0;

    result = a * b;

    std::cout << "result is " << result << std::endl;

    return result;
}

PYBIND11_MODULE(test, m)
{
    // 可选，说明这个模块的作用
    m.doc() = "pybind11 test plugin";
    // def("提供给python调用的方法名"， &实际操作的函数， "函数功能说明"， 默认参数). 其中函数功能说明为可选
    m.def("demo", &demo, "A function which multiplies two numbers", py::arg("a")=6, py::arg("b")=7);
}
