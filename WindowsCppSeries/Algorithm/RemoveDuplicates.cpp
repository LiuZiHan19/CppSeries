#include <iostream>
#include <vector>

using namespace std;

/*
  �Ƴ��ظ��� => ����ʹ�ö��������ռ�
*/
vector<int>& RemoveDuplicates(vector<int>& nums)
{
	vector<int>* duplicates = new vector<int>();
	for (size_t i = 0; i < nums.size(); i++)
	{
		int element = nums[i];
		bool isHave = false;
		// �����ظ�������
		// ���ظ����Ƴ�����
		// û�ظ���������ӽ�ȥ
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

	return nums;
}