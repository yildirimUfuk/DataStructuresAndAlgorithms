#include "_3Sum.h"

std::vector<std::vector<int>> _3Sum::threeSum(std::vector<int>& nums)
{
    std::multiset<int>mySet;
    std::set<std::vector<int>>solutionSet;//to eleminate same triples
    std::vector<std::vector<int>>solution;// given format for solutions.
    if (nums.size() < 3) return solution;
    std::sort(nums.begin(), nums.end());
    for (auto iter : nums)
        mySet.insert(iter);
    //std::sort(nums.begin(), nums.end(), [](const int &x, const int &y) {return x > y; });

    for (auto iter = mySet.begin(); iter != std::prev(mySet.end(), 2); iter++)
    {
        for (auto innerIter = std::next(iter); innerIter != std::prev(mySet.end(), 1); innerIter++) {
            auto p = std::find(std::next(innerIter), mySet.end(), (-1 * (*iter + *innerIter)));
            if (p != mySet.end())
                solutionSet.insert(*new std::vector<int> = { *iter,*innerIter,*p });
        }
    }

    for (auto iter : solutionSet)
        solution.push_back(iter);
    return solution;

}

std::vector<std::vector<int>> _3Sum::threeSum2(std::vector<int>& nums)
{
    if (nums.size() < 3) return std::vector<std::vector<int>>();
    std::vector<std::vector<int>>result;
    std::sort(nums.begin(), nums.end());
    uint16_t i;
    for (i = 0; i < nums.size() - 1; i++)
        if (nums[i] > 0) break;
    while (i < nums.size())
    {
        for (uint16_t k = i - 1; k > 0; k--)
        {
            if (nums[k] + nums[k - 1] + nums[i] == 0)
            {
                std::vector<int> s = { nums[k],nums[k - 1],nums[i] };
                result.push_back(s);
            }
            else if (nums[k] + nums[k - 1] + nums[i] < 0)
                break;
        }
        i++;
    }
    return result;
}

std::vector<std::vector<int>> _3Sum::threeSum3(std::vector<int>& nums)
{
    std::multiset<int>mySet;
    std::set<std::vector<int>>solutionSet;//to eleminate same triples
    std::vector<std::vector<int>>solution;// given format for solutions.
    if (nums.size() < 3) return solution;
    std::sort(nums.begin(), nums.end());
    for (auto iter : nums)
        mySet.insert(iter);
    //std::sort(nums.begin(), nums.end(), [](const int &x, const int &y) {return x > y; });

    for (auto iter = mySet.begin(); iter != std::prev(mySet.end(), 2); iter++)
    {
        for (auto innerIter = std::next(iter); innerIter != std::prev(mySet.end(), 1); innerIter++) {
            auto p = std::find(std::next(innerIter), mySet.end(), (-1 * (*iter + *innerIter)));
            if (p != mySet.end())
                solutionSet.insert(*new std::vector<int> = { *iter,*innerIter,*p });
        }
    }
    for (auto iter : solutionSet)
        solution.push_back(iter);
    return solution;
}











































