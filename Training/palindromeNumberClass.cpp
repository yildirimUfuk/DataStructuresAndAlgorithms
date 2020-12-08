#include "palindromeNumberClass.h"

bool palindromeNumberClass::palindromeTest(int number)
{
	return palindromeControl2(number);
}

bool palindromeNumberClass::palindromeControl(int x)
{
	//doing it with vector
	if (x < 0) return false;
	vector<int> v;
	while (x!=0)
	{
		v.push_back(x % 10);
		x /= 10;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != v[v.size() - 1 - i]) return false;
		if (&v[i] == &v[v.size() - 1 - i]) break;
	}
	return true;
}

bool palindromeNumberClass::palindromeControl2(int number)
{
	if (number < 0) return false;
	int yedek = number;
	int count=0;
	while (yedek!=0)
	{
		count++;
		yedek /= 10;
	}
	while (number>9)
	{
		if (number % 10 != number / pow(10,count-1)) return false;
	}
	return true;
}
