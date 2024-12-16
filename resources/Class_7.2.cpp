#include "Class_7.2.h"

Demo::Demo(char c1, float f1, float f2, int i, char c2)
    : c1(c1), f1(f1), f2(f2), i(i), c2(c2) {};

std::tuple<char, float, float, int, char> Demo::getFields() const {
    return std::make_tuple(c1, f1, f2, i, c2);
};