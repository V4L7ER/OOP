#include "Class_3.1.h"

ArrayMerger::ArrayMerger(int* arr1, int n, int* arr2, int m) {
    size = n + m; // Общий размер
    mergedArray = new int[size]; // Выделение памяти для объединенного массива

    // Копирование элементов из первого массива
    for (int i = 0; i < n; ++i) {
        mergedArray[i] = arr1[i];
    }
    // Копирование элементов из второго массива
    for (int i = 0; i < m; ++i) {
        mergedArray[n + i] = arr2[i];
    }
}

ArrayMerger::~ArrayMerger() {
    delete[] mergedArray; // Освобождение памяти
}

void ArrayMerger::mergeAndSort() {
    // Сортировка по возрастанию
    std::sort(mergedArray, mergedArray + size);
    // Реверсирование для получения убывающего порядка
    std::reverse(mergedArray, mergedArray + size);
}

void ArrayMerger::display() const {
    for (int i = 0; i < size; ++i) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;
}
