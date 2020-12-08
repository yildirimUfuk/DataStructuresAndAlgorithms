#pragma once
#include<iostream>
using namespace std;
class RomanToInteger
{
private:
	int romanCharToIntValue(char c);
public:
	int romanToInt(string s);
	bool romanToIntTest(string s, int value);
};

