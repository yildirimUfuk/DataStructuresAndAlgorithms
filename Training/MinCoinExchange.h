#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define findMin(a,b)(a<b?a:b)
class MinCoinExchange
{
public:
	int MinCoinExchangeGreedy(vector<int>& coins, int amount);
	int minCoinExchangeDynamicProgramming(vector<int>& coins, int amount);
};

