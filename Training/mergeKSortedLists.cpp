#include "mergeKSortedLists.h"

mergeKSortedLists::ListNode* mergeKSortedLists::mergeKLists(std::vector<ListNode*> lists)
{
    std::multiset<int>mySet;
    for (auto iter : lists) {
        auto tmp = iter;
        while (tmp)
        {
            mySet.insert((*tmp).val);
            tmp = tmp->next;
        }
    }
    ListNode* mergedList = new ListNode();
    ListNode* root = mergedList;//root will be null. first element will be put on the second order to mergedlist. So the real root will be root.next
    for (auto iter : mySet) {
        mergedList->next = new ListNode(iter);
        mergedList = mergedList->next;
    }
    return root->next;//root.next real root.
}
