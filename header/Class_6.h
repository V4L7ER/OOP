#include <iostream>

class IntegerProcessor {
public:
    IntegerProcessor(int numbers[], int size);
    ~IntegerProcessor();
    int findMinPairSum();

    // ������� Print � ����������� ����������� ����������
    void Print(const int& first);
    template<typename... Args>
    void Print(const int& first, const Args&... args);

private:
    int* numbers;
    int size;
};

// ���������� Print
inline void IntegerProcessor::Print(const int& first) {
    std::cout << first << std::endl;
}

template<typename... Args>
void IntegerProcessor::Print(const int& first, const Args&... args) {
    std::cout << first << " ";
    Print(args...); // ����������� ����� ��� ���������� ����������
}