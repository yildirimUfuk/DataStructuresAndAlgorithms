#include "MoveZerosTests.h"

void MoveZerosTests::moveZerosTests()
{
	int count = 0;
	accuracy.push_back(test1());
	accuracy.push_back(test2());
	for (auto item : accuracy)
		item ? std::cout << "Test " << count++ << " passed\n" : std::cout << "-> Test " << count++ << " FAILED!\n";
}

bool MoveZerosTests::test1()
{
	std::vector<int> nums = { 0,1,0,3,12 };
	std::vector<int> answer = { 1,3,12,0,0 };
	mz.moveZeros(nums);
	for (int i = 0; i < answer.size(); i++)
	{
		if (answer[i] != nums[i])
			return false;
	}
	return true;
}

bool MoveZerosTests::test2()
{
	std::vector<int> nums = { };
	mz.moveZeros(nums);
	return nums.size() == 0 ? true : false;
}
