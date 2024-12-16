#include "Class_7.h"


CMPLX::CMPLX(float real, float image) : re(real), im(image) {};
CMPLX::CMPLX(const CMPLX& what) : re(what.re), im(what.im) {};

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


CMPLX CMPLX::operator*(float what) const {
	return CMPLX(re * what, im * what);
}

CMPLX CMPLX::operator*(double what) const {
	float f = (float)what;
	return CMPLX(re * f, im * f);
}


CMPLX& CMPLX::operator=(const CMPLX& what) {
	if (this != &what) { // Проверка на самоприсваивание
		re = what.re;
		im = what.im;
	}
	return *this; // Возврат ссылки на текущий объект
}

CMPLX& CMPLX::operator=(CMPLX&& what) noexcept {
	if (this != &what) {
		re = what.re;
		im = what.im;
		// Обнуляем перемещаемый объект
		what.re = 0;
		what.im = 0;
	}
	return *this;
}

CMPLX CMPLX::operator()(float real, float image) const {
	return CMPLX(real, image);
}

// Оператор вывода
std::ostream& operator<<(std::ostream& os, const CMPLX& c) {
	if (c.im > 0) {
		os << "(" << c.re << " + " << c.im << "*i)";
	}
	else if (c.im == 0) {
		os << c.re;
	}
	else {
		os << "(" << c.re << " - " << c.im << "*i)";
	}
	return os;
}

// Оператор ввода
std::istream& operator>>(std::istream& is, CMPLX& c) {
	char ch; // Для чтения символов '(' и ','
	is >> ch >> c.re >> ch >> c.im >> ch; // Ожидаем формат "(re, im)"
	return is;
}