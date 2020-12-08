#pragma once
#include<vector>
#include<algorithm>
using namespace std;
//There are two sorted arrays nums1and nums2 of size mand n respectively.
//Find the median of the two sorted arrays.The overall run time complexity should be O(log(m + n)).
//You may assume nums1and nums2 cannot be both empty.
class MedianOfTwoSortedArrays
{
public:
	/// <summary>
	/// Runtime: 60 ms, faster than 49.03% of C++ online submissions for Median of Two Sorted Arrays.
	/// Memory Usage : 90.1 MB, less than 6.17 % of C++ online submissions for Median of Two Sorted Arrays.
	/// </summary>
	/// <param name="nums1"></param>
	/// <param name="nums2"></param>
	/// <returns></returns>
	double findMedianSortedArrays(vector<int> nums1, vector<int>nums2);
	/// <summary>
	/// Runtime: 60 ms, faster than 49.03% of C++ online submissions for Median of Two Sorted Arrays.
	/// Memory Usage : 89.2 MB, less than 47.94 % of C++ online submissions for Median of Two Sorted Arrays.
	/// </summary>
	/// <param name="nums1"></param>
	/// <param name="nums2"></param>
	/// <returns></returns>
	double findMedianSortedArrays2(vector<int> nums1, vector<int>nums2);
};

