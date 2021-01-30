#pragma once
#include<vector>
#include<algorithm>
#include<iostream>
#include<map>
#include<iterator>
#include<set>
class _3Sum
{
public:
	std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
	std::vector<std::vector<int>> threeSum2(std::vector<int>& nums);//not goot
	std::vector<std::vector<int>> threeSum3(std::vector<int>& nums);//time exceeded
};

