#include "RomanToInteger.h"

int RomanToInteger::romanCharToIntValue(char c)
{
    switch (c) {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
    return 0;
}

int RomanToInteger::romanToInt(string s)
{
    int length = s.length();
    int value = 0;
    for (int i = 0; i < length; i++) {
        int thisChar = romanCharToIntValue(s[i]);
        int nextChar = romanCharToIntValue(s[i + 1]);
        if (thisChar < nextChar) {
            value = value + nextChar - thisChar;
            i++;
        }
        else {
            value = value + thisChar;
        }
    }
    return value;
}

bool RomanToInteger::romanToIntTest(string s, int value)
{
    if (romanToInt(s) == value)
        return true;
    return false;
}
