#include "stringToInteger.h"

int stringToInteger::myAtoi(string s)
{
	int number = 0;
	bool sign = true;
	auto iter = s.begin();
	while (iter!=s.end()&&isspace(*iter))
		s.erase(iter);

	if (*iter == '-' || *iter == '+')
		sign = (*iter++ == '-') ? false : true;
	while (iter!=s.end()&& isdigit(*iter))
	{
		if (INT_MAX / 10 > number || (number == INT_MAX/10 && (*iter - '0') <= (INT_MAX % 10)))
		{
			number *= 10;
			number += (*iter) - '0';
		}
		else return sign ? INT_MAX : INT_MIN;
		iter++;
	}
	return sign ? number : (number * -1);
}


































//
//if (*iter == '-')
//{
//	iter++;
//	while (iter != s.end() && isdigit(*iter))
//	{
//		if ((INT_MIN / 10) <= number || (iter[0] <= INT_MIN % 10))
//		{
//			number *= 10;
//			number -= (iter[0] - '0');
//		}
//		else return -2147483648;
//		iter++;
//	}
//	return number;
//}
//else if (*iter == '+')
//{
//	iter++;
//	while (iter != s.end() && isdigit(*iter))
//	{
//		if ((INT_MAX / 10) > number || (iter[0] >= INT_MAX % 10))
//		{
//			number *= 10;
//			number += (iter[0] - '0');
//		}
//		else return 2147483647;
//		iter++;
//	}
//	return number;
//}
//while (iter != s.end() && isdigit(*iter))
//{
//	if ((INT_MAX / 10) >= number || (iter[0] >= INT_MAX % 10))
//	{
//		number *= 10;
//		number += (iter[0] - '0');
//	}
//	else return 2147483647;
//	iter++;
//}