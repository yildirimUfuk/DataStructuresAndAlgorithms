#include "RemoveElement27.h"

int RemoveElement27::removeElement(vector<int>& nums, int val)
{
    
	for (size_t j = 0; j < nums.size(); j++)
	{
		if (nums[j] == val)
			nums.erase(nums.begin() + j--);
	}
	return nums.size();
}

bool RemoveElement27::removeElementTest()
{
	vector<int> myVec = { 3,2,2,3 };
	if (removeElement(myVec, 3) != 2) return false;
	myVec = { 0,1,2,2,3,0,4,2 };
	if (removeElement(myVec, 2) != 5) return false;
	return true;
}
