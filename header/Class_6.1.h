#include <iostream>

template <typename T>
class NumberProcessor {
public:
    NumberProcessor(T numbers[], int size);
    ~NumberProcessor(); // Деструктор для освобождения памяти
    T findMinPairSum();

    // Функция Print с бесконечным количеством аргументов
    void Print(const T& first);
    template<typename... Args>
    void Print(const T& first, const Args&... args);

private:
    T* numbers;
    int size;
};

// Реализация Print
template <typename T>
void NumberProcessor<T>::Print(const T& first) {
    std::cout << first << std::endl;
}

template <typename T>
template<typename... Args>
void NumberProcessor<T>::Print(const T& first, const Args&... args) {
    std::cout << first << " ";
    Print(args...); // Рекурсивный вызов для оставшихся аргументов
}