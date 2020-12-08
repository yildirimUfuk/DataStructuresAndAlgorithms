#include "MedianOfTwoSortedArrays.h"
#include<iostream>
using namespace std;
double MedianOfTwoSortedArrays::findMedianSortedArrays(vector<int> nums1, vector<int> nums2)
{
    vector<int> nums;
	int i = 0;
	int j = 0;
	while (i<nums1.size()&& j<nums2.size())
	{
		if (nums1[i] <= nums2[j]) nums.push_back(nums1[i++]);
		else nums.push_back(nums2[j++]);
	}
	while (i<nums1.size())
		nums.push_back(nums1[i++]);
	while (j < nums2.size())
		nums.push_back(nums2[j++]);
	if (nums.size() % 2 == 0) return (nums[nums.size() / 2] + nums[(nums.size() / 2)-1]) / 2.0;
	return nums[nums.size() / 2];
}

double MedianOfTwoSortedArrays::findMedianSortedArrays2(vector<int> nums1, vector<int> nums2)
{
	nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
	sort(nums1.begin(), nums1.end());
	if (nums1.size() % 2 == 0) return (nums1[nums1.size()/2] + nums1[(nums1.size()/2) - 1]) / 2.0;
	return nums1[nums1.size()/2];
}
