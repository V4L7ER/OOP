#include <string>
#include <iostream>
#include <cctype>
#include <limits>
#include <cstring> // Для использования strcpy и strlen


class Text {
public:
    Text(); // Конструктор без параметров
    ~Text();

    void setText(const std::string& text); // Метод для установки текста
    const char* getLongestWord() const;
    const char* getShortestWord() const;

private:
    void findWords();
    bool isDelimiter(char ch) const;

    std::string text; // Хранение текста
    char* longestWord; // Изменено на char*
    char* shortestWord; // Изменено на char*
};
