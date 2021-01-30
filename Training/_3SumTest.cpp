#include "_3SumTest.h"

void _3SumTest::globallTest()
{
    int count = 1;
    accuracy.push_back(test1());
    accuracy.push_back(test2());
    accuracy.push_back(test3());
    accuracy.push_back(test4());
    accuracy.push_back(test5());
    accuracy.push_back(test6());
    for (auto item : accuracy)
        item ? std::cout << "Test " << count++ << " passed!\n" : std::cout << "-> Test " << count++ << " FAILED\n";
}

bool _3SumTest::test1()
{
    std::vector<int> nums = { -1,0,1,2,-1,-4 };
    std::vector<std::vector<int>> solution = sum3.threeSum(nums);
    for (auto item : solution)
    {
        if ((item[0] + item[1] + item[2]) != 0) return false;
    }
    return true;
}

bool _3SumTest::test2()
{
    std::vector<int> nums = { };
    std::vector<std::vector<int>> solution = sum3.threeSum(nums);
    for (auto item : solution)
    {
        if ((item[0] + item[1] + item[2]) != 0) return false;
    }
    return true;
}

bool _3SumTest::test3()
{
    std::vector<int> nums = { 0 };
    std::vector<std::vector<int>> solution = sum3.threeSum(nums);
    for (auto item : solution)
    {
        if ((item[0] + item[1] + item[2]) != 0) return false;
    }
    return true;
}

bool _3SumTest::test4()
{
    std::vector<int> nums = { 0,0,0 };
    std::vector<std::vector<int>> solution = sum3.threeSum(nums);
    for (auto item : solution)
    {
        if ((item[0] + item[1] + item[2]) != 0) return false;
    }
    if (solution.size() != 1) return false;
    return true;
}

bool _3SumTest::test5()
{
    std::vector<int> nums = { 1, 1, -2 };
    std::vector<std::vector<int>> solution = sum3.threeSum(nums);
    for (auto item : solution)
    {
        if ((item[0] + item[1] + item[2]) != 0) return false;
    }
    if (solution.size() != 1) return false;
    return true;
}

bool _3SumTest::test6()
{
    std::vector<int> nums = { 1, 2, -2, -1 };
    std::vector<std::vector<int>> solution = sum3.threeSum(nums);
    for (auto item : solution)
    {
        if ((item[0] + item[1] + item[2]) != 0) return false;
    }
    if (solution.size() != 0) return false;
    return true;
}
