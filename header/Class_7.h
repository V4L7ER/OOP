#include <iostream>

class CMPLX {
public:
	CMPLX(float real, float image);
	CMPLX(const CMPLX& what);
	~CMPLX();
	// Оператор присваивания по перемещению
	CMPLX& operator=(CMPLX&& what) noexcept;
	// Перегрузка оператора () для функции
	CMPLX operator()(float real, float image) const;
	// Операторы ввода и вывода в поток
	friend std::ostream& operator<<(std::ostream& os, const CMPLX& c);
	friend std::istream& operator>>(std::istream& is, CMPLX& c);
	CMPLX operator+(CMPLX& what) const;
	CMPLX operator+(float what) const;
	CMPLX operator-(CMPLX& what) const;
	CMPLX operator-(float what) const;
	CMPLX operator*(float what) const;
	CMPLX operator*(double what) const;
	CMPLX& operator=(const CMPLX& what);
private:
	float re;
	float im;
};