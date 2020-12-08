#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
#include"MinCoinExchange.h"
using namespace std;
static class CoinExchangeTest
{
private:
	MinCoinExchange coinExchange;
	std::vector <bool>accuracy;
	bool Test1();//it for greedy algorithims
	bool Test2();//it fot greedy
	bool Test3();//it for dynamic probramming solving
	bool Test4();//it for dynamic programming
public:
	void coinExchangeTest();
};

