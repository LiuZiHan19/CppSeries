#include <iostream>
#include <vector>

using namespace std;

// 7 5 4 2 6
// 1 -> cost=7, profit=0
// 2 -> cost=5, profit=0
// 3 -> cost=4, profit=0
// 4 -> cost=2, profit=0
// 5 -> cost=2, profit=4

// 7 6 5 4 3
// 1 -> cost=7, profit=0
// 2 -> cost=6, profit=0
// 3 -> cost=5, profit=0
// 4 -> cost=4, profit=0
// 5 -> cost=3, profit=0

int MaxProfit(vector<int>& nums)
{
	int cost = INT_MAX;
	int profit = 0;
	for (size_t i = 0; i < nums.size(); i++)
	{
		// ������С����
		cost = min(cost, nums[i]);
		// ˳�����, ������������ڻ���ǰ��
		profit = max(profit, nums[i] - cost);
	}

	return profit;
}