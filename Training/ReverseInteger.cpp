#include "ReverseInteger.h"

int ReverseInteger::reverse(int number)
{
	int reverseNumber = 0;
	while (number != 0) {
		int pop = number % 10;
		number /= 10;
		if (reverseNumber > INT_MAX / 10 || (reverseNumber == INT_MAX / 10 && pop > 7)) return 0;
		if (reverseNumber < INT_MIN / 10 || (reverseNumber == INT_MIN / 10 && pop < -8)) return 0;
		reverseNumber = reverseNumber * 10 + pop;
	}
	return reverseNumber;

}
