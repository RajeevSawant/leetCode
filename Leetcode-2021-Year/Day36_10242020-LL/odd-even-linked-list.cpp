#include <iostream>
using namespace std;


struct ListNode{

	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}
};


ListNode* oddEvenList(ListNode* head)
{
	if (!head) return head;
	ListNode *odd = head, *evenhead = head -> next, *even = evenhead;


	while(even && even -> next)
	{
		even -> next = even -> next -> next;
		odd -> next = odd -> next -> next;
		odd = odd -> next;
		even = even -> next;
	}
	
	odd -> next = evenhead;

	return head;
}


void cNode(ListNode** head_ref, int data)
{

	ListNode* cur = new ListNode();

	cur -> val = data;
	cur -> next = (*head_ref);

	(*head_ref) = cur;
}


void printList(ListNode* cur)
{
	cout << endl;
	while (cur)
	{
		cout << cur -> val << " ";
		cur = cur -> next;
	}
	cout << endl;

}

int main()
{
	ListNode* lst = NULL;

	cNode(&lst, 5);
	cNode(&lst, 4);
	cNode(&lst, 3);
	cNode(&lst, 2);
	cNode(&lst, 1);
	
	printList(lst);

	ListNode* rst = oddEvenList(lst);
	
	cout << "The result is \n";
	printList(rst);


	return 0;
}
