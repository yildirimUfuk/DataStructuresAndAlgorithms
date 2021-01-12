#include "DivideTwoIntegers.h"
#include<iostream>
int DivideTwoIntegers::divide(int dividend, int divisor)
{
    bool sign;
    ((divisor < 0 && dividend >= 0) || (divisor >= 0 && dividend < 0)) ? sign =false : sign = true;
     
    long long int uDividend = std::abs((long long)dividend);
    long long int uDivisor= std::abs((long long)divisor);
    long long quotient = 0, temp = 0;
    for (int i = 31; i >= 0; --i) {
        if (temp + (uDivisor << i) <= uDividend) {
            temp += uDivisor << i;
            quotient |= 1 << i;
        }
    }
    if (quotient == INT_MIN && sign) return -1 * (quotient + 1);
    return sign ? quotient : -1 * quotient;
}

int DivideTwoIntegers::divide2(int dividend, int divisor)
{
    int sign;
    int counter = 0;
    ((divisor < 0 && dividend >= 0) || (divisor >= 0 && dividend < 0)) ? sign = -1 : sign = 1;
    if (dividend == INT_MIN) dividend += 1;
    if (divisor == INT_MIN) divisor += 1;
    dividend = std::abs(dividend);
    divisor = std::abs(divisor);

    while (dividend >= divisor)
    {
        dividend -= divisor;
        counter++;
    }
    return counter * sign;
}
long long int DivideTwoIntegers::divide3(long long dividend, long long divisor)
{
    // Calculate sign of divisor i.e., 
    // sign will be negative only iff 
    // either one of them is negative 
    // otherwise it will be positive 
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    // remove sign of operands 
    dividend = abs(dividend);
    divisor = abs(divisor);

    // Initialize the quotient 
    long long quotient = 0, temp = 0;

    // test down from the highest bit and 
    // accumulate the tentative value for 
    // valid bit 
    for (int i = 31; i >= 0; --i) {
        if (temp + (divisor << i) <= dividend) {
            temp += divisor << i;
            quotient |= 1LL << i;
        }
    }
    return sign * quotient;
}


