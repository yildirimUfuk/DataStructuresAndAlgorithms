#include "reverseNumberClass.h"
#include <vector>
void reverseNumberClass::reverseNumbeTest(int& number)
{
	cout << "number is :" << number<<endl;
	cout<< "reverse number is : " <<reverse(number);
}
int reverseNumberClass::reverse(int &x)
{
	x=leetCodeCozum(x);
	/*if (x > 0) {
		return reverseNumber(x);
	}
	else
	{
		if (x==INT_MIN)
		{
			x = ++x * -1;
			return -1000000000*reverseNumber(x);
		}
		else
		{
			x *= -1;
			return -1*reverseNumber(x);
		}
	}*/
	return x;
}
int reverseNumberClass::reverseNumber(int& x)
{
	int rNum = 0;
	vector<int>nums;
	vector<int>maxNums;
	int maxNum = INT_MAX;
	while (x > 0)
	{
		nums.push_back(x % 10);
		x /= 10;
	}
	while (maxNum > 0)
	{
		maxNums.insert(maxNums.begin(),maxNum % 10);
		maxNum /= 10;
	}
	if (nums.size() < maxNums.size())
	{
		for (size_t i = 0; i < nums.size(); i++)
		{
			rNum += nums[i] * pow(10, nums.size() - 1 - i);
		}
	}
	else if (nums.size() > maxNums.size()) return 0;
	else
	{
		for (size_t i = 0; i < nums.size(); i++)
		{
			if (nums[i] < maxNums[i]) break;
			else if(nums[i]>maxNums[i]) return 0;
		}
		for (size_t i = 0; i < nums.size(); i++) {
			rNum += nums[i] * pow(10, nums.size() - 1 - i);
		}
	
	}
	return rNum;
}
int reverseNumberClass::leetCodeCozum(int x)
{
	int rev = 0;
	while (x != 0) {
		int pop = x % 10;
		x /= 10;
		if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
		if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
		rev = rev * 10 + pop;
	}
	return rev;
}
