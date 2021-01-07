#include <iostream>
using namespace std;



struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
       	TreeNode(): val(0), left(NULL), right(NULL) {}	
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};



vector<TreeNode*> helper(int start, int end)
{
	vector<TreeNode*> res;

	if (start > end)
	{
		res.push_back(NULL);
		return res;
	}

	for (int i = start; i <= end; i++)
	{
		vector<TreeNode*> left = helper(start , i - 1);
		vector<TreeNode*> right = helper(i + 1, end);

		for (TreeNode* l: left)
		{
		  for (TreeNode* r : right)
		  {
			TreeNode* root = new TreeNode(i);
			root -> left = l;
			root -> right = r;

			res.push_back(root);
		  }
		}

	}

	return res;

}


vector<TreeNode*> generateTrees(int n)
{
	if (n == 0) vector<TreeNode*> ();
	return helper(1, n);
}




/*
 
// youtube video to watch https://www.youtube.com/watch?v=hQn61BjdA7M
 */
