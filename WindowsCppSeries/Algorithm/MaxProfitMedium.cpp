#include <iostream>
#include <vector>

using namespace std;

/*
  买卖股票最佳时机=>只要今日相较于昨天有利润就卖出
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