#include "Class_3.1.h"

ArrayMerger::ArrayMerger(int* arr1, int n, int* arr2, int m) {
    size = n + m; // ����� ������
    mergedArray = new int[size]; // ��������� ������ ��� ������������� �������

    // ����������� ��������� �� ������� �������
    for (int i = 0; i < n; ++i) {
        mergedArray[i] = arr1[i];
    }
    // ����������� ��������� �� ������� �������
    for (int i = 0; i < m; ++i) {
        mergedArray[n + i] = arr2[i];
    }
}

ArrayMerger::~ArrayMerger() {
    delete[] mergedArray; // ������������ ������
}

void ArrayMerger::mergeAndSort() {
    // ���������� �� �����������
    std::sort(mergedArray, mergedArray + size);
    // �������������� ��� ��������� ���������� �������
    std::reverse(mergedArray, mergedArray + size);
}

void ArrayMerger::display() const {
    for (int i = 0; i < size; ++i) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;
}
