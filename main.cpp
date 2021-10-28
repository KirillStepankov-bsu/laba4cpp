#include <iostream>
#include "main.h"
#include <conio.h>
#include <vector>
#include "test.cpp"

using namespace std;

// part A

int SizeOfArray(const char *array) {
    int size = 0;
    for (int i = 0; *array; array++, i++)
        size++;
    return size;
}


char *_strncat(char *strDest, const char *strSource, int count) {
    int size_of_strSource = SizeOfArray(strSource);
    int size_of_strDest = SizeOfArray(strDest);

    count = size_of_strSource <= count ? size_of_strSource : count;

    for (int i = 0; i < count; i++)
        strDest[size_of_strDest + i] = strSource[i];

    strDest[size_of_strDest + count] = '\n';

    return strDest;
}

// part B

bool ConsistOfDigits(const vector<char> &word) {
    for (char i : word) {
        if (i < '0' || i > '9')
            return false;
    }
    return true;
}

bool IsPalindrom(const vector<char> &word) {
    for (int i = 0; i < (int) (word.size() / 2); i++) {
        if (word[i] != word[word.size() - 1 - i])
            return false;
    }
        return true;
}

void partB(const vector<char> &word, vector<char> &palindrom, int &palindrom_amount) {
    if (!ConsistOfDigits(word))
        return;
    if (!IsPalindrom(word))
        return;
    palindrom_amount++;
    palindrom.clear();
    for (int i = 0; i < word.size(); i++)
        palindrom.push_back(word[i]);
}

void PrintVector(const vector<char> &array) {
    for (auto i: array)
        cout << i;
    cout << endl;
}

vector<char> FindPalindromInString(vector<char>& word){
    vector<char> palindrom;
    int palindrom_amount = 0;

    char ch = getche();
    word.push_back(ch);
    while (ch != '\r') {
        ch = getche();
        if (ch == ' ' || ch == '\r') {
            partB(word, palindrom, palindrom_amount);
            if (palindrom_amount == 2)
                break;
            word.clear();
        } else {
            word.push_back(ch);
        }
    }
    return palindrom;
}

int main() {
    vector<char> word;
    vector<char> palindrom = FindPalindromInString(word);
    PrintVector(palindrom);
    Testing();
}