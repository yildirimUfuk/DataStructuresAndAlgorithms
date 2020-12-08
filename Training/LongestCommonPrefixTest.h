#pragma once
#include"LongestCommonPrefix.h"
#include<vector>
#include<iostream>
class LongestCommonPrefixTest
{
public:
	void longestCommonPrefixTest();
private:
	LongestCommonPrefix longestCommonPrefix;
	std::vector<bool>accuracy;
	bool Test1();
	bool Test2();
};

