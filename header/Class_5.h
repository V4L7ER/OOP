#pragma once
#include <iostream>

class CMPLX {
public:
	CMPLX(float real, float image);
	CMPLX(const CMPLX& what);
	~CMPLX();
	CMPLX operator+(CMPLX& what) const;
	CMPLX operator+(float what) const;
	CMPLX operator-(CMPLX& what) const;
	CMPLX operator-(float what) const;
	CMPLX Cmul(float what) const;
	CMPLX Cmul(double what) const;
	void Print() const;
private:
	float re;
	float im;
};


