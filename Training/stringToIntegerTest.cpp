#include "stringToIntegerTest.h"

void stringToIntegerTest::stringToIntTest()
{
    int count = 1;
    accuracy.push_back(test1());
    accuracy.push_back(test2());
    accuracy.push_back(test3());
    accuracy.push_back(test4());
    accuracy.push_back(test5());
    accuracy.push_back(test6());
    accuracy.push_back(test7());
    accuracy.push_back(test8());
    accuracy.push_back(test9());
    accuracy.push_back(test10());
    accuracy.push_back(test11());
    accuracy.push_back(test12());
    for (auto item : accuracy)
        item ? cout << "Test " << count++ << " passed!\n" : cout << "Test" << count++ << " FAILED!\n";
    
}

bool stringToIntegerTest::test1()
{
    if (stringToInteger.myAtoi("42") != 42) return false;
    return true;
}

bool stringToIntegerTest::test2()
{
    if (stringToInteger.myAtoi("   -42") != -42) return false;
    return true;
}

bool stringToIntegerTest::test3()
{
    if (stringToInteger.myAtoi("4193 with words") != 4193) return false;
    return true;
}

bool stringToIntegerTest::test4()
{
    if (stringToInteger.myAtoi("words and 987") != 0) return false;
    return true;
}

bool stringToIntegerTest::test5()
{
    if (stringToInteger.myAtoi("-91283472332") != -2147483648) return false;
    return true;
}

bool stringToIntegerTest::test6()
{
    if (stringToInteger.myAtoi("2147483649") != 2147483647) return false;
    return true;
}

bool stringToIntegerTest::test7()
{
    if (stringToInteger.myAtoi("3.14159") != 3) return false;
    return true;
}

bool stringToIntegerTest::test8()
{
    if (stringToInteger.myAtoi("+-12") != 0) return false;
    return true;
}

bool stringToIntegerTest::test9()
{
    if (stringToInteger.myAtoi("+1") != 1) return false;
    return true;
}

bool stringToIntegerTest::test10()
{
    if (stringToInteger.myAtoi("00000-42a1234") != 0) return false;
    return true;
}

bool stringToIntegerTest::test11()
{
    if (stringToInteger.myAtoi("2147483646") != 2147483646) return false;
    return true;
}

bool stringToIntegerTest::test12()
{
    return (stringToInteger.myAtoi("-2147483648") == -2147483648) ?  true :  false;
}
