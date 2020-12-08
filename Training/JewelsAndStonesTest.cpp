#include "JewelsAndStonesTest.h"

void JewelsAndStonesTest::jewelsAndStonesTest()
{
	int count = 1;
	accuracy.push_back(Test1());
	accuracy.push_back(Test2());
	for (auto item : accuracy)
		item ? std::cout << "Test " << count++ << " passed\n" : std::cout << "-> Test " << count++ << " FAILED\n";
}

bool JewelsAndStonesTest::Test1()
{
	return (jewelsAndStones.numJewelsInStones("aA", "aAAbbbb") == 3) ? true : false;
}

bool JewelsAndStonesTest::Test2()
{
	return (jewelsAndStones.numJewelsInStones("z", "ZZ") == 0) ? true : false;
}
