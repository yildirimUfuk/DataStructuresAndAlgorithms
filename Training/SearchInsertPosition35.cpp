#include "SearchInsertPosition35.h"

int SearchInsertPosition35::searchInsert(vector<int>& nums, int target)
{
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target) return i;
		else if (nums[i] > target) return i;
	}
	return nums.size();
}


bool SearchInsertPosition35::searchInsertTest()
{
	vector<int> myVec = { 1,3,5,6 };
	if (searchInsert(myVec, 5) != 2) return false;
	if (searchInsert(myVec, 2) != 1) return false;
	if (searchInsert(myVec, 7) != 4) return false;
	return true;
}
