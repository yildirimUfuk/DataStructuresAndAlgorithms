#pragma once
#include<iostream>
#include<vector>
using namespace std;
class SearchInsertPosition35
{
public:
	/// <summary>
	/// Runtime: 8 ms, faster than 93.45% of C++ online submissions for Search Insert Position.
	/// Memory Usage : 9.6 MB, less than 96.04 % of C++ online submissions for Search Insert Position.
	/// </summary>
	/// <param name="nums"></param>
	/// <param name="target"></param>
	/// <returns></returns>
	int searchInsert(vector<int>& nums, int target);
	bool searchInsertTest();
};

