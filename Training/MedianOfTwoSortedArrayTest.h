#pragma once
#include"MedianOfTwoSortedArrays.h"
#include<vector>
#include<iostream>
using namespace std;
class MedianOfTwoSortedArrayTest
{
public:
	void medianOfTwoSortedArraysTest();
private:
	MedianOfTwoSortedArrays medianOfTwoSortedArrays;
	vector<int> l1, l2;
	vector<bool> accuracy;
	vector<bool>accuracy2;
	bool Test1();//this for first solution.
	bool Test2();//this for first solution.
	bool Test3();//this for second solution.
	bool Test4();//this for second solution.
};

