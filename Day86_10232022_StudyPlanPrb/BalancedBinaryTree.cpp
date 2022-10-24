/*
 *
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.
 *
 *
 */



    int depth(TreeNode *root){
        if (root == NULL)
            return 0;

        return max(depth(root -> left), depth(root -> right)) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;

        int leftDep = depth(root -> left);
        int rightDep = depth(root -> right);

        return (abs(leftDep - rightDep) <= 1) && isBalanced(root -> left) && isBalanced(root -> right);
    }
