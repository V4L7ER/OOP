#include <string>
#include <iostream>
#include <cctype>
#include <limits>
#include <cstring> // ��� ������������� strcpy � strlen


class Text {
public:
    Text(); // ����������� ��� ����������
    ~Text();

    void setText(const std::string& text); // ����� ��� ��������� ������
    const char* getLongestWord() const;
    const char* getShortestWord() const;

private:
    void findWords();
    bool isDelimiter(char ch) const;

    std::string text; // �������� ������
    char* longestWord; // �������� �� char*
    char* shortestWord; // �������� �� char*
};
