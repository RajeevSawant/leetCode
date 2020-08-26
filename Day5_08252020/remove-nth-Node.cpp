#include <iostream>
#include <vector>
using namespace std;


class ListNode
{
	public:
		int val;
		ListNode* next;
		ListNode(): val(0), next(NULL) {}
		ListNode(int x): val(x), next(NULL) {}
};


ListNode* removeNthFromEnd(ListNode* head , int n)
{
	ListNode dummy(-1);
	dummy.next = head;

	ListNode* front = head;
	ListNode* back = head;

	for (int i = 0; i <= n; i++)
	{
		front = front -> next;
	}

	while (front != NULL)
	{
		front = front -> next;
		back = back -> next;
	}

	back -> next = back -> next -> next;

	return dummy.next;
}


void Cnode(ListNode** head_ref, int data)
{
	ListNode* container = new ListNode();

	container -> val = data;
	container -> next = (*head_ref);

	(*head_ref) = container;
}



void printlist(ListNode* cur)
{
	while (cur != NULL)
	{
		cout << " " << cur -> val;
		cur = cur -> next;
	}

	cout << endl;
}


int main()
{
	ListNode* head = NULL;

	Cnode(&head, 5);
	Cnode(&head, 4);
	Cnode(&head, 3);
	Cnode(&head, 2);
	Cnode(&head, 1);

	printlist(head);

	
	ListNode* res = NULL;
	res = removeNthFromEnd(head, 2);

	cout << "Updated list is \n\n";
	printlist(res);

	
	return 0;

}



