#pragma once
#include<iostream>
#include<vector>
#include"MoveZeroes.h"

class MoveZerosTests
{
public: 
	void moveZerosTests();
private:
	MoveZeroes mz;
	std::vector<bool> accuracy;
	bool test1();
	bool test2();
};

