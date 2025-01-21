#include <iostream>
#include <vector>
#include "logger.h"

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
int removeElement(std::vector<int>& nums, int element);
int removeDuplicates(std::vector<int>& nums);
int removeDuplicatesNoExtraMemorySpace(std::vector<int>& nums);
int majorityElement(std::vector<int>& nums);
int boyerMooreAlgorithm(std::vector<int>& nums);
std::vector<int>& rotatedArrary(std::vector<int>& nums, int rotatedNumber);
std::vector<int>& rotatedArrayMax(std::vector<int>& nums, int k);

int main()
{
	{
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 1, 2, 3, 0, 0, 0 }));
		std::shared_ptr<std::vector<int>> nums2 = std::make_shared<std::vector<int>>(std::vector<int>({ 2, 5, 6 }));
		int m = 3;
		int n = 3;
		merge(*nums1, m, *nums2, n);
	}

	{
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 1 }));
		std::shared_ptr<std::vector<int>> nums2 = std::make_shared<std::vector<int>>(std::vector<int>({ 0 }));
		int m = 1;
		int n = 0;
		merge(*nums1, m, *nums2, n);
	}

	{
		NewLine();
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 3, 2, 2, 3 }));
		int element = 3;
		int size = removeElement(*nums1, element);
		std::cout << "remove_element->" << size << std::endl;
	}

	{
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 3, 2, 2, 3 }));
		removeDuplicates(*nums1);
	}

	{
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 1, 1, 1, 2, 2, 3 }));
		removeDuplicatesNoExtraMemorySpace(*nums1);
	}

	{
		NewLine();
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 2,2,1,1,1,2,2 }));
		int answer1 = boyerMooreAlgorithm(*nums1);
		std::cout << "majorityElement -> " << answer1 << std::endl;
		std::shared_ptr<std::vector<int>> nums2 = std::make_shared<std::vector<int>>(std::vector<int>({ 3,2,3 }));
		int answer2 = boyerMooreAlgorithm(*nums2);
		std::cout << "majorityElement ->" << answer2;
	}

	{
		NewLine();
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 1, 2, 3, 4, 5 }));
		std::vector<int>& numsRef = rotatedArrayMax(*nums1, 3);
		for (size_t i = 0; i < numsRef.size(); i++)
		{
			std::cout << numsRef[i] << ",";
		}
	}

	{

	}

	return 0;
}