#include <iostream>
#include <vector>
#include "logger.h"

using namespace std;

vector<int>& Merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
vector<int>& RemoveElement(vector<int>& nums, int element);
vector<int>& RemoveDuplicates(vector<int>& nums);
vector<int>& RemoveDuplicatesNoExtraMemorySpace(vector<int>& nums);
int MajorityElement(vector<int>& nums);
int BoyerMooreAlgorithm(vector<int>& nums);
vector<int>& RotatedArrary(vector<int>& nums, int rotatedNumber);
vector<int>& RotatedArrayMax(vector<int>& nums, int k);
int MaxProfit(vector<int>& nums);

int main()
{
	{
		shared_ptr<vector<int>> nums1 = make_shared<vector<int>>(vector<int>({ 1, 2, 3, 0, 0, 0 }));
		shared_ptr<vector<int>> nums2 = make_shared<vector<int>>(vector<int>({ 2, 5, 6 }));
		int m = 3;
		int n = 3;
		vector<int>& answer = Merge(*nums1, m, *nums2, n);
		cout << "Merge: ";
		for (size_t i = 0; i < answer.size(); i++)
		{
			cout << answer[i];
			if (i != answer.size() - 1)
				cout << ",";
		}
	}

	{
		Line();
		shared_ptr<vector<int>> nums1 = make_shared<vector<int>>(vector<int>({ 3, 2, 2, 3 }));
		int element = 3;
		vector<int>& answer = RemoveElement(*nums1, element);
		cout << "RemoveElement: ";
		for (size_t i = 0; i < answer.size(); i++)
		{
			cout << answer[i];
			if (i != answer.size() - 1)
				cout << ",";
		}
	}

	{
		Line();
		shared_ptr<vector<int>> nums1 = make_shared<vector<int>>(vector<int>({ 3, 2, 2, 3 }));
		vector<int>& answer = RemoveDuplicates(*nums1);
		cout << "RemoveDuplicates: ";
		for (size_t i = 0; i < answer.size(); i++)
		{
			cout << answer[i];
			if (i != answer.size() - 1)
				cout << ",";
		}
	}

	{
		Line();
		shared_ptr<vector<int>> nums1 = make_shared<vector<int>>(vector<int>({ 1, 1, 1, 2, 2, 3 }));
		vector<int>& answer = RemoveDuplicatesNoExtraMemorySpace(*nums1);
		cout << "RemoveDuplicatesNoExtraMemorySpace: ";
		for (size_t i = 0; i < answer.size(); i++)
		{
			cout << answer[i];
			if (i != answer.size() - 1)
				cout << ",";
		}
	}

	{
		Line();
		shared_ptr<vector<int>> nums1 = make_shared<vector<int>>(vector<int>({ 2,2,1,1,1,2,2 }));
		int answer1 = BoyerMooreAlgorithm(*nums1);
		cout << "BoyerMooreAlgorithm: " << answer1 << endl;
		shared_ptr<vector<int>> nums2 = make_shared<vector<int>>(vector<int>({ 3,2,3 }));
		int answer2 = BoyerMooreAlgorithm(*nums2);
		cout << "BoyerMooreAlgorithm: " << answer2;
	}

	{
		Line();
		shared_ptr<vector<int>> nums1 = make_shared<vector<int>>(vector<int>({ 1, 2, 3, 4, 5 }));
		vector<int>& answer = RotatedArrayMax(*nums1, 3);
		cout << "RotatedArrayMax: ";
		for (size_t i = 0; i < answer.size(); i++)
		{
			cout << answer[i];
			if (i != answer.size() - 1)
				cout << ",";
		}
	}

	{
		Line();
		shared_ptr<vector<int>> nums1 = make_shared<vector<int>>(vector<int>({ 7, 1, 5, 3, 6, 4 }));
		shared_ptr<vector<int>> nums2 = make_shared<vector<int>>(vector<int>({ 7, 6, 4, 3,1 }));
		MaxProfit(*nums1);
	}

	return 0;
}