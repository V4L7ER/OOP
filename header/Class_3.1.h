#pragma once
#include <iostream>
#include <vector>
#include <algorithm> // Äëÿ std::sort

class ArrayMerger {
public:
    ArrayMerger(int* arr1, int n, int* arr2, int m);
    ~ArrayMerger();
    void mergeAndSort();
    void display() const;

private:
    int* mergedArray;
    int size;
};
