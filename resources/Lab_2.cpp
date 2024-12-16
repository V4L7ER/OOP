#include "Class_2.h"

namespace lab2
{
    void rundew() {
        setlocale(LC_ALL, "RUS");
        std::string text = "Так называемый текст, можно сделать ввод с клавиатуры";
        std::cout << "Текст: " << text << std::endl;
        LongestWordFinder finder(text);
        std::cout << "Самое длинное слово: " << finder.getLongestWord() << std::endl;
    }

}
int main() {
    
    lab2::rundew();
    return 0;
}
