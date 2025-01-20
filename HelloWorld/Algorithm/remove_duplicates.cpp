#include <iostream>
#include <vector>

/*
  移除重复项 -> 允许使用额外的数组空间
*/
int remove_duplicates(std::vector<int>& nums)
{
	std::vector<int>* duplicates = new std::vector<int>();
	for (size_t i = 0; i < nums.size(); i++)
	{
		int element = nums[i];
		bool isHave = false;
		// 遍历重复项数组
		// 有重复项移除自身
		// 没重复将自身添加进去
		for (size_t j = 0; j < duplicates->size(); j++)
		{
			if (element == (*duplicates)[j])
			{
				isHave = true;
				break;
			}
		}

		if (isHave)
		{
			nums.erase(nums.begin() + i);
			i--;
		}
		else
		{
			duplicates->push_back(nums[i]);
		}
	}

	std::cout << "Remove duplicates -> ";
	for (size_t i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << ",";
	}

	return nums.size();
}