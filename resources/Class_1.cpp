#include "Class_1.h"
#include <iostream>
using namespace std;

// ������������� ��� (real, imag)
CMPLX::CMPLX(float real, float imag) : re(real), im(imag) {}


CMPLX CMPLX::Add(CMPLX what) {
    // �������� �������������� � ������ ������
    return CMPLX(re + what.re, im + what.im);
}

CMPLX CMPLX::Cmul(float what) {
    // �������� �������������� � ������ ����� �� �������������� �����
    return CMPLX(re * what, im * what);
}

void CMPLX::Print() {
    // ����� ��� (real, imag)
    std::cout << "(" << re << ", " << im << ")" << std::endl;
}

