#include "Class_2.h"
LongestWordFinder::LongestWordFinder(const std::string& text) {
    findLongestWord(text);
}

LongestWordFinder::~LongestWordFinder() {
    // Деструктор по умолчанию
}

const char* LongestWordFinder::getLongestWord() const {
    return longestWord;
}

bool LongestWordFinder::isDelimiter(char ch) const {
    return std::isspace(ch) || std::ispunct(ch);
}

void LongestWordFinder::findLongestWord(const std::string& text) {
    size_t maxLength = 0;
    size_t start = 0, end = 0;

    while (end <= text.length()) {
        if (end == text.length() || isDelimiter(text[end])) {
            if (end > start) {
                size_t wordLength = end - start;
                if (wordLength > maxLength) {
                    maxLength = wordLength;
                    longestWordCopy = text.substr(start, wordLength);
                    longestWord = longestWordCopy.c_str();
                }
            }
            start = end + 1;
        }
        ++end;
    }
}

