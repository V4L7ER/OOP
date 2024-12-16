#include <iostream>
#include <tuple>
#include <string>

class Demo {
private:
    char c1;
    float f1;
    float f2;
    int i;
    char c2;

public:
    // Конструктор для инициализации переменных
    Demo(char c1, float f1, float f2, int i, char c2);
    std::tuple<char, float, float, int, char> getFields() const;
};