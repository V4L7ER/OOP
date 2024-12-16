
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

class Manip {
public:
    Manip(int cetw, int cetprec, int cetbase, char cetfl);
    ~Manip();
    friend std::ostream& operator<<(std::ostream& os, const Manip& c);
private:
    int cetw;      // ������ ����
    int cetprec;   // ���������� ������ ����� �������
    int cetbase;   // ������� ���������
    char cetfl;    // ������ �����������
};