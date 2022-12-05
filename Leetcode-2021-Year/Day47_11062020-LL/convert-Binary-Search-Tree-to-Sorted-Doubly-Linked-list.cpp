
#include <iostream>
using namespace std;


void inorder(Node* n, Node* &prev, Node* &head)
{
	
	if (!head && !n -> left)
	{
		head = n;
		prev = n;
	}

	Node* left = n  -> left;
	Node* right = n -> right;


	if(left) inorder(left, prev, head);

	prev -> right = n;
	n  -> left = prev;


	prev = n;
	if (right) inorder(right, prev, head);
}



Node* treeToDoublyList(Node* root)
{
	if (!root) return NULL;

	Node* prev = NULL;
	Node* head = NULL;

	inorder(root, prev, head);
	
	prev -> right = head;
	head -> left = prev;

	return head;
}
