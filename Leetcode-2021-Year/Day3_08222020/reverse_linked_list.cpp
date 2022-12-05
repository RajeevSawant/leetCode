#include <iostream>
using namespace std;


class ListNode
{
	public:
		int val;
		ListNode* next;
};



void CreateNode(ListNode** head_ref, int data)
{
	ListNode* container = new ListNode();

	container -> val = data;
	container -> next = (*head_ref);

	(*head_ref) = container;	
}


void PrintList(ListNode* head_ref)
{
	ListNode* cur = head_ref;

	while(cur)
	{
		cout << " "<< cur -> val;
		cur = cur -> next;
	}
	cout << endl;
}



ListNode* reverseList (ListNode* head)
{
	ListNode* cur = head;
	ListNode* prev = NULL;
	ListNode* Next = NULL;

	while (cur != NULL)
	{
		Next = cur -> next;
		cur -> next = prev;
		prev = cur;
		cur = Next;
	}
	
	return prev;
}



int main()
{
	ListNode *a = new ListNode();

	CreateNode(&a, 10);
	CreateNode(&a, 9);
	CreateNode(&a, -1);
	CreateNode(&a, 19);

	PrintList(a);

	ListNode* b = new ListNode();
	b = reverseList(a);

	PrintList(b);

	return 0;
}
