#pragma once
#include<iostream>
using namespace std;
//Merge two sorted linked listsand return it as a new sorted list.The new list should be made by splicing together the nodes of the first two lists.
//Example:
//Input: 1->2->4, 1->3->4
//Output : 1->1->2->3->4->4
class MergeTwoSortedList21
{
private:
	struct ListNode
	{
		int val;
		ListNode* next;
		ListNode();
		ListNode(int x) :val(x), next(next) {}
		ListNode(int x, ListNode* next) :val(x), next(next) {}
	};
	/// <summary>
	/// Runtime: 8 ms, faster than 71.11% - Memory Usage: 14.7 MB, less than 12.81% 
	/// </summary>
	/// <param name="l1"></param>
	/// <param name="l2"></param>
	/// <returns></returns>
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
	ListNode* mergeTwoLists2(ListNode* l1, ListNode* l2);
public:
	bool mergeTwoListsTest();
	
};

