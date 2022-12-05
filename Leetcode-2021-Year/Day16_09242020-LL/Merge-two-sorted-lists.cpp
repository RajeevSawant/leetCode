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



ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (!(l1)) return l2;
        if (!(l2)) return l1;
        
        // create a dummy List to return the head
        ListNode dummy, *result = &dummy;
        
        // loop around the list only until both l1 and l2 exits 
        while (l1 && l2)
        {
            // if value in l1 is less, than it would be first in the list
            if (l1 -> val < l2 -> val)
            {
                // save value of l1 to result
                result -> next = new ListNode(l1 -> val);
                
                // move l1 to next element
                l1 = l1 -> next;
            }
            else
            {
                // value of node in l1 is less than value of node in l2
                
                // save value of l2 to result 
                result -> next = new ListNode (l2 -> val);
                
                // move l2 to next element
                l2 = l2 -> next;
            }
            
            // move result
            result = result -> next;
        }
        
    
        if (l1)
        {
            // if there are still some values left in l1 then append those to the result
            result -> next = l1;
        }
        
        if (l2)
        {
            // if there are still some values left in l2 then append those to the result
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

