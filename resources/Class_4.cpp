#include "Class_4.h"
#include <windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

CMPLX::CMPLX(float real, float imag) : re(real), im(imag) {}

CMPLX::CMPLX(const CMPLX& a) : re(a.re * 2), im(a.im + 2) {
    SetConsoleTextAttribute(hConsole, 10);
    std::cout << "\n" << "¬ызвалс€ конструктор копировани€: " << this;
    SetConsoleTextAttribute(hConsole, 0);
}

// —ложение
CMPLX CMPLX::Add(const CMPLX& what) const {
    return CMPLX(re + what.re, im + what.im);
}

// ”множение на действительное число
CMPLX CMPLX::Cmul(float what) const {
    return CMPLX(re * what, im * what);
}

// ¬ывод в виде У(УreФ,Ф imФ)Ф
void CMPLX::Print() const {
    std::cout << "(" << re << ", " << im << ")";
}