#include <iostream>
#include <vector>

using namespace std;

/*
  �ҳ���������Ԫ��
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
  �ҳ���������Ԫ�� => ͶƱ�㷨
*/
int BoyerMooreAlgorithm(vector<int>& nums)
{
	int candidate = nums[0];
	int count = 1;
	for (size_t i = 1; i < nums.size(); i++)
	{
		// cunt == 0 -> ����ֵΪ��ǰ��
		if (count == 0)
		{
			candidate = nums[i];
			count = 1;
		}
		// ����==��ǰ�� -> count++
		else if (candidate == nums[i])
		{
			count++;
		}
		// ����!=��ǰ�� -> count--
		else
		{
			count--;
		}
	}

	return candidate;
}