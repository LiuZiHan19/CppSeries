#include <iostream>
#include <vector>

/*
  �Ƴ��ظ��� -> ����ʹ�ö��������ռ�
*/
int remove_duplicates(std::vector<int>& nums)
{
	std::vector<int>* duplicates = new std::vector<int>();
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

	std::cout << "Remove duplicates -> ";
	for (size_t i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << ",";
	}

	return nums.size();
}