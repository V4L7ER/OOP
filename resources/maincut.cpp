﻿#include <windows.h>
#include "Lab_1.cpp"
#include "Lab_2.cpp"
#include "Lab_3.cpp"
#include "Lab_4.cpp"
#include "Lab_5.cpp"
#include "Lab_6.cpp"
#include "Lab_7.cpp"


// Функция для установки цвета текста
void setColor(int textColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

int main() {
    setlocale(LC_ALL, "Rus");
    int choice{ 0 };
    while (true) {
        setColor(9, 0);
        std::cout << "============[МЕНЮ]============\n";
        setColor(13, 0);
        std::cout << "Выберите программу для запуска:\n";
        setColor(7, 0);
        std::cout << "1. Программа Lab_1\n";
        std::cout << "2. Программа Lab_2\n";
        std::cout << "3. Программа Lab_3\n";
        std::cout << "4. Программа Lab_4\n";
        std::cout << "5. Программа Lab_5\n";
        std::cout << "6. Программа Lab_6\n";
        std::cout << "7. Программа Lab_7\n";
        setColor(14, 0);
        std::cout << "-1. Очистить консоль\n";
        setColor(13, 0);
        std::cout << "0. Выход\n";
        setColor(10, 0);
        std::cout << "Ваш выбор: ";
        setColor(7, 0);
        std::cin >> choice;

        switch (choice) {
        case -1:
            system("cls");
            break;
        case 1:
            lab1::rundew();
            break;
        case 2:
            lab2::rundew();
            break;
        case 3:
            lab3::rundew();
            break;
        case 4:
            lab4::rundew();
            break;
        case 5:
            lab5::rundew();
            break;
        case 6:
            lab6::rundew();
            break;
        case 7:
            lab7::rundew();
            break;
        case 0:
            setColor(13, 0);
            std::cout << "Выход из программы.\n";
            return 0;
        default:
            setColor(12, 0);
            std::cout << "Некорректный выбор. Повторите попытку.\n";
        }
    }
}