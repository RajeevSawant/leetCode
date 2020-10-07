#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(): val(0), left(NULL), right(NULL) {}
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
	TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};


void inorder(TreeNode* root, vector<int>& node)
{
	// Compare the root is NULL then go back.
	if (root == NULL ) return;

	// Go to the left
	inorder(root -> left, node);

	// Save the value of the node to the vector
	node.push_back(root -> val);

	// Go to the right
	inorder(root -> right, node);
}

vector<int> inorderTraversal(TreeNode* root)
{
	// Create a vector to store the result
	vector<int> node;

	// Call the inorder Traversal func
	inorder(root, node);
	
	// return Vector 
	return node;
}


struct TreeNode* insertValue(struct TreeNode* root, int value, queue<TreeNode*>& q)
{
	TreeNode* node = new TreeNode(value);
	
	if (!root)
	{
		root = node;
	}
	else if (q.front() -> left == NULL)
	{
		q.front() -> left = node;
	}
	else
	{
		q.front() -> right = node;
		q.pop();
	}

	q.push(node);

	return root;
}


TreeNode* createTree (int arr[], int n)
{
	TreeNode* root = NULL;
	queue<TreeNode*> q;

	for (int i = 0; i < n ; i++)
		root = insertValue(root, arr[i], q);

	return root;
}



int main()
{
	int arr[] = {1, 2, 3};

	int n = sizeof (arr) / sizeof (arr[0]);

	TreeNode* root = createTree (arr, n);

	vector<int> result;
	result = inorderTraversal(root);

	cout << "The Inorder Traversal outcome is " << endl;
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}

	cout << endl;
	return 0;
}
