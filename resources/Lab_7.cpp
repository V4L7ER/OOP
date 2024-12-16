#include "Class_7.h"
#include "Class_7.1.h"
#include "Class_7.2.h"

namespace lab7
{
    void rundew() {
        setlocale(LC_ALL, "RUS");
        system("chcp 1251 > NUL 2>&1");
        int i;
        float f1, f2;
        char c1, c2;
        CMPLX cmplx(0, 0);
        std::ofstream outputFile("output.txt");

        // Создаем объекты Manip заранее
        Manip manip1(6, 1, 16, '_'); // Для вывода с 1 знаком после запятой
        Manip manip2(6, 4, 16, '_'); // Для вывода с 4 знаками после запятой
        Manip manip3(6, 3, 16, '_'); // Для вывода с 3 знаками после запятой
        Demo demo(' ', 0.0f, 0.0f, 0, ' '); // Создаем объект Demo заранее
        std::tuple<char, float, float, int, char> fields; // Объявляем кортеж заранее

        int choice = 1;
        while (choice != 0) {
            std::cout << "Переменные вводятся в таком порядке: c1 f1 f2 i c2; Шир. - 6; Д.ч. - 1 4 3; Сист. - О " << std::endl << "Выберите действие:" << std::endl;
            std::cout << "1. Ввести/вывести переменные (Manip)" << std::endl;
            std::cout << "2. Ввести/вывести комплексное число(перегрузка операторов CMPLX)" << std::endl;
            std::cout << "3. Ввести/вывести кортеж (std::tuple)" << std::endl;
            std::cout << "0. Выход из программы" << std::endl;
            std::cout << "Выберите действие: ";
            std::cin >> choice;
            std::cout << std::endl;

            switch (choice) {
            case 1:
                std::cout << "Введите char1 (c1): "; std::cin >> c1; std::cout << std::endl;
                std::cout << "Введите float1 (f1): "; std::cin >> f1; std::cout << std::endl;
                std::cout << "Введите float2 (f2): "; std::cin >> f2; std::cout << std::endl;
                std::cout << "Введите int (i): "; std::cin >> i; std::cout << std::endl;
                std::cout << "Введите char2 (c2): "; std::cin >> c2; std::cout << std::endl;

                std::cout << "Вывод (f1 f2 c2 i c1 - 6 - 1 4 3 - О): " << std::endl;
                std::cout << manip1 << f1 << std::endl; // f1 с 1 знаком после запятой
                std::cout << manip2 << f1 << std::endl; // f1 с 4 знаками после запятой
                std::cout << manip3 << f1 << std::endl; // f1 с 3 знаками после запятой
                std::cout << manip1 << f2 << std::endl; // f2 с 1 знаком после запятой
                std::cout << manip2 << f2 << std::endl; // f2 с 4 знаками после запятой
                std::cout << manip3 << f2 << std::endl; // f2 с 3 знаками после запятой
                std::cout << manip1 << c2 << std::endl; // c2
                std::cout << manip1 << i << std::endl;  // i
                std::cout << manip1 << c1 << std::endl; // c1

                // Запись в файл
                outputFile << manip1 << f1 << std::endl;
                outputFile << manip2 << f1 << std::endl;
                outputFile << manip3 << f1 << std::endl;
                outputFile << manip1 << f2 << std::endl;
                outputFile << manip2 << f2 << std::endl;
                outputFile << manip3 << f2 << std::endl;
                outputFile << manip1 << c2 << std::endl;
                outputFile << manip1 << i << std::endl;
                outputFile << manip1 << c1 << std::endl;
                break;
            case 2:
                std::cout << "Комплексное число сейчас: " << cmplx << std::endl;
                std::cout << "Введите новое: "; std::cin >> cmplx;
                std::cout << std::endl << "Новое комплексное число: " << cmplx << std::endl;
                outputFile << cmplx << std::endl;
                break;
            case 3:
                std::cout << "Введите char1 (c1): "; std::cin >> c1; std::cout << std::endl;
                std::cout << "Введите float1 (f1): "; std::cin >> f1; std::cout << std::endl;
                std::cout << "Введите float2 (f2): "; std::cin >> f2; std::cout << std::endl;
                std::cout << "Введите int (i): "; std::cin >> i; std::cout << std::endl;
                std::cout << "Введите char2 (c2): "; std::cin >> c2; std::cout << std::endl;

                // Обновляем объект Demo с новыми значениями
                demo = Demo(c1, f1, f2, i, c2);
                fields = demo.getFields(); // Получаем кортеж с переменными

                std::cout << "Вывод переменных из кортежа: " << std::endl;
                std::cout << "c1: " << std::get<0>(fields) << std::endl;
                std::cout << "f1: " << std::get<1>(fields) << std::endl;
                std::cout << "f2: " << std::get<2>(fields) << std::endl;
                std::cout << "i: " << std::get<3>(fields) << std::endl;
                std::cout << "c2: " << std::get<4>(fields) << std::endl;
                outputFile << "Вывод переменных из кортежа: " << std::endl;
                outputFile << "c1: " << std::get<0>(fields) << std::endl;
                outputFile << "f1: " << std::get<1>(fields) << std::endl;
                outputFile << "f2: " << std::get<2>(fields) << std::endl;
                outputFile << "i: " << std::get<3>(fields) << std::endl;
                outputFile << "c2: " << std::get<4>(fields) << std::endl;
                break;
            case 0:
                outputFile.close();
            }
        }
    }

}

int main() {
    lab7::rundew();
}