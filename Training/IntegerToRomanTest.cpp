#include "IntegerToRomanTest.h"

void IntegerToRomanTest::integerToRomanTest()
{
	int count = 1;
	accuracy.push_back(Test1());
	accuracy.push_back(Test2());
	accuracy.push_back(Test3());
	accuracy.push_back(Test4());
	accuracy.push_back(Test5());
	for (auto item : accuracy)
		item ? std::cout << "Test " << count++ << " passed\n" : std::cout << "-> Test " << count++ << " FAILED!\n";
}

bool IntegerToRomanTest::Test1()
{
	return (integerToRoman.intToRoman(3) == "III") ? true : false;
}

bool IntegerToRomanTest::Test2()
{
	return (integerToRoman.intToRoman(4) == "IV") ? true : false;
}

bool IntegerToRomanTest::Test3()
{
	return (integerToRoman.intToRoman(9) == "IX") ? true : false;
}

bool IntegerToRomanTest::Test4()
{
	return (integerToRoman.intToRoman(58) == "LVIII") ? true : false;
}

bool IntegerToRomanTest::Test5()
{
	return (integerToRoman.intToRoman(1994) == "MCMXCIV") ? true : false;
}
