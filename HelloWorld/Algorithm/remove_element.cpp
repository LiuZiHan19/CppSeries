#include <iostream>
#include <vector>

/*
  �Ƴ�ָ��Ԫ��
*/
int removeElement(std::vector<int>& nums, int element)
{
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (nums[i] == element)
		{
			nums.erase(nums.begin() + i);
			i--;
		}
	}

	return nums.size();
}