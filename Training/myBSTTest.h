#pragma once
#include<vector>
#include<set>
#include"myBST.h"
#include"printValidity.h"
class myBSTTest
{
private:
	myBST myBst;
	myBST myBst2;
	//number will be added to this list while if add a number or remove from the myBST. It will be used for correctles of myBST.
	std::set<int>correctList;
	void traversesTests();
	bool treePreorderderTraverseTest();
	bool treetPreorderTraverseWithStackTest();
	bool treeInorderTraverseTest();
	bool treeInorderTraverseWithStackTest();
	bool treePostOrderTraverseTest();
	bool treePostorderTraverseWithStackTest();
	void bstAddTest();
	bool addTest1();
	bool addTest2();
	bool addTest3();
	bool addTest4();
public:
	void allTest();
};

