#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
  轮转数组 => 暴力解法
*/
vector<int>& RotatedArrary(vector<int>& nums, int rotatedNumber)
{
	vector<int> container;
	for (size_t i = 0; i < rotatedNumber; i++)
	{
		container.clear();
		for (size_t j = 0; j < nums.size(); j++)
		{
			// 存储下一个值
			int nextIndex = j + 1;
			if (nextIndex == nums.size())
			{
				nextIndex = 0;
			}
			container.push_back(nums[nextIndex]);

			// 如果容器有两个值
			if (container.size() == 2)
			{
				nums[nextIndex] = container[0];
				container.erase(container.begin() + 0);
			}
			else
			{
				nums[nextIndex] = nums[j];
			}
		}
	}

	return nums;
}

/*
  轮转数组 => 题解
*/
vector<int>& RotatedArrayMax(vector<int>& nums, int k)
{
	// 取余避免无效轮转
	k %= nums.size();

	// 反转整个数组
	reverse(nums.begin(), nums.end());

	// 反转k
	reverse(nums.begin(), nums.begin() + k);

	//反转剩余
	reverse(nums.begin() + k, nums.end());

	return nums;
}