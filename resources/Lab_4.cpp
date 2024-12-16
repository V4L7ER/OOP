#include "Class_4.1.h"

namespace lab4
{
    void rundew() {
        setlocale(LC_ALL, "RUS");
        system("chcp 1251 > NUL 2>&1");
        CMPLX cc(2, 2);
        Graphic dc1(1, 2);
        std::cout << "Вывод с помощью виртуальных функций класса наследника:" << std::endl;
        CMPLX result1 = dc1.Cmul(2);
        CMPLX result2 = dc1.Add(cc);
        std::cout << std::endl << "Обычный вывод:" << std::endl;
        result1.Print();
        std::cout << std::endl;
        result2.Print();
    }

}

int main() {
    lab4::rundew();
    return 0;
}