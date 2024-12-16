#pragma once
#include <cctype>
#include <string>
#include <iostream>
class LongestWordFinder {
public:
    LongestWordFinder(const std::string& text);
    ~LongestWordFinder();

    const char* getLongestWord() const;

private:
    void findLongestWord(const std::string& text);
    bool isDelimiter(char ch) const;

    const char* longestWord;
    std::string longestWordCopy;
};


