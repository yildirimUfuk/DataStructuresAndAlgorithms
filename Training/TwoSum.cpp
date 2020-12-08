#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int>& nums, int target)
{
	unordered_map<int, vector<int>> myMap;
	vector<int>indicies;
	for (uint16_t i = 0; i < nums.size(); i++)
	{
		auto iter = myMap.find(nums[i]);
		if (iter == myMap.cend())
		{
			vector<int> v;
			v.push_back(i);
			myMap.insert(make_pair(nums[i], v));
		}
		else iter->second.push_back(i);
	}
	for (uint16_t i = 0; i < nums.size(); i++)
	{
		auto iter = myMap.find(nums[i]);
		int indice = iter->second[0];
		if (iter->second.size() > 1) iter->second.erase(iter->second.begin());
		else myMap.erase(nums[i]);
		iter = myMap.find(target - nums[i]);
		if (iter != myMap.cend()) {
			indicies.insert(indicies.begin(), iter->second[0]);
			indicies.insert(indicies.begin(), indice);
			break;
		}
	}
	return indicies;
}

bool TwoSum::twoSumTest()
{
	vector<int> myVec = { 1,3,4,6 };
	int target = 9;
	myVec=twoSum(myVec, target);
	if (myVec[0] = 1 && myVec[1] == 3)
		return true;
	return false;
}
