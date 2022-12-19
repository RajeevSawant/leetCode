/*
* 
* Given the root of a binary tree, return the inorder traversal of its nodes' values.
* 
* 
Input: root = [1,null,2,3]
Output: [1,3,2]
*/

vector<int> res;

vector<int> inorderTraversal(TreeNode* root) {

    if (root) {
        inorderTraversal(root->left);
        res.push_back(root->val);
        inorderTraversal(root->right);
    }

    return res;
}
