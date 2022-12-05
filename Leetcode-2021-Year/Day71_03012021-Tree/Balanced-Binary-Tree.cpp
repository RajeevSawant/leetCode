

struct TreeNode{

	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};




int depth(TreeNode* root)
{
	if (root == NULL)
		return 0;

	return max(depth(root -> left), depth(root -> right)) + 1;
}


bool isBalanced(TreeNode* root)
{
	
	if (root == NULL) return true;

	int left = depth(root -> left);
	int right = depth(root -> right);

	return (abs(left - right) <= 1) && isBalanced(root -> left) && isBalanced(root -> right); 
}


/*
 * Time Complexity = O(N^2)
 * Sol : https://leetcode.com/problems/balanced-binary-tree/discuss/35691/The-bottom-up-O(N)-solution-would-be-better
 */
