#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int n, std::vector<int>& nums2, int m)
{
	int startIndex = nums1.size() - 1;
	int endIndex = nums1.size() - 1 - m;
	int nums2Index = 0;
	for (size_t i = startIndex; i > endIndex; i--)
	{
		nums1[i] = nums2[nums2Index++];
	}

	for (size_t i = 0; i < nums1.size(); i++)
	{
		std::cout << nums1[i] << ", ";
	}

	for (size_t i = 0; i < nums1.size(); i++)
	{
		for (size_t j = i; j < nums1.size(); j++)
		{
			if (nums1[i] > nums1[j])
			{
				int temp = nums1[j];
				nums1[j] = nums1[i];
				nums1[i] = temp;
			}
		}
	}
	std::cout << "" << std::endl;
	for (size_t i = 0; i < nums1.size(); i++)
	{
		std::cout << nums1[i] << ", ";
	}
}

void remove_element(std::vector<int>& nums1, int element) 
{

}

int main()
{
	std::shared_ptr<std::vector<int>> nums1 = std::make_shared<std::vector<int>>(std::vector<int>({ 1, 2, 3 }));
	std::shared_ptr<std::vector<int>> nums2 = std::make_shared<std::vector<int>>(std::vector<int>({ 2, 5, 6 }));

	nums1->push_back(0);
	nums1->push_back(0);
	(*nums1).push_back(0);

	merge(*nums1, 3, *nums2, 3);

	return 0;
}