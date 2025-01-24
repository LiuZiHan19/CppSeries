#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
  ��ת���� => �����ⷨ
*/
vector<int>& RotatedArrary(vector<int>& nums, int rotatedNumber)
{
	vector<int> container;
	for (size_t i = 0; i < rotatedNumber; i++)
	{
		container.clear();
		for (size_t j = 0; j < nums.size(); j++)
		{
			// �洢��һ��ֵ
			int nextIndex = j + 1;
			if (nextIndex == nums.size())
			{
				nextIndex = 0;
			}
			container.push_back(nums[nextIndex]);

			// �������������ֵ
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
  ��ת���� => ���
*/
vector<int>& RotatedArrayMax(vector<int>& nums, int k)
{
	// ȡ�������Ч��ת
	k %= nums.size();

	// ��ת��������
	reverse(nums.begin(), nums.end());

	// ��תk
	reverse(nums.begin(), nums.begin() + k);

	//��תʣ��
	reverse(nums.begin() + k, nums.end());

	return nums;
}