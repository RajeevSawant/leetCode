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



ListNode* middleNode(ListNode* head)
{
	// if the head is NULL or next element is NULL , so no midpoint can be found for 2 elements, we return NULL 
	if (head == NULL || head -> next == NULL)
		return head;

	// create a fast and slow list
	ListNode* fast = head;
	ListNode* slow = head;


	// be in the loop until next element of fast is not NULL else we would reach fast and return would be 1 to the right of midpoint
	while(fast != NULL && fast -> next != NULL)
	{
		// Move fast 2 twice ahead
		fast = fast -> next -> next;

		// Move slow 1 step ahead, by the time fast is at the end slow would be at the midpoint
		slow = slow -> next;
	}
	
	return slow;
}


void Cnode(ListNode** head_ref, int data)
{
	ListNode* cur = new ListNode();

	cur -> val = data;
	cur -> next = (*head_ref);
	
	(*head_ref) = cur;
}



int main()
{
	ListNode *res = NULL, *lst = NULL;

	Cnode(&lst , 6);
	Cnode(&lst , 5);
	Cnode(&lst , 4);
	Cnode(&lst , 3);
	Cnode(&lst , 2);
	Cnode(&lst , 1);
	

	res = middleNode(lst);

	cout << "The Middle of the Linked List is at " << res -> val << endl;

	return 0;
}



