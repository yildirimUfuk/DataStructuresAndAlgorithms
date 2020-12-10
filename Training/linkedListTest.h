#pragma once
#include<vector>
#include"linkedList.h"
class linkedListTest
{
private:
	linkedList myList;

	myNode* root = NULL;
	std::vector<int>correctAnswer;
	void linkedListAddTests();
	bool addTest1();
	bool addTest2();
	bool addTest3();
	bool addTest4();
	void linkedListDeleteTest();
	bool deleteTest1();
	bool deleteTest2();
	bool deleteTest3();
	bool deleteTest4();
	bool deleteTest5();
	void printValidity(std::vector<bool>*accuracy);
public:
	void allTests();

};

