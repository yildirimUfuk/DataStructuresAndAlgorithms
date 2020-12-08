//Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0 ? Find all unique triplets in the array which gives the sum of zero.
//
//Notice that the solution set must not contain duplicate triplets.
//
//
//
//Example 1:
//
//Input: nums = [-1, 0, 1, 2, -1, -4]
//Output : [[-1, -1, 2], [-1, 0, 1]]
//Example 2 :
//
//	Input : nums = []
//	Output : []
//	Example 3 :
//
//	Input : nums = [0]
//	Output : []
#pragma once
#include<iostream>
#include"_3Sum.h"
class _3SumTest
{
public:
	void globallTest();
private:
	_3Sum sum3;
	std::vector<bool> accuracy;
	bool test1();
	bool test2();
	bool test3();
	bool test4();
	bool test5();
	bool test6();//its for second metod
};

