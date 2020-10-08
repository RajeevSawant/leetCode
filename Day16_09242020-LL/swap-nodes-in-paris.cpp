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


ListNode* swapPairs(ListNode* head) {
        
        // if head or head -> next doesnt exits then return head
        if(!(head) || !(head -> next)) return head;
        
        // create a temp node , pointing to head -> next
        ListNode* temp = head -> next;
        
        // call recursively to the last element and point the end of last element which NULL to the head -> next
        head -> next = swapPairs(temp -> next);
        
        // Point the second last element as the next of last element
        temp -> next = head;
        
        // the second last element.
        return temp;
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
	
	cout << "The Parameters are \n";

	while (cur)
	{
		cout << cur -> val << " ";
		cur = cur -> next;
	}
	cout << endl;
}


int main()
{
	ListNode *res, *lst;

	Cnode(&lst, 4);
	Cnode(&lst, 3);
	Cnode(&lst, 2);
	Cnode(&lst, 1);

	cout << "The original List is \n";
	printList(lst);


	res = swapPairs(lst);
	
	cout << "The Swapped List is \n";
	printList(res);
	
	
	return 0;
}
