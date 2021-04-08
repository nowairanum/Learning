#pragma once

#include <pybind11/pybind11.h>
#include "Pet.h"
#include "Tree.h"

namespace py = pybind11;

PYBIND11_MODULE(CX, m) {
    // optional module docstring
    m.doc() = "pybind11 example plugin";

    // bindings to Pet class
    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string&, int>())
        .def("go_for_a_walk", &Pet::go_for_a_walk)
        .def("get_hunger", &Pet::get_hunger)
        .def("get_name", &Pet::get_name)
        .def("info", &Pet::info);

    py::class_<node>(m, "node")
        .def(py::init<int>())
        .def("newNode", newNode)
        .def("size", size)
        .def("count_tree", count_tree);

 /*   py::class_<Fraction>(m, "Fraction")
        .def(py::init<int>())
        .def("gcd", gcd)
        .def("Fraction", Fraction)
        .def("num", num)
        .def("den", den)
        .def("operator*", operator*)
        .def("print_on", print_on);*/
}