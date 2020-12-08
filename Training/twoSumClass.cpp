#include "twoSumClass.h"
void twoSumClass::twoSumTest(vector<int>& nums, int target)
{
	//nums=twoSum(nums, 9);
	nums = twoSum2(nums, 9);
	for (size_t i = 0; i < nums.size(); i++)
		cout << nums[i] << " : ";
	cout << endl;
}
vector<int> twoSumClass::twoSum2(vector<int>& nums, int target)
{
	unordered_map<short int, vector<short int>> myMap;
	vector<int>indicies;
	for (short int i = 0; i < nums.size(); i++)
	{
		auto iter = myMap.find(nums[i]);
		if (iter == myMap.cend())
		{
			vector<short int> v;
			v.push_back(i);
			myMap.insert(make_pair(nums[i], v));
		}
		else iter->second.push_back(i);
	}
	for (uint16_t i = 0; i < nums.size(); i++)
	{
		auto iter = myMap.find(nums[i]);
		short int indice = iter->second[0];
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
vector<int> twoSumClass::twoSum(vector<int>& nums, int target)
{
	vector<int> indicies;
	int seconIndice;
	for (uint16_t i = 0; i < nums.size(); i++)
	{
		seconIndice = lineerSearch(nums, i + 1, target - nums[i]);
		if (seconIndice != -1)
		{
			indicies.push_back(i);
			indicies.push_back(seconIndice);
		}
	}
	return indicies;
}
int twoSumClass::lineerSearch(vector<int>& arr, uint16_t startIndex, int key)
{
	while (startIndex < arr.size())
	{
		if (arr[startIndex] == key)
		{
			return startIndex++;
			break;
		}
		startIndex++;
	}
	return -1;
}
