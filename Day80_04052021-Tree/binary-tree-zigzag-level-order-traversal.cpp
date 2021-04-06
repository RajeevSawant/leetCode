#include <iostream>
#include <queue>
#include <vector>
using namespace std;


 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if (root == NULL)
            return res;

         queue<TreeNode*> que;

        que.push(root);
        bool lefttoright = true;
        while(que.size() > 0){

            int n = que.size();
            vector<int> local(n);

            for (int i = 0; i < n; i++){
                TreeNode* rt = que.front();
                que.pop();

                int index = lefttoright ? i : (n - 1 - i);

                local[index] = rt -> val;

                if (rt -> left) que.push(rt -> left);
                if (rt -> right) que.push(rt -> right);
            }

            lefttoright = !lefttoright;

            res.push_back(local);
        }

        return res;
}


