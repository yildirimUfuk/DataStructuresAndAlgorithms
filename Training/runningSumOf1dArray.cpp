#include "runningSumOf1dArray.h"

std::vector<int> runningSumOf1dArray::runningSum(std::vector<int>& nums)
{
	for (size_t i = 1; i < nums.size(); i++)
		nums[i] += nums[i - 1];

	return nums;
}
