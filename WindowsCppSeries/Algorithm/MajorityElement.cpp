#include <iostream>
#include <vector>

using namespace std;

/*
  找出数量最多的元素
*/
int MajorityElement(vector<int>& nums)
{
	int numsHalfSize = nums.size() / 2;
	for (size_t i = 0; i < nums.size(); i++)
	{
		int isMajority = 1;
		for (size_t j = 0; j < nums.size(); j++)
		{
			if (j != i && nums[i] == nums[j])
			{
				isMajority++;
			}
		}

		if (isMajority > numsHalfSize)
		{
			return nums[i];
		}
	}

	return -1;
}

/*
  找出数量最多的元素 => 投票算法
*/
int BoyerMooreAlgorithm(vector<int>& nums)
{
	int candidate = nums[0];
	int count = 1;
	for (size_t i = 1; i < nums.size(); i++)
	{
		// cunt == 0 -> 数赋值为当前数
		if (count == 0)
		{
			candidate = nums[i];
			count = 1;
		}
		// 数字==当前数 -> count++
		else if (candidate == nums[i])
		{
			count++;
		}
		// 数字!=当前数 -> count--
		else
		{
			count--;
		}
	}

	return candidate;
}