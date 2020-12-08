#include "MergeTwoSortedList21.h"

MergeTwoSortedList21::ListNode* MergeTwoSortedList21::mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode* iter1, * iter2, * root, * iRoot;
	iter1 = l1;
	iter2 = l2;
	if (!l1 && !l2) return nullptr;
	else if (!l1) return l2;
	else if (!l2) return l1;
	if (iter1->val <= iter2->val)
	{
		root = new ListNode(iter1->val, nullptr);
		iter1 = iter1->next;
		//free(l1);
		//l1 = iter1;
	}
	else
	{
		root = new ListNode(iter2->val, nullptr);
		iter2 = iter2->next;
		/*free(l2);
		l2 = iter2;*/
	}
	iRoot = root;
	while (iter1 && iter2)
	{
		if (iter1->val <= iter2->val)
		{
			iRoot->next = new ListNode(iter1->val, nullptr);
			iter1 = iter1->next;
			//free(l1);
			//l1 = iter1;
		}
		else
		{
			iRoot->next = new ListNode(iter2->val, nullptr);
			iter2 = iter2->next;
			//free(l2);
			//l2 = iter2;
		}
		iRoot = iRoot->next;
	}
	while (iter1)
	{
		iRoot->next = new ListNode(iter1->val, nullptr);
		//free(l1);
		//l1 = iter1;
		iRoot = iRoot->next;
		iter1 = iter1->next;
	}
	while (iter2)
	{
		iRoot->next = new ListNode(iter2->val, nullptr);
		//free(l2);
		//l2 = iter2;
		iRoot = iRoot->next;
		iter2 = iter2->next;
	}
	return root;
}

MergeTwoSortedList21::ListNode* MergeTwoSortedList21::mergeTwoLists2(ListNode* l1, ListNode* l2)
{
	ListNode* iter,*root;
	if (!l1 && !l2) return nullptr;
	else if (!l1) return l2;
	else if (!l2) return l1;
	if (l1->val <= l2->val)
	{
		root = l1;
		l1 = l1->next;
	}
	else
	{
		root = l2;
		l2 = l2->next;
	}
	iter = root;
	while (l1&&l2)
	{
		if (l1->val <= l2->val)
		{
			iter->next = l1;
			l1 = l1->next;
		}
		else
		{
			iter->next = l2;
			l2 = l2->next;
		}
		iter = iter->next;
	}
	if (l1) iter->next = l1;
	if (l2) iter->next = l2;
	return root;
}

bool MergeTwoSortedList21::mergeTwoListsTest()
{
	ListNode* l1, *l2;
	ListNode* itr1,*itr2;
	l1 = new ListNode(1, nullptr);
	l2 = new ListNode(1, nullptr);
	itr1 = l1;
	itr2 = l2;
	itr1->next = new ListNode(2, nullptr);
	itr1 = itr1->next;
	itr2->next = new ListNode(3, nullptr);
	itr2 = itr2->next;
	itr1->next = new ListNode(4, nullptr);
	itr1 = itr1->next;
	itr2->next = new ListNode(4, nullptr);
	itr2 = itr2->next;
	itr1 = l1;
	itr2 = l2;
	//ListNode *p=(ListNode*)mergeTwoLists(l1, l2);
	ListNode* p = (ListNode*)mergeTwoLists2(l1, l2);
	int controlArr[] = { 1,1,2,3,4,4 };
	int i = 0;
	while (p)
	{
		if (p->val != controlArr[i++])
			return false;
		p = p->next;
	}
	ListNode *first, *second;
	first = nullptr;
	second = nullptr;
	//p=(ListNode*)mergeTwoLists(first,second);
	p = (ListNode*)mergeTwoLists2(first, second);
	if (p) return false;
	return true;
}

MergeTwoSortedList21::ListNode::ListNode()
{
}
