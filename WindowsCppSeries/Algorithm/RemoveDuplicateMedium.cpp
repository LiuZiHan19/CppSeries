#include <iostream>
#include <vector>

using namespace std;

/*
  移除>2的重复项 => 不使用额外的内存空间
*/
vector<int>& RemoveDuplicatesNoExtraMemorySpace(vector<int>& nums)
{
	for (size_t i = 0; i < nums.size(); i++)
	{
		bool isGreaterThan2 = false;
		for (size_t j = 0; j < nums.size(); j++)
		{
			if (i != j && nums[i] == nums[j])
			{
				if (isGreaterThan2)
				{
					nums.erase(nums.begin() + i);
					i--;
					j--;
					break;
				}
				isGreaterThan2 = true;
			}
		}
	}

	return nums;
}