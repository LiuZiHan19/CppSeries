#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& nums)
{
	int cost = INT_MAX;
	int profit = 0;
	for (size_t i = 0; i < nums.size(); i++)
	{
		cost = min(cost, nums[i]);
		profit = max(profit, nums[i] - cost);
	}

	return profit;
}