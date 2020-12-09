#include "linkedListTest.h"




bool linkedListTest::addTest1()
{
	correctAnswer.push_back(5);
	root=myList.doubleAproachAdd(root, 5);
	for (auto iter : correctAnswer) {
		if (root->key != iter) return false;
	}
	return true;
}

bool linkedListTest::addTest2()
{
	correctAnswer.push_back(6);
	root = myList.doubleAproachAdd(root,6);
	myNode* listIter = root;
	for (auto iter : correctAnswer) {
		if (iter != listIter->key) return false;
		listIter = listIter->next;
	}
}

bool linkedListTest::addTest3()
{
	correctAnswer.insert(correctAnswer.begin(), 3);
	root = myList.doubleAproachAdd(root,3);
	myNode* listIter = root;
	for (auto iter : correctAnswer) {
		if (iter != listIter->key) return false;
		listIter = listIter->next;
	}
	return true;
}

bool linkedListTest::addTest4()
{
	correctAnswer.insert(correctAnswer.begin() + 1, 4);
	root = myList.doubleAproachAdd(root, 4);
	correctAnswer.insert(correctAnswer.begin(), 1);
	root = myList.doubleAproachAdd(root,1);
	myNode* listIter = root;
	for (auto iter : correctAnswer) {
		if (iter != listIter->key) return false;
		listIter = listIter->next;
	}
	return true;
}

void linkedListTest::linkedListAddTests()
{
	addAccuracy.push_back(addTest1());
	addAccuracy.push_back(addTest2());
	addAccuracy.push_back(addTest3());
	addAccuracy.push_back(addTest4());
	printValidity(addAccuracy);
}

void linkedListTest::linkedListDeleteTest()
{

}

void linkedListTest::allTests()
{
	linkedListAddTests();
}

void linkedListTest::printValidity(std::vector<bool> accuracy)
{
	int counter = 0;
	for (auto item : accuracy)
		item ? std::cout << "Test " << ++counter << " bas been compleated.\n" : std::cout << "! Test " << ++counter << " has been failed \n";
}