#include <iostream>
using namespace std;


class ListNode
{
	public:
		int val;
		ListNode* next;
		ListNode(): val(0), next(NULL) {}
		ListNode(int x): val(x), next(NULL) {}
};


ListNode*  deleteNode(ListNode* node, int data)
{
	if (!(node)) return NULL;
	
	ListNode dummy(0), *cur = &dummy;
	dummy.next = (node);
	
	while (cur)
	{
		if (cur -> val == data)
		{
			cur -> val = cur -> next -> val;
			cur -> next = cur  -> next -> next;
		}

		cur = cur -> next;
	}

	return dummy.next;
}


void Cnode(ListNode** head_ref, int data)
{
	ListNode* container = new ListNode();
	container -> val = data;
	container -> next = (*head_ref);

	(*head_ref) = container;
}


void printList(ListNode* head_ref)
{
	ListNode* cur = head_ref;

	while(cur)
	{	
		cout << " " << cur -> val;
		cur = cur -> next;
	}
	cout << endl;
}

int main()
{
	ListNode* lst = new ListNode();
	Cnode(&lst, 10);
	Cnode(&lst, 3);
	Cnode(&lst, 4);
	Cnode(&lst, 1);
	Cnode(&lst, 7);

	// print the list
	printList(lst);

	// Delete the Node
	
	ListNode* res;
	res = deleteNode(lst, 4);

	// print the list after deleting the node
	printList(res);

	return 0;
}
