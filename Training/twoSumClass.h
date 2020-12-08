#pragma once
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class twoSumClass
{
public:
	void twoSumTest(vector<int>& nums,int target);
	vector<int> twoSum(vector<int>& nums, int target);
	vector<int> twoSum2(vector<int>& nums, int target);
	int lineerSearch(vector<int>&, uint16_t startIndex, int key);
};

