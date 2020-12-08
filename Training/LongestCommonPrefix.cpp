#include "LongestCommonPrefix.h"

string LongestCommonPrefix::longestCommonPrefix(vector<string>& strs)
{
	string commonPrefix = "";
	if (strs.size() == 0) return commonPrefix;
	bool flag = true;
	int size = 0;
	uint16_t j;
	size = strs[0].size();

	for (int i = 1; i < strs.size(); i++)
	{
		if (size > strs[i].size()) size = strs[i].size();
	}
	for (uint16_t i = 0; i < size; i++)
	{
		for (j = 1; j < strs.size(); j++)
		{
			if (strs[j][i] != strs[j - 1][i])
			{
				flag = false;
				break;
			}
		}
		if (flag == false) break;
		commonPrefix += strs[j - 1][i];
	}
	return commonPrefix;
}
