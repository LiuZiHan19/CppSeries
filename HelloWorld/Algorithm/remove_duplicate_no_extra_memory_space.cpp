#include <iostream>
#include <vector>

int remove_duplicates_no_extra_memory_space(std::vector<int>& nums)
{
	for (size_t i = 0; i < nums.size(); i++)
	{
		bool isGreaterThan2 = false;
		for (size_t j = 0; j < nums.size(); j++)
		{
			if (i != j && nums[i] == nums[j])
			{
				if (isGreaterThan2)
				{
					nums.erase(nums.begin() + i);
					i--;
					j--;
					break;
				}
				isGreaterThan2 = true;
			}
		}
	}

	std::cout << std::endl;
	std::cout << "remove_duplicates_no_extra_memory_space -> ";
	for (size_t i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << ",";
	}

	return nums.size();
}