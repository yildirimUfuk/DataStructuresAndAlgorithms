#include "AddTwoNumbers.h"

AddTwoNumbers::ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode *root,*iter;
	uint8_t carry,sum;
	if (!l1 && !l2) return nullptr;
	if (!l1) return l2;
	if (!l2) return l1;

	sum = l1->val + l2->val;
	carry = sum / 10;
	sum %= 10;
	root = new ListNode(sum);
	l1 = l1->next;
	l2 = l2->next;
	iter = root;
	while (l1 && l2)
	{
		sum = l1->val + l2->val+carry;
		carry = sum / 10;
		sum %= 10;
		iter->next = new ListNode(sum);
		l1 = l1->next;
		l2 = l2->next;
		iter = iter->next;
	}
	while (l1)
	{
		sum = l1->val + carry;
		carry = sum / 10;
		sum %= 10;
		iter->next = new ListNode(sum);
		l1 = l1->next;
		iter = iter->next;
	}
	while (l2)
	{
		sum = l2->val + carry;
		carry = sum / 10;
		sum %= 10;
		iter->next = new ListNode(sum);
		l2 = l2->next;
		iter = iter->next;
	}
	if (carry > 0)
		iter->next = new ListNode(carry);
    return root;
}
