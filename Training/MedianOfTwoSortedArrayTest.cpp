#include "MedianOfTwoSortedArrayTest.h"

void MedianOfTwoSortedArrayTest::medianOfTwoSortedArraysTest()
{
    int count = 1;
    accuracy.push_back(Test1());
    accuracy.push_back(Test2());
    accuracy2.push_back(Test3());
    accuracy2.push_back(Test4());
    for (auto item : accuracy)
        item ? std::cout << "median of two sorted arrays first solution test " << count++ << " passed\n" : cout << "-> median of two sorted arrays first solution test" << count++ << " FAILED!\n";
}

bool MedianOfTwoSortedArrayTest::Test1()
{
    l1 = { 1,3 };
    l2 = { 2 };
    if (medianOfTwoSortedArrays.findMedianSortedArrays(l1, l2) != 2.0) 
        return false;
    return true;
}
bool MedianOfTwoSortedArrayTest::Test2()
{
    l1 = { 1,2 };
    l2 = { 3,4 };
    if (medianOfTwoSortedArrays.findMedianSortedArrays(l1, l2) != 2.5) 
        return false;
    return true;
}

bool MedianOfTwoSortedArrayTest::Test3()
{
    l1 = { 1,3 };
    l2 = { 2 };
    if (medianOfTwoSortedArrays.findMedianSortedArrays(l1, l2) != 2.0)
        return false;
    return true;
}

bool MedianOfTwoSortedArrayTest::Test4()
{
    l1 = { 1,2 };
    l2 = { 3,4 };
    if (medianOfTwoSortedArrays.findMedianSortedArrays(l1, l2) != 2.5)
        return false;
    return true;
}
