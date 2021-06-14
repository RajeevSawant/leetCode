

struct TreeNode{

	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(): val(0), left(NULL), right(NULL) {}
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};



int closestValue(TreeNode* root, int target){

	int a = root -> val;

	TreeNode* kid = (a < target)? root -> right : root -> left;

	if (!kid)
	   return a;

	int b = closestValue(kid , target);

	return (abs(a - target) < abs(b - target)) ? a : b;
}


