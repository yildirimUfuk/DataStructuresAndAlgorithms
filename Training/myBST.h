#pragma once
#include<iostream>
#include<vector>
#include<stack>
struct twoChieldsNode
{
	int key;
	twoChieldsNode* right;
	twoChieldsNode* left;
	twoChieldsNode(int key) :key(key), right(NULL), left(NULL) {}
	twoChieldsNode(int key, twoChieldsNode* right, twoChieldsNode* left) :key(key), right(right), left(left) {}
};
class myBST
{
private:

	twoChieldsNode** find(int& key, twoChieldsNode** iter);
	void eraseAll(twoChieldsNode* root); // this will be used for destructer.
	twoChieldsNode* root;
	std::vector<twoChieldsNode*> traversedList; // this used with stack and recursive metohod. Thats wht it holds pointer.
public:
	myBST() :root(NULL) {}
	myBST(bool deneme);
	~myBST();
	void clearTraversedList() { traversedList.clear(); }
	std::vector<twoChieldsNode*> getTraversedList() { return traversedList; }
	void add(int key);
	void remove(int key);
	void treePreorderTraverser(twoChieldsNode* iter);
	void treePreorderTraverserWithStack();
	void treeInorderTraverser(twoChieldsNode* iter);
	void treeInorderTraverseWithStack();
	void treePostorderTraverser(twoChieldsNode* iter);
	void treePostorderTraverseWithStack();
	twoChieldsNode* find(int key);
	twoChieldsNode* min();
	twoChieldsNode* max();
	twoChieldsNode* getRoot() { return root; }
};

