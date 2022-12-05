/*
 Given the root of a binary tree, invert the tree, and return its root.
 *
 */



    TreeNode* invertTree(TreeNode* root) {

        if (root){
            invertTree(root -> left);
            invertTree(root -> right);
            swap(root -> left, root -> right);
        }

        return root;
    }
