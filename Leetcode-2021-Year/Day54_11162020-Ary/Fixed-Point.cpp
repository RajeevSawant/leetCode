#include <iostream>
#include <vector>
using namespace std;


int fixedPoint(vector<int>& A)
{
	int A_size = A.size();

	for (int i = 0; i < A_size; i++)
	{
		
		if (A[i] == i)
			return i;

	}

	return -1;
}
