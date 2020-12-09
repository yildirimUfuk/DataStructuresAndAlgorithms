#pragma once
#include<vector>
#include"linkedList.h"
class linkedListTest
{
private:
	linkedList myList;
	std::vector<bool>addAccuracy;
	std::vector<bool>deleteAccuracy;
	myNode* root = NULL;
	std::vector<int>correctAnswer;
	bool addTest1();
	bool addTest2();
	bool addTest3();
	bool addTest4();
	void linkedListAddTests();
	void linkedListDeleteTest();
	void printValidity(std::vector<bool>accuracy);
public:
	void allTests();

};

