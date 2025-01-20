#include <iostream>
#include <vector>

/*
  合并有序数组
*/
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
	int size = m + n;
	int startIndex = size - 1;
	int cycleTimes = n;
	int nums2Index = 0;
	while (cycleTimes > 0)
	{
		nums1[startIndex--] = nums2[nums2Index++];
		cycleTimes--;
	}

	for (size_t i = 0; i < nums1.size(); i++)
	{
		for (size_t j = i + 1; j < nums1.size(); j++)
		{
			if (nums1[i] > nums1[j])
			{
				int temp = nums1[i];
				nums1[i] = nums1[j];
				nums1[j] = temp;
			}
		}
	}

	std::cout << std::endl;
	std::cout << "Merge -> ";
	for (size_t i = 0; i < nums1.size(); i++)
	{
		std::cout << nums1[i] << ",";
	}
}