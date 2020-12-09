#include "linkedList.h"

myNode* linkedList::doubleAproachAdd(myNode* root,int data)
{
	myNode** iter = &root;
	myNode* tmp = new myNode(data);
	while ((*iter)&&(*iter)->key < data)
		iter = &(*iter)->next;

	tmp->next = (*iter);
	*iter = tmp;
    return root;
}

myNode* linkedList::doubleAproachDelete(myNode* root, int data)
{
	if (!root) return NULL;
	myNode** iter = &root;
	while (*iter && (*iter)->key!=data)
		iter = &(*iter)->next;
	if (!(*iter)) return root;

	myNode* tmp = *iter;
	*iter = (*iter)->next;

	delete tmp; // to avoid memory leaks
	return root;
}
