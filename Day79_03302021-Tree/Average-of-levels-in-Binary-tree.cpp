




vector<double> averageOfLevels(TreeNode* root){

	vector<double> results;

	queue<TreeNode*> q;

	q.push(root);

	while(!q.empty()){
		
		long temp = 0;
		int s = q.size();

		for(int i = 0; i < s; i++){

			TreeNode* tmp = q.front();
			q.pop();

			if (tmp -> left) q.push(tmp -> left);
			if (tmp -> right) q.push(tmp -> right);
			
			temp += tmp -> val;
		}

		results.push_back((double)temp/s);

	}

	return results;
}
