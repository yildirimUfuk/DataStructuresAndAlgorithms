#include "EditDistancaBetweenTwoStringsTest.h"

bool EditDistancaBetweenTwoStringsTest::Test1()
{
	string X = "backache";
	string Y = "sackrace";
	if (editDistance.EditDistance(X, Y) == 3) return true;
	return false;
}

void EditDistancaBetweenTwoStringsTest::editDistanceTest()
{
	int count = 0;
	accuracy.push_back(Test1());
	for(auto item : accuracy)
		item ? cout << "Test " << ++count << " passed!\n" : cout << "Test" << ++count << " FAILED!\n";
}
