#include <iostream>
#include <vector>

using namespace std;

/*
  ������Ʊ���ʱ��=>ֻҪ������������������������
*/
int MaxProfit2(vector<int>& nums)
{
	int profit = 0;
	for (int i = 1; i < nums.size(); i++)
	{
		int tmp = nums[i] - nums[i - 1];
		if (tmp > 0) profit += tmp;
	}

	return profit;
}