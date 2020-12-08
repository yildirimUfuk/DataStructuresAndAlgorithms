#pragma once
#include<iostream>
#include<vector>
using namespace std;
class LongestSubstringWithoutRepeatingCharacters
{
private:
	vector<vector<int>> myMapVector;//it will store which characters at where are they.
public:
	int lengthOfLongestSubstring(string s);
};

