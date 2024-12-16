#include "Class_1.h"
#include <iostream>
using namespace std;

// Инициализация как (real, imag)
CMPLX::CMPLX(float real, float imag) : re(real), im(imag) {}


CMPLX CMPLX::Add(CMPLX what) {
    // Сложение действительной и мнимой частей
    return CMPLX(re + what.re, im + what.im);
}

CMPLX CMPLX::Cmul(float what) {
    // Умножаем действительную и мнимую части на действительное число
    return CMPLX(re * what, im * what);
}

void CMPLX::Print() {
    // Вывод как (real, imag)
    std::cout << "(" << re << ", " << im << ")" << std::endl;
}

