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

/*
 *
Several memory leaks are avoided here:

The dummy node. It doesn't need to be a pointer. It can be allocated on the stack like this ListNode dummy(0); dummy.next = head; cur= &dummy;
When skipping over the duplicate nodes with out deallocating them as well the memory is leaked. C/C++ doesn't have GC, it's the developer's responsibility to delete/free memory allocated on the heap.
 *
 */

 ListNode* deleteDuplicates(ListNode* head) {
        
        // if head or head -> next doesnt exits 
        if (head == NULL || head -> next == NULL) return head;
        
        // Create a dummyHead to return the head at the end
        ListNode dummyHead(0); dummyHead.next = head;
        
        // Create a current node pointing to head, create a prev node which is going to be modified anyway.
        ListNode* cur = head; ListNode* prev = &dummyHead;
        
        // Until cur or cur -> next exist 
        while(cur && cur -> next)
        {
            
            // if cur -> val is equal to cur -> next -> val
            if (cur -> val == cur -> next -> val)
            {
                // store the cur value in duplicate
                int duplicate = cur -> val;
                
                // if cur exist and cur value is equal to duplicate
                while (cur && cur -> val == duplicate)
                {
                    // make cur -> next equal to prev -> next
                    prev -> next = cur -> next;
                    
                    // delete the current item
                    delete cur;
                    
                    // make the prev -> next as cur item.
                    cur = prev -> next;
                }
            }
            else
            {
                // copy the cur to prev
                prev = cur;
                
                // move cur ahead
                cur = cur -> next;
            }
            
        }
        
        // return the dummyhead.next item
        return dummyHead.next;
        
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

	Cnode(&lst , 5);
	Cnode(&lst , 4);
	Cnode(&lst , 4);
	Cnode(&lst , 3);
	Cnode(&lst , 3);
	Cnode(&lst , 2);
	Cnode(&lst , 1);


	res = deleteDuplicates(lst);
	
	cout << "The result list is "<<endl;
	while(res)
	{
		cout << res -> val  << " ";
		res = res -> next;
	}
	cout << endl;
	return 0;
}


