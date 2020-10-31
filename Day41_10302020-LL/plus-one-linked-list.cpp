#include <iostream>
using namespace std;


struct ListNode{
	
	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
};


int addOne(ListNode* node)
{
	int carry = node -> next ? addOne(node -> next) : 1;             // if last node , add 1, otherwise add carry
	int sum = node -> val + carry;
	node -> val = sum % 10;
	return sum / 10;
}


ListNode* plusOne(ListNode* head)
{
	if (!head) return new ListNode(1);     // if NULL return a new node

	if (addOne(head) != 0)
	{
		ListNode* newHead = new ListNode(1);
		newHead -> next = head;
		head = newHead;
	}

	return head;
}


void cNode (ListNode** head_ref, int data)
{
	ListNode* cur = new ListNode();

	cur -> val = data;
	cur -> next = (*head_ref);

	(*head_ref) = cur;
}


void printList(ListNode* head)
{
	cout << "[ ";
	while (head)
	{
		cout << head -> val << " ";
		head = head -> next;
	}
	cout << "] \n";
}

int main()
{
	ListNode* lst = NULL;

	cNode(&lst, 3);
	cNode(&lst, 2);
	cNode(&lst, 1);

	
	printList(lst);
	
	ListNode* res = plusOne(lst);

	printList(res);

	return 0;
}
