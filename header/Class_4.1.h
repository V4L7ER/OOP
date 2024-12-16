#include "Class_4.h"

class Graphic : public CMPLX {
public:
    Graphic(float real, float imag) : CMPLX(real, imag) {}

    // Переопределяем виртуальные функции
    CMPLX Cmul(float what) const override;
    CMPLX Add(const CMPLX& what) const override;
};