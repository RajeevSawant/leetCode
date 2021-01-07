#include <iostream>
using namespace std;


struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(): val(0), left(NULL), right(NULL) {}
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};



int numTrees(int n)
{	
	int G[n + 1];

	G[0] = G[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		G[i] = 0;
		for (int j = 0; j < i; j++)
		{
			G[i] += G[j] * G[i - j - 1];
		}
	}

	return G[n];
}


/*
	Youtube: https://www.youtube.com/watch?v=OIc0mHgHUww
*/

