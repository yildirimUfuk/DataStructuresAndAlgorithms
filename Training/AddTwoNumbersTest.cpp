#include "AddTwoNumbersTest.h"

bool AddTwoNumbersTest::test1()
{
	l1 = new AddTwoNumbers::ListNode(2);
	l1->next = new AddTwoNumbers::ListNode(4);
	l1->next->next = new AddTwoNumbers::ListNode(3);
	l2 = new AddTwoNumbers::ListNode(5);
	l2->next = new AddTwoNumbers::ListNode(6);
	l2->next->next = new AddTwoNumbers::ListNode(4);
	AddTwoNumbers::ListNode* root = addTwoNumbers.addTwoNumbers(l1, l2);
	int controlArr[] = { 7,0,8 };
	int i = 0;
	while (root)
	{
		if (root->val != controlArr[i++])
			return false;
		root = root->next;
	}
	return true;
}

bool AddTwoNumbersTest::test2()
{
	AddTwoNumbers::ListNode* l1 = new AddTwoNumbers::ListNode(5);
	AddTwoNumbers::ListNode* l2 = new AddTwoNumbers::ListNode(5);
	AddTwoNumbers::ListNode* root = addTwoNumbers.addTwoNumbers(l1, l2);
	int result[2] = { 0,1 };
	int i = 0;
	while (root)
	{
		if (root->val != result[i++])
			return false;
		root = root->next;
	}
	return true;
}

bool AddTwoNumbersTest::test3()
{
	AddTwoNumbers::ListNode* l1 = new AddTwoNumbers::ListNode(1);
	l1->next = new AddTwoNumbers::ListNode(8);
	AddTwoNumbers::ListNode* l2 = new AddTwoNumbers::ListNode(0);
	AddTwoNumbers::ListNode* root = addTwoNumbers.addTwoNumbers(l1, l2);
	int solution[2] = { 1,8 };
	int i = 0;
	while (root)
	{
		if (root->val != solution[i++])
			return false;
		root = root->next;
	}
	return true;
}

bool AddTwoNumbersTest::addTwoNumbersTest()
{

	accuracy.push_back(test1());
	accuracy.push_back(test2());
	accuracy.push_back(test3());
	for (auto item : accuracy)
		if (item == false) return false;
	return true;
}
