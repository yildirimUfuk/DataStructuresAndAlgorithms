#include "RemoveDuplicatesFromSortedArray26.h"

int RemoveDuplicatesFromSortedArray26::removeDuplicates(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
	for (size_t i = 1; i < nums.size(); i++)
	{
		if (nums[i] == nums[i-1])
			nums.erase(nums.begin() + i--);
	}
	return nums.size();
}

int RemoveDuplicatesFromSortedArray26::removeDuplicates2(vector<int>& nums)
{
	int i = 0;
	if (nums.size() == 0) return 0;
	for (size_t j = 1; j < nums.size(); j++)
	{
		if (nums[i] != nums[j])
			nums[++i] = nums[j];
	}
	return i + 1;
}

bool RemoveDuplicatesFromSortedArray26::removeDuplicatesTest()
{
	vector<int> myVec = { 1,1,2 };
	if (removeDuplicates2(myVec) != 2)
		return false;
	myVec = { 0,0,1,1,1,2,2,3,3,4 };
	if (removeDuplicates2(myVec) != 5)
		return false;
	return true;
}
