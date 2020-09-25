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




ListNode*  mergeTwoLists(ListNode* l1,  ListNode* l2)
{
	ListNode dummy, *result = &dummy;

	while (l1 && l2)
	{
		if (l1 -> val < l2 -> val)
		{
			result -> next = new ListNode(l1 -> val);
			l1 = l1 ? l1 -> next : NULL;
		}
		else
		{
			result -> next = new ListNode(l2 -> val);
			l2 = l2 ? l2 -> next : NULL;
		}
		result = result -> next;
	}


	if (l1)
	{
		result -> next = l1; 
	}

	if (l2)
	{
		result -> next = l2;
	}


	return dummy.next;
}




void Cnode(ListNode** head_ref, int data)
{
	ListNode* cur = new ListNode();

	cur -> val = data;
	cur -> next = (*head_ref);

	(*head_ref) = cur;
}


void printList(ListNode* cur)
{
	cout << "The Linked List data is \n";
	while (cur)
	{
		cout << cur -> val <<" ";
		cur = cur -> next;
	}
	cout << "\n";
}

int main()
{
	ListNode* lst1 = NULL;
	ListNode* lst2 = NULL;

	ListNode* res = NULL;

	Cnode(&lst1, 4);
	Cnode(&lst1, 2);
	Cnode(&lst1, 1);

	Cnode(&lst2, 4);
	Cnode(&lst2, 3);
	Cnode(&lst2, 1);


	res = mergeTwoLists(lst1, lst2);

	printList(res);

	return 0;
}

