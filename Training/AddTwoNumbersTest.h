#pragma once
#include"AddTwoNumbers.h"
#include<vector>

class AddTwoNumbersTest
{
public:
	bool addTwoNumbersTest();
private:
	AddTwoNumbers::ListNode* l1, * l2, * result;
	AddTwoNumbers addTwoNumbers;
	vector<bool> accuracy;
	bool test1();
	bool test2();
	bool test3();

};

