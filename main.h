#ifndef MAIN_H
#define MAIN_H

#include <vector>
using namespace std;

int SizeOfArray(const char *array);

char *_strncat(char *strDest, const char *strSource, int count);

bool ConsistOfDigits(const vector<char> &word);

bool IsPalindrom(const vector<char> &word);

vector<char> FindPalindromInString(vector<char>& word);

#endif