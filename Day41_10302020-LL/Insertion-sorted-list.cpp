#include <iostream>
using namespace std;


struct ListNode{
	
	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
};


void cNode(ListNode** head_ref, int data)
{
	ListNode* cur = new ListNode();
	cur -> val = data;
	cur -> next = (*head_ref);

	(*head_ref) = cur;
}

ListNode* insertionSortList(ListNode* head)
{
	
	ListNode* dummy = new ListNode(0);
	dummy -> next = head;

	ListNode* pre = dummy, *cur = head;


	while(cur)
	{
		if ((cur -> next) && (cur -> next -> val < cur -> val))
		   {  
		 	while ((pre -> next) && (pre -> next -> val < cur -> next -> val))
			{
				pre = pre -> next;
			}
			
			ListNode* temp = pre -> next;
			pre -> next = cur -> next;
			cur -> next = cur -> next -> next;
			pre -> next -> next = temp;
			pre = dummy;
		   }
		   else
		   {
			cur = cur -> next;
		   }
	}

	return dummy -> next;

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

	cNode(&lst, 1);
	cNode(&lst, 2);
	cNode(&lst, 3);
	cNode(&lst, 4);

	
	ListNode* res = insertionSortList(lst);


	printList(res);
	
	return 0;
}
