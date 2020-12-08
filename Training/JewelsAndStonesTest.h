#pragma once
#include<vector>
#include<iostream>
#include"JewelsAndStones.h"
class JewelsAndStonesTest
{
public:
	void jewelsAndStonesTest();
private:
	JewelsAndStones jewelsAndStones;
	std::vector<bool>accuracy;
	bool Test1();
	bool Test2();
};

