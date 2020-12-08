#pragma once
#include<iostream>
#include"ContainerWithMostWater.h"
class ContainerWithMostWaterTest
{
public:
	void containerWithMostWaterTest();
private:
	ContainerWithMostWater containerWithMostWater;
	std::vector<bool> accuracy;
	bool Test1();
	bool Test2();
	bool Test3();
	bool Test4();
	bool Test5();
};

