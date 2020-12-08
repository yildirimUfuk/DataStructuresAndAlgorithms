#include "_3Sum.h"

std::vector<std::vector<int>> _3Sum::threeSum(std::vector<int>& nums)
{
    if (nums.size() < 3) return std::vector<std::vector<int>>();
    std::vector<std::vector<int>>result;
    std::sort(nums.begin(), nums.end());
    uint16_t i;
    for ( i= 0; i < nums.size()-1; i++)
        if (nums[i] > 0) break;
    while (i<nums.size())
    {
        for (uint16_t k = i-1; k > 0; k--)
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

std::vector<std::vector<int>> _3Sum::threeSum2(std::vector<int>& nums)
{
    std::unordered_map<int,int>myMap;
    int i = 0;
    for (auto item : nums)
        myMap.insert(std::make_pair(i++, item));
    for (auto iter = myMap.begin(); iter != myMap.end(); iter++)
    {
        std::pair<int, int>tmp = (*iter);
        myMap.erase(iter);

        for (auto innerIter : myMap)
        {
            //
        }
        
    }
    return std::vector<std::vector<int>>();
}











































