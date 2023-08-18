/*
* Given the root of a binary tree,
return the inorder traversal of its nodes' values.

*/

// C++
vector<int> res;

vector<int> inorderTraversal(TreeNode* root) {

    if (root) {
        inorderTraversal(root->left);
        res.push_back(root->val);
        inorderTraversal(root->right);
    }

    return res;
}