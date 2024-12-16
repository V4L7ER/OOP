#include "Class_4.1.h"
#include <iostream>

// ��������� �� �������������� �����
CMPLX Graphic::Cmul(float what) const {
    CMPLX result = CMPLX::Cmul(what);
    std::cout << "(" << re << ", " << im << ")" << " * " << what << " = ";
    result.Print();
    std::cout << std::endl;
    return result;
}

// ��������
CMPLX Graphic::Add(const CMPLX& what) const {
    CMPLX result = CMPLX::Add(what);
    std::cout << "(" << re << ", " << im << ")" << " + ";
    what.Print();
    std::cout << " = ";
    result.Print();
    std::cout << std::endl;
    return result;
}