#include "Class_7.1.h"

Manip::Manip(int cetw, int cetprec, int cetbase, char cetfl)
    : cetw(cetw), cetprec(cetprec), cetbase(cetbase), cetfl(cetfl) {}

Manip::~Manip() {}

std::ostream& operator<<(std::ostream& os, const Manip& c) {
    os << std::setw(c.cetw)
        << std::setprecision(c.cetprec + 1)
        << std::setbase(c.cetbase)
        << std::setfill(c.cetfl);
    return os;
}