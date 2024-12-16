#include "Class_1.h"
#include <iostream>
using namespace std;


namespace lab1
{
    void rundew() {
        float a1, a2, b1, b2;
        setlocale(LC_ALL, "Russian");
        cout << "Это программа-пример работы класса 'CMPLX'" << "\n" << "Введите первое комплексное число в виде двух чисел где первое число дествительное, а второе - мнимое." << "\n";
        cout << "Между числами поставьте space или enter" << "\n";
        cout << "Ввод:" << "\n";
        cin >> a1 >> a2;
        cout << "Введите второе комплексное число точно также" << "\n";
        cout << "Ввод:" << "\n";
        cin >> b1 >> b2;
        CMPLX num1(a1, a2);
        CMPLX num2(b1, b2);
        cout << "Вы ввели два комплексных числа:" << "\n" << "Первое число:" << "\n" << a1 << std::showpos << a2 << "i" << std::noshowpos << "\n";
        cout << "Второе число:" << "\n" << b1 << std::showpos << b2 << "i" << std::noshowpos << "\n";
        cout << "Далее, согласно заданию комплексные числа будут выводиться в виде (“re”,” im”)" << "\n";
        cout << "Сумма этих комплексных чисел:" << "\n";
        CMPLX sum = num1.Add(num2); // Сложение чисел
        sum.Print();
        cout << "Первое комплексное число умноженное на 2:" << "\n";
        CMPLX product = num1.Cmul(2.0); // Умножаем num1 на 2
        product.Print();
    }
    
}
int main() {
    lab1::rundew();
}

