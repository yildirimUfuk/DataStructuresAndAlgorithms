#include "MoveZeroes.h"

void MoveZeroes::moveZeros(std::vector<int>& nums)
{
	/*if (nums.empty()) return;*/
	auto iterFirst = nums.begin();
	auto iterSecond = nums.begin();

	while (iterFirst != nums.end())
	{
		if (*iterFirst != 0)
		{
			std::iter_swap(iterFirst, iterSecond);
			iterSecond++;
			iterFirst++;
		}
		else iterFirst++;
	}
}
