#include <iostream>
#include <vector>

using namespace std;

/*
  ÒÆ³ýÖ¸¶¨ÔªËØ
*/
vector<int>& RemoveElement(vector<int>& nums, int element)
{
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (nums[i] == element)
		{
			nums.erase(nums.begin() + i);
			i--;
		}
	}

	return nums;
}