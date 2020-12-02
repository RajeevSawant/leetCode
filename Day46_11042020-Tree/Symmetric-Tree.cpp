#include <iostream>
using namespace std;


struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};


bool handler(TreeNode* left, TreeNode* right)
{
	if (left = NULL || right == NULL)
		return left == right;

	if (left -> val != right -> val)
		return false;

	return (handler(left -> left, right -> right) && handler(left -> right, right -> left));
}




bool isSymmetric(TreeNode* root)
{
	if (root == NULL) return true;

	return handler(root -> left, root -> right);
}
