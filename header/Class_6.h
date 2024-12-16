#include <iostream>

class IntegerProcessor {
public:
    IntegerProcessor(int numbers[], int size);
    ~IntegerProcessor();
    int findMinPairSum();

    // Функция Print с бесконечным количеством аргументов
    void Print(const int& first);
    template<typename... Args>
    void Print(const int& first, const Args&... args);

private:
    int* numbers;
    int size;
};

// Реализация Print
inline void IntegerProcessor::Print(const int& first) {
    std::cout << first << std::endl;
}

template<typename... Args>
void IntegerProcessor::Print(const int& first, const Args&... args) {
    std::cout << first << " ";
    Print(args...); // Рекурсивный вызов для оставшихся аргументов
}