#include "Class_6.1.h"
#include <iostream>

template <typename T>
NumberProcessor<T>::NumberProcessor(T numbers[], int size) : size(size) {
    this->numbers = new T[size];
    for (int i = 0; i < size; ++i) {
        this->numbers[i] = numbers[i];
    }
}

template <typename T>
NumberProcessor<T>::~NumberProcessor() {
    delete[] numbers;
}

template <typename T>
T NumberProcessor<T>::findMinPairSum() {
    int n = size / 2;
    T minSum = (T)2147483647; // Максимальное значение для int или double

    for (int i = 0; i < n; ++i) {
        T sum = numbers[i] + numbers[n + i];
        if (sum < minSum) {
            minSum = sum;
        }
    }

    return minSum;
}



// Явная инстанциация шаблона
template class NumberProcessor<double>;
template class NumberProcessor<float>;