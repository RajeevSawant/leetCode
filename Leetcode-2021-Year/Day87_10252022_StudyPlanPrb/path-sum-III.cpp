/*
Given the root of a binary tree and an integer targetSum, return the number of paths where the sum of the values along the path equals targetSum.

The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).
*/





    int pathSum(TreeNode* root, long targetSum){
        if (!root) return 0;

        return sum(root , 0, targetSum) + pathSum(root -> left, targetSum) + pathSum (root -> right, targetSum);
    }

    int sum(TreeNode *root, long prevSum, long targetSum){
        if (!root)
            return 0;

        long current = root -> val + prevSum;

        return (current == targetSum) + sum(root -> left, current, targetSum) + sum(root -> right, current, targetSum);
    }

