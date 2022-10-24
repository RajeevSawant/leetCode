/*
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.
 *
 */



    int maxLength = 0;

    int dfs(TreeNode* root){

        if (root == NULL)
            return 0;

        int leftdia = dfs(root -> left);
        int rightdia = dfs(root -> right);

        if ((leftdia + rightdia) > maxLength){
            maxLength = leftdia + rightdia;
        }

        return max(1 + leftdia , 1 + rightdia);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxLength;
    }
