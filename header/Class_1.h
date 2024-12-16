#pragma once
class CMPLX
{
public:
	CMPLX(float real, float imag); /*2 Инициализация как (real,imag) */
	CMPLX Add(CMPLX what); /*6 Сложение */
	CMPLX Cmul(float what); /*9 Умножение на действительное число*/
	void Print();
private:
	float re;
	float im;
};


