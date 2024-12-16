#pragma once
#include <iostream>

class CMPLX {
public:
    // Конструктор
    CMPLX(float real, float imag);
    CMPLX(const CMPLX& a);
    ~CMPLX() {}
    virtual CMPLX Cmul(float what) const;
    virtual CMPLX Add(const CMPLX& what) const;
    void Print() const;
protected:
    float re;
    float im;
};



