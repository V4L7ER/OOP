#include "Class_3.h"

Text::Text() : longestWord(nullptr), shortestWord(nullptr) {
    // Конструктор инициализирует указатели на nullptr
}

Text::~Text() {
    delete[] longestWord; // Освобождение памяти для самого длинного слова
    delete[] shortestWord; // Освобождение памяти для самого короткого слова
}

void Text::setText(const std::string& inputText) {
    text = inputText; // Установка текста
    findWords(); // Поиск слов после установки текста
}

const char* Text::getLongestWord() const {
    return longestWord;
}

const char* Text::getShortestWord() const {
    return shortestWord;
}

bool Text::isDelimiter(char ch) const {
    return std::isspace(ch) || std::ispunct(ch);
}

void Text::findWords() {
    size_t maxLength = 0;
    size_t minLength = std::numeric_limits<size_t>::max();
    size_t start = 0, end = 0;

    while (end <= text.length()) {
        if (end == text.length() || isDelimiter(text[end])) {
            if (end > start) {
                size_t wordLength = end - start;
                if (wordLength > maxLength) {
                    maxLength = wordLength;
                    delete[] longestWord; // Освобождение предыдущего слова
                    longestWord = new char[wordLength + 1]; // Выделение новой памяти
                    // Изменение на strncpy_s
                    strncpy_s(longestWord, wordLength + 1, text.c_str() + start, wordLength);
                    longestWord[wordLength] = '\0'; // Добавление завершающего нуля
                }
                if (wordLength < minLength) {
                    minLength = wordLength;
                    delete[] shortestWord; // Освобождение предыдущего слова
                    shortestWord = new char[wordLength + 1]; // Выделение новой памяти
                    // Изменение на strncpy_s
                    strncpy_s(shortestWord, wordLength + 1, text.c_str() + start, wordLength);
                    shortestWord[wordLength] = '\0'; // Добавление завершающего нуля
                }
            }
            start = end + 1;
        }
        ++end;
    }
}
