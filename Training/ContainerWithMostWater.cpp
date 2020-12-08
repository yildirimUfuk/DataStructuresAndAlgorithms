#include "ContainerWithMostWater.h"
#include<iostream>
using namespace std;
int ContainerWithMostWater::maxArea(std::vector<int>& height)
{
	uint16_t f = 0;
	uint16_t l=height.size()-1;
	uint32_t max = 0;
	//if left side is grather than right side pointer indice loop must be terminated.
	while (f < l)
	{
		//(l - f) * min(height[f], height[l]) => minimum height * distance between right and left container.
		// if new value is grather than max, then it is the new max.
		(max < (l - f) * min(height[f], height[l])) ? max = (l - f) * min(height[f], height[l]) : NULL;
		//if left sides height is smaller then right, left side must slide to rigt, if its not right side must slide to left.
		(height[f] < height[l]) ? f++ : l--;
	}
	return max;
}
