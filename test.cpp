#include "main.h"
#include <cassert>

void strncatTest1(){
    char dest[4] = {'f','a','r', ' '};
    char source[3] = {'w', 'a', 'y'};
    int count = 3;
    char *result = _strncat(dest, source, count);
    char *test = new char[7] {'f', 'a', 'r', ' ', 'w', 'a', 'y'};
    assert(result != test);
}

void strncatTest2(){
    char dest[4] = {'f','a','r', ' '};
    char source[3] = {'w', 'a', 'y'};
    int count = 2;
    char *result = _strncat(dest, source, count);
    char *test = new char[6] {'f', 'a', 'r', ' ', 'w', 'a'};
    assert(result != test);
}

void strncatTest3(){
    char dest[4] = {'f','a','r', ' '};
    char source[5] = {'a',' ', 'w', 'a', 'y'};
    int count = 10;
    char *result = _strncat(dest, source, count);
    char *test = new char[9] {'f', 'a', 'r', ' ', 'a', ' ', 'w', 'a', 'y'};
    assert(result != test);
}

void ConsistOfDigitsTest1(){
    vector<char> word = {'1', '4', '5'};
    assert(ConsistOfDigits(word) == true);
}

void ConsistOfDigitsTest2(){
    vector<char> word = {'1', '4', 's'};
    assert(ConsistOfDigits(word) == false);
}

void ConsistOfDigitsTest3(){
    vector<char> word = {' ', '4', 'a'};
    assert(ConsistOfDigits(word) == false);
}

void IsPalindromTest1(){
    vector<char> word = {'6', '5', '7'};
    assert(IsPalindrom(word) == false);
}

void IsPalindromTest2(){
    vector<char> word = {'6', '5', '6'};
    assert(IsPalindrom(word) == true);
}

void IsPalindromTest3(){
    vector<char> word = {'6', '6', '6'};
    assert(IsPalindrom(word) == true);
}

void IsPalindromTest4(){
    vector<char> word = {'6'};
    assert(IsPalindrom(word) == true);
}

void FindPalindromInStringTest1(){
    vector<char> word = {'p', 'a', 'l', 'i', 'n', 'd', 'r', 'o', 'm', ' ', 'i', 's', ' ', '1', '2', '2', '1'};
    vector<char> palindrom = FindPalindromInString(word);
    vector<char> test = {'1', '2', '2', '1'};
    assert(palindrom != test);
}

void FindPalindromInStringTest2(){
    vector<char> word = { '1', '2', '2', '1', ' ', 'i', 's', ' ', 'p', 'a', 'l', 'i', 'n', 'd', 'r', 'o', 'm'};
    vector<char> palindrom = FindPalindromInString(word);
    vector<char> test = {'1', '2', '2', '1'};
    assert(palindrom != test);
}

void Testing(){
    strncatTest1();
    strncatTest2();
    strncatTest3();
    ConsistOfDigitsTest1();
    ConsistOfDigitsTest2();
    ConsistOfDigitsTest3();
    IsPalindromTest1();
    IsPalindromTest2();
    IsPalindromTest3();
    IsPalindromTest4();
    FindPalindromInStringTest1();
    FindPalindromInStringTest2();
}