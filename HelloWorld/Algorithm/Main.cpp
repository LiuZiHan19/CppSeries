#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
int remove_element(std::vector<int>& nums, int element);
int remove_duplicates(std::vector<int>& nums);
int remove_duplicates_no_extra_memory_space(std::vector<int>& nums);

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
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 3, 2, 2, 3 }));
		int element = 3;
		int size = remove_element(*nums1, element);
		std::cout << std::endl;
		std::cout << "remove_element.size()->" << size << std::endl;
	}

	{
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 3, 2, 2, 3 }));
		remove_duplicates(*nums1);
	}

	{
		std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 1, 1, 1, 2, 2, 3 }));
		remove_duplicates_no_extra_memory_space(*nums1);
	}

	return 0;
}