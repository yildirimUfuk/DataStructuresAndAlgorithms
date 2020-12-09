#pragma once
#include<iostream>
struct myNode
{
	int key;
	myNode* next;
	myNode(int key) :key(key), next(NULL) {}
};
class linkedList
{
public:
	myNode* doubleAproachAdd(myNode* root,int data);
	myNode* doubleAproachDelete(myNode* root, int data);
};

