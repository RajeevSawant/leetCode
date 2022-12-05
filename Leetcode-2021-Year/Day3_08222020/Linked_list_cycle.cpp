#include <iostream>
#include <vector>
#include <map>
using namespace std;




class ListNode
{
	public:
		int val;
		ListNode* next;
};




void Cnode(ListNode** head, int data)
{
	ListNode* container = new ListNode();

	container-> val = data;
	container-> next = (*head);

	(*head) = container;
}




ListNode* detectNode (ListNode* head)
{
	// only 2 nodes are not suffcient for detecting nodes
	if (head == NULL || head -> next == NULL || head -> next -> next == NULL) return NULL;

	map <ListNode* , int> L;
	ListNode* cur = head;


	while (cur)
	{
		if (L.find(cur) != L.end()) return cur;
	
		L[cur] = 1;
		cur = cur -> next;
	}
	
	return NULL;
}


void printList(ListNode *arr)
{
	while (arr)
	{
		cout << " " << arr -> val;
		arr = arr -> next;
	}
	cout << endl;
}

int main()
{
	ListNode *a = NULL;
	
	Cnode(&a , 10);
	Cnode(&a, 4);
	Cnode(&a, -1);
	Cnode(&a, -3);

	a -> next -> next -> next -> next = a -> next;
	ListNode *result = new ListNode();

	result = detectNode(a);
	cout << "The tail of the linklist is connected to node with value " << result -> val << endl;


	return 0;
}
