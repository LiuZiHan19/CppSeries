#include <iostream>
#include <vector>

using namespace std;

/*
  �Ƴ�ָ��Ԫ��
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