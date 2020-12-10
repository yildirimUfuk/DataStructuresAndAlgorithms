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
	std::vector<bool>addAccuracy;
	addAccuracy.push_back(addTest1());
	addAccuracy.push_back(addTest2());
	addAccuracy.push_back(addTest3());
	addAccuracy.push_back(addTest4());
	std::cout << "add tests accuracy values are :\n";
	printValidity(&addAccuracy);
}

void linkedListTest::linkedListDeleteTest()
{
	std::vector<bool>deleteAccuracy;
	deleteAccuracy.push_back(deleteTest1());
	deleteAccuracy.push_back(deleteTest2());
	deleteAccuracy.push_back(deleteTest3());
	deleteAccuracy.push_back(deleteTest4());
	deleteAccuracy.push_back(deleteTest5());

	std::cout << "delete tests accuracy values are :\n";
	printValidity(&deleteAccuracy);
}

bool linkedListTest::deleteTest1()
{
	myList.doubleAproachDelete(root, 99);
	myNode* listIter = root;
	for (auto iter : correctAnswer) {
		if (listIter->key != iter) return false;
		listIter = listIter->next;
	}
	return true;
}

bool linkedListTest::deleteTest2()
{
	correctAnswer.clear();
	correctAnswer.push_back(1);
	correctAnswer.push_back(4);
	correctAnswer.push_back(5);
	correctAnswer.push_back(6);
	root = new myNode(1);
	root->next = new myNode(2);
	root->next->next = new myNode(4);
	root->next->next->next = new myNode(5);
	root->next->next->next->next = new myNode(6);
	myList.doubleAproachDelete(root,2);
	auto listIter = root;
	for (auto iter : correctAnswer) {
		if (iter != listIter->key) return false;
		listIter = listIter->next;
	}
	return true;
}

bool linkedListTest::deleteTest3()
{
	root = myList.doubleAproachDelete(root, 6);
	correctAnswer.erase(correctAnswer.begin()+correctAnswer.size()-1);
	auto listIter = root;
	for (auto iter : correctAnswer) {
		if (iter != listIter->key) return false;
		listIter = listIter->next;
	}
	return true;
}

bool linkedListTest::deleteTest4()
{
	correctAnswer.erase(correctAnswer.begin() + 1);
	root=myList.doubleAproachDelete(root, 4);
	auto listIter = root;
	for (auto iter : correctAnswer) {
		if (iter != listIter->key) return false;
		listIter = listIter->next;
	}
	return true;
}

bool linkedListTest::deleteTest5()
{
	correctAnswer.erase(correctAnswer.begin());
	root=myList.doubleAproachDelete(root,1);
	auto listIter = root;
	for (auto iter : correctAnswer) {
		if (iter != listIter->key) return false;
		listIter = listIter->next;
	}
	return true;
}

void linkedListTest::allTests()
{
	linkedListAddTests();
	linkedListDeleteTest();
}

void linkedListTest::printValidity(std::vector<bool> *accuracy)
{
	int counter = 0;
	for (auto item : (*accuracy))
		item ? std::cout << "\tTest " << ++counter << " bas been compleated.\n" : std::cout << "\t! Test " << ++counter << " has been failed \n";
	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
}