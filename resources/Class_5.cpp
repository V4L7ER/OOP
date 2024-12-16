#include "Class_5.h"
CMPLX::CMPLX(float real, float image) : re(real), im(image) {};


CMPLX::CMPLX(const CMPLX& what) {
	std::cout << "Конструктор копирования сработал: " << this;
}

CMPLX::~CMPLX() {}

CMPLX CMPLX::operator+(CMPLX& what) const {
	return CMPLX(re + what.re, im + what.re);
}

CMPLX CMPLX::operator+(float what) const {
	return CMPLX(re + what, im + what);
}

CMPLX CMPLX::operator-(CMPLX& what) const {
	return CMPLX(re - what.re, im - what.re);
}

CMPLX CMPLX::operator-(float what) const {
	return CMPLX(re - what, im - what);
}


CMPLX CMPLX::Cmul(float what) const {
	return CMPLX(re * what, im * what);
}

CMPLX CMPLX::Cmul(double what) const {
	float f = (float)what;
	return CMPLX(re * f, im * f);
}

void CMPLX::Print() const {
	std::cout << "(" << re << ", " << im << ")" << std::endl;
}
