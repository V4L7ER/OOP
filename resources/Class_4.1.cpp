#include "Class_4.1.h"
#include <iostream>

// Умножение на действительное число
CMPLX Graphic::Cmul(float what) const {
    CMPLX result = CMPLX::Cmul(what);
    std::cout << "(" << re << ", " << im << ")" << " * " << what << " = ";
    result.Print();
    std::cout << std::endl;
    return result;
}

// Сложение
CMPLX Graphic::Add(const CMPLX& what) const {
    CMPLX result = CMPLX::Add(what);
    std::cout << "(" << re << ", " << im << ")" << " + ";
    what.Print();
    std::cout << " = ";
    result.Print();
    std::cout << std::endl;
    return result;
}