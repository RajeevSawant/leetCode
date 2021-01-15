#include <iostream>
#include <vector>
#include <queue>
using namespace std;


vector<int> rightSideView(TreeNode* root)
{
	vector<int> res;

	if (root == NULL)
		return res;

	queue<TreeNode*> que;
	que.push(root);

	while(!que.empty())
	{
		int n = que.size();

		for (int i = 0; i < n; i++)
		{
			TreeNode* current = que.front();
			que.pop();

			if (i == n - 1)
			{
				res.push_back(current -> val);	
			}
			
			if (current -> left != NULL)
			{
				que.push(current -> left);
			}

			if (current -> right != NULL)
			{
				que.push(current -> right);
			}
		}

	}

	return res;

}




// https://www.youtube.com/watch?v=jCqIr_tBLKs
