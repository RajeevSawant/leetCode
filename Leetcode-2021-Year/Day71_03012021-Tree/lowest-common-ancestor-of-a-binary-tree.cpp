

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};


TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){

	if (root == NULL){return NULL};

	if (root == p || root == q){
		return root;
	}

	TreeNode* left-side = lowestCommonAncestor(root -> left, p, q);
       	TreeNode* right-side = lowestCommonAncestor(root -> right, p, q);

	if (left-side != NULL && right-side != NULL)
		return root;

	if (left-side == NULL && right-side == NULL)
		return NULL;	


	return (left != NULL ? left : right);

}



// youtube: https://www.youtube.com/watch?v=13m9ZCB8gjw
