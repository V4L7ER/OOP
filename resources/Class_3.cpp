#include "Class_3.h"

Text::Text() : longestWord(nullptr), shortestWord(nullptr) {
    // ����������� �������������� ��������� �� nullptr
}

Text::~Text() {
    delete[] longestWord; // ������������ ������ ��� ������ �������� �����
    delete[] shortestWord; // ������������ ������ ��� ������ ��������� �����
}

void Text::setText(const std::string& inputText) {
    text = inputText; // ��������� ������
    findWords(); // ����� ���� ����� ��������� ������
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
                    delete[] longestWord; // ������������ ����������� �����
                    longestWord = new char[wordLength + 1]; // ��������� ����� ������
                    // ��������� �� strncpy_s
                    strncpy_s(longestWord, wordLength + 1, text.c_str() + start, wordLength);
                    longestWord[wordLength] = '\0'; // ���������� ������������ ����
                }
                if (wordLength < minLength) {
                    minLength = wordLength;
                    delete[] shortestWord; // ������������ ����������� �����
                    shortestWord = new char[wordLength + 1]; // ��������� ����� ������
                    // ��������� �� strncpy_s
                    strncpy_s(shortestWord, wordLength + 1, text.c_str() + start, wordLength);
                    shortestWord[wordLength] = '\0'; // ���������� ������������ ����
                }
            }
            start = end + 1;
        }
        ++end;
    }
}
