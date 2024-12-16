#include "Class_6.h"
#include "Class_6.1.h"

namespace lab6
{
    void rundew() {
        setlocale(LC_ALL, "RUS");
        system("chcp 1251 > NUL 2>&1");
        int choice = 1;

        while (choice != 0) {
            std::cout << "Выберите тип:" << std::endl;
            std::cout << "1. Массив целых чисел" << std::endl;
            std::cout << "2. Массив вещественных чисел" << std::endl;
            std::cout << "0. Выход из программы" << std::endl;
            std::cout << std::endl << "Выберите действие: ";
            std::cin >> choice;
            std::cout << std::endl;

            switch (choice) {
            case 1: {
                try {
                    int n;
                    std::cout << "Введите количество целых чисел (должно быть четным): ";
                    std::cin >> n;

                    if (n % 2 != 0) {
                        throw std::invalid_argument("Количество должно быть четным.");
                    }

                    int* numbers = new int[n];
                    std::cout << "Введите " << n << " целых чисел:" << std::endl;
                    for (int i = 0; i < n; ++i) {
                        std::cin >> numbers[i];
                    }

                    IntegerProcessor processor(numbers, n);
                    std::cout << "Минимальная сумма пары: " << processor.findMinPairSum() << std::endl;
                    std::cout << "Пример работы функции Print (выод двух первых элементов массива): " << std::endl;
                    processor.Print(numbers[0], numbers[1]); // Пример вызова Print

                    delete[] numbers;
                }
                catch (const std::exception& e) {
                    std::cerr << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 2: {
                try {
                    int n;
                    std::cout << "Введите количество вещественных чисел (должно быть четным): ";
                    std::cin >> n;

                    if (n % 2 != 0) {
                        throw std::invalid_argument("Количество должно быть четным.");
                    }

                    double* numbers = new double[n];
                    std::cout << "Введите " << n << " вещественных чисел:" << std::endl;
                    for (int i = 0; i < n; ++i) {
                        std::cin >> numbers[i];
                    }

                    NumberProcessor<double> processor(numbers, n);
                    std::cout << "Минимальная сумма пары: " << processor.findMinPairSum() << std::endl;
                    std::cout << "Пример работы функции Print (вывод двух первых элементов массива): " << std::endl;
                    processor.Print(numbers[0], numbers[1]); // Пример вызова Print

                    delete[] numbers;
                }
                catch (const std::exception& e) {
                    std::cerr << "Ошибка: " << e.what() << std::endl;
                }
                break;
            }
            case 0:
                std::cout << "Выход из программы." << std::endl;
                break;
            default:
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова." << std::endl;
                break;
            }
        }
    }

}

int main() {
    
    lab6::rundew();
    return 0;
}