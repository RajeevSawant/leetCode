#include <vector>
using namespace std;

struct TreeNode{

	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(): val(0), left(NULL), right(NULL) {}
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};



vector<string> binaryTreePaths(TreeNode* root){

	vector<string> res;

	if (root == NULL) return res;

	handler(root, res, to_string(root -> val));
	return res;
}



void handler(TreeNode* root, vector<string>& res, string local){

	if (!root -> left && !root -> right){
		res.push_back(local);
		return;
	}


	if (root -> left) handler(root -> left, res, local + "->" + to_string(root -> left -> val));
	if (root -> right) handler(root -> right, res, local + "->" + to_string(root -> right -> val));

}
