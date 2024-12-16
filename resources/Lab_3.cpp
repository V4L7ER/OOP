#include "Class_3.h"
#include "Class_3.1.h"

namespace lab3
{
    void rundew() {
        setlocale(LC_ALL, "RUS");
        system("chcp 1251 > NUL 2>&1");
        int arr1[] = { 1, 3, 5, 7 };
        int arr2[] = { 2, 4, 6, 8 };

        ArrayMerger merger(arr1, 4, arr2, 4); // Создание объекта с двумя массивами
        merger.mergeAndSort(); // Объединение и сортировка
        std::cout << "Объединенный массив в порядке убывания: ";
        merger.display(); // Вывод результата

        Text textFinder; // Создание объекта без параметров

        std::string text;
        std::cout << "Введите текст: ";
        std::getline(std::cin, text);

        textFinder.setText(text); // Установка текста через метод

        std::cout << "Выберите, что вы хотите найти:\n1. Самое длинное слово\n2. Самое короткое слово\n";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Самое длинное слово: " << textFinder.getLongestWord() << std::endl;
        }
        else if (choice == 2) {
            std::cout << "Самое короткое слово: " << textFinder.getShortestWord() << std::endl;
        }
        else {
            std::cout << "Неверный выбор." << std::endl;
        }
    }

}

int main() {
    
    lab3::rundew();
    return 0;
}

