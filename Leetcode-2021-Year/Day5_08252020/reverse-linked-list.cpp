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



void Cnode(ListNode** head_ref, int data)
{
	ListNode* container = new ListNode();

	container -> val = data;
	container -> next = (*head_ref);

	(*head_ref) = container;
}


void printList(ListNode* cur)
{
	while (cur)
	{
		cout << " " << cur -> val;
		cur = cur -> next;
	}

	cout << endl;
}


ListNode* reverseBetween (ListNode* head , int m , int n)
{
	if (m == n) return head;
	ListNode preHead(0);
	ListNode* pre = &preHead;

	preHead.next = head;


	n -= m;

	while (--m)
	{
	 pre = pre -> next;	
	}

	ListNode* pStart = pre -> next;

	while (n--)
	{
		ListNode* p = pStart -> next;
		pStart -> next = p -> next;
		p -> next = pre -> next;
		pre -> next = p;
	}

	return preHead.next;
	
}



int main()
{	
	ListNode* head = NULL;

	Cnode(&head, 5);
	Cnode(&head, 4);
	Cnode(&head, 3);
	Cnode(&head, 2);
	Cnode(&head, 1);
	
	cout << "Entered list is \n";
	printList(head);

	ListNode* res = NULL;
	res = reverseBetween(head, 2, 4);
	cout <<"New List is \n";
	printList(res);

	return 0;
}
