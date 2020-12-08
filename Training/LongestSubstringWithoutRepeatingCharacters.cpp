#include "LongestSubstringWithoutRepeatingCharacters.h"

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(string s)
{
	int min, max;
    myMapVector.resize(255);
	for (uint32_t i = 0; i < s.size(); i++)
	{
		myMapVector[s[i]].push_back(i);
	}
    return 0;
}
