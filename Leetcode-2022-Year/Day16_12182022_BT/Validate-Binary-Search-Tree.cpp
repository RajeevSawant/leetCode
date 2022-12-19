/*
* Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left 
subtree
 of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

Input: root = [2,1,3]
Output: true


*/


bool isValidBST(TreeNode* root) {
    return validate(root, NULL, NULL);
}

bool validate(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {

    if (!root) {
        return true;
    }

    if ((minNode && root->val <= minNode->val) || (maxNode && root->val >= maxNode->val)) {
        return false;
    }

    return (validate(root->left, minNode, root) && validate(root->right, root, maxNode));

}