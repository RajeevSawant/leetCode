#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	if (n <= 0) return;

	int idm = nums1.size() - 1;
	int id1 = m - 1;
	int id2 = n - 1;


	while(idm >= 0)
	{
		
		if (id2 < 0 || (id1 >= 0 && (nums1[id1] > nums2[id2])))
		{
			nums1[idm--] = nums1[id1--];
		}
		else
		{
			nums1[idm--] = nums2[id2--];
		}
	}

}


int main()
{
	vector<int> nums1 {1, 2, 3, 0, 0, 0};
	vector<int> nums2 {2, 5, 6};

	merge(nums1, 3, nums2, 3);

	cout << "[ ";
	for(int i = 0; i < nums1.size(); i++)
	{
		cout << nums1[i] << " ";
	}
	cout << "] \n";
	return 0;
}
