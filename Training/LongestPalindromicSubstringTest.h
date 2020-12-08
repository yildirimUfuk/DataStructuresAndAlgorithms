#pragma once
#include<vector>
#include<iostream>
using namespace std;
#include"LongestPalindromicSubstring.h"
class LongestPalindromicSubstringTest
{
public:
	void longestPalindromicSubstringTest();
private:
	LongestPalindromicSubstring lps;
	vector<bool> accurance;
	bool test1();
	bool test2();
	bool test3();
	bool test4();
	bool test5();
	bool test6();
};

