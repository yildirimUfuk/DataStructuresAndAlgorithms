#include "GenerateParenthesesTest.h"

void GenerateParenthesesTest::globalTests()
{
	int count = 1;
	accuracy.push_back(test1());
	accuracy.push_back(test2());

	for (auto item : accuracy)
		item ? std::cout << "Test " << count++ << " passed!\n" : std::cout << "-> Test " << count++ << " FAILED\n";
}

bool GenerateParenthesesTest::test1()
{
	std::string output[] = { "()" };
	int n = 1;
	std::vector < std::string > solution = generateParentheses.generateParenthesis(n);
	if (solution.size() != 1) return false;
	for (size_t i = 0; i < solution.size(); i++)
		if (output[i].compare(solution[i])) return false;
	return true;
}

bool GenerateParenthesesTest::test2()
{
	std::string output[] = { "((()))","(()())","(())()","()(())","()()()" };
	int n = 3;
	std::vector < std::string > solution = generateParentheses.generateParenthesis(n);
	if (solution.size() != 5) return false;
	for (size_t i = 0; i < solution.size(); i++)
		if (output[i].compare(solution[i])) return false;
	return true;
}
