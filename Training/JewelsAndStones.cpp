#include "JewelsAndStones.h"

int JewelsAndStones::numJewelsInStones(std::string J, std::string S)
{
    int arr[58] = { 0 };
    int count = 0;
    for (auto i : J)
        arr[i - 'A']++;
    for (auto i : S)
    {
        if (arr[i - 'A'] > 0)
            count++;
    }
    return count;
}
