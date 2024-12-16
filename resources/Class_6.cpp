#include "Class_6.h"
IntegerProcessor::IntegerProcessor(int numbers[], int size) : size(size) {
    this->numbers = new int[size];
    for (int i = 0; i < size; ++i) {
        this->numbers[i] = numbers[i];
    }
}

IntegerProcessor::~IntegerProcessor() {
    delete[] numbers;
}

int IntegerProcessor::findMinPairSum() {
    int n = size / 2;
    int minSum = 2147483647;

    for (int i = 0; i < n; ++i) {
        int sum = numbers[i] + numbers[n + i];
        if (sum < minSum) {
            minSum = sum;
        }
    }

    return minSum;
}