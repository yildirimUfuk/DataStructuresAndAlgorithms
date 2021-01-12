#pragma once
#include<vector>
#include<iostream>
#include"DivideTwoIntegers.h"
class DivideTwoIntegersTests
{
private:
	DivideTwoIntegers d;
	std::vector <bool>accuracy;
	std::vector<int> expected;
	std::vector<int> myAnswer;
	bool Test0();
	bool Test1();
	bool Test2();
	bool Test3();
	bool Test4();
	bool Test5();
public:
	void divideTwoIntegersTests();
};

