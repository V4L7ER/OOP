#include <iostream>

template <typename T>
class NumberProcessor {
public:
    NumberProcessor(T numbers[], int size);
    ~NumberProcessor(); // ���������� ��� ������������ ������
    T findMinPairSum();

    // ������� Print � ����������� ����������� ����������
    void Print(const T& first);
    template<typename... Args>
    void Print(const T& first, const Args&... args);

private:
    T* numbers;
    int size;
};

// ���������� Print
template <typename T>
void NumberProcessor<T>::Print(const T& first) {
    std::cout << first << std::endl;
}

template <typename T>
template<typename... Args>
void NumberProcessor<T>::Print(const T& first, const Args&... args) {
    std::cout << first << " ";
    Print(args...); // ����������� ����� ��� ���������� ����������
}