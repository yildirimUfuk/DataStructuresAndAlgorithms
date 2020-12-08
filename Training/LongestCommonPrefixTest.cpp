#include "LongestCommonPrefixTest.h"

void LongestCommonPrefixTest::longestCommonPrefixTest()
{
	int count = 0;
	accuracy.push_back(Test1());
	accuracy.push_back(Test2());
	for (auto item : accuracy)
		item ? cout << "Test" << count++ << " passed!\n" : cout << "Test" << count++ << " FAILED!\n";
}

bool LongestCommonPrefixTest::Test1()
{
	std::vector<std::string>str;
	str.push_back("dog");
	str.push_back("racecar");
	str.push_back("car");
	return(longestCommonPrefix.longestCommonPrefix(str) == "") ? true : false;
}

bool LongestCommonPrefixTest::Test2()
{
	std::vector<std::string>str;
	str.push_back("flower");
	str.push_back("flow");
	str.push_back("flight");
	return(longestCommonPrefix.longestCommonPrefix(str) == "fl") ? true : false;

}
