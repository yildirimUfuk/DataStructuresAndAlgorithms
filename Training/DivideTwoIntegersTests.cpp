#include "DivideTwoIntegersTests.h"

bool DivideTwoIntegersTests::Test0()
{
	myAnswer.push_back(d.divide(10, 3));
	expected.push_back(3);
	return (myAnswer[0] != expected[0]) ? false : true;
}

bool DivideTwoIntegersTests::Test1()
{
	myAnswer.push_back(d.divide(-2147483648, -1));
	expected.push_back(2147483647);
	return (myAnswer[1] != expected[1]) ? false : true;
}

bool DivideTwoIntegersTests::Test2()
{
	myAnswer.push_back(d.divide(25, 7));
	expected.push_back(3);
	return ( myAnswer[2]!=expected[2]) ? false : true;
}

bool DivideTwoIntegersTests::Test3()
{
	myAnswer.push_back(d.divide(5, 2));
	expected.push_back(2);
	return (myAnswer[3]!=expected[3]) ? false : true;
}

bool DivideTwoIntegersTests::Test4()
{
	myAnswer.push_back(d.divide(-1, 1));
	expected.push_back(-1);
	return ( myAnswer[4]!=expected[4]) ? false : true;
}

bool DivideTwoIntegersTests::Test5()
{
	myAnswer.push_back(d.divide(-2147483648, 1));
	expected.push_back(-2147483648);
	return(myAnswer[5] != expected[5]) ? false : true;
}

void DivideTwoIntegersTests::divideTwoIntegersTests()
{
	int count = 0;
	accuracy.push_back(Test0());
	accuracy.push_back(Test1());
	accuracy.push_back(Test2());
	accuracy.push_back(Test3());
	accuracy.push_back(Test4());
	accuracy.push_back(Test5());
	for (auto item : accuracy) {
		if (item) std::cout << "Test " << count++ << " passed!\n\n";
		else {
			std::cout << "Test" << count << " FAILED!\n";
			std::cout << "expected answer is :" << expected[count] << std::endl;
			std::cout << "my answer is :" << myAnswer[count++] << std::endl << std::endl;
		}
	}
}
