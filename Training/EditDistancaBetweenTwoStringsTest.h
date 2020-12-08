#pragma once
#include"EditDistanceBetweenTwoStrings.h"
#include<vector>
using namespace std;
class EditDistancaBetweenTwoStringsTest
{
private:
	EditDistanceBetweenTwoStrings editDistance;
	std::vector<bool>accuracy;
	bool Test1();
public:
	void editDistanceTest(); 
};

