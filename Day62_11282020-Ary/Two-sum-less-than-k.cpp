#include <iostream>
#include <vector>
using namespace std;


int twoSumLessThanK(vector<int>& A, int K)
{
	
	sort(A.begin(), A.end());
	int S = -1, size = A.size();


	for (int i= 0, j = size - 1; i < j;)
	{
	
		if ((A[i] + A[j]) < K)
		{
			S = max(S, (A[i++] + A[j]));
		}else{
			j--;
		}
	}

	return S;
}
