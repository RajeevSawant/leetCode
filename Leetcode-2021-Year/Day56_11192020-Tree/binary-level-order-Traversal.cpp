#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {

	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(): val(0), left(NULL), right(NULL) {}
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
	TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right) {}

};


vector<vector <int>> ret;


void buildVector(TreeNode* root, int depth)
{
	if (root = NULL) return;

	if (ret.size() == depth)
		ret.push_back(vector<int>());


	ret[depth].push_back(root -> val);
	buildVector(root -> left, depth + 1);
	buildVector(root -> right, depth + 1);
}

vector<vector<int>> levelOrder(TreeNode* root)
{
	buildVector(root , 0);
	return ret;
}

