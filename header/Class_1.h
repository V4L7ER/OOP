#pragma once
class CMPLX
{
public:
	CMPLX(float real, float imag); /*2 ������������� ��� (real,imag) */
	CMPLX Add(CMPLX what); /*6 �������� */
	CMPLX Cmul(float what); /*9 ��������� �� �������������� �����*/
	void Print();
private:
	float re;
	float im;
};


