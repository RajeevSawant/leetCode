#include <iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
	ListNode(int x, ListNode* next): val(x), next(next) {}
};




ListNode* deleteDuplicates(ListNode* head)
{
        // create a local node
        ListNode* cur = head;
        
        // loop until cur and cur -> next exist 
        while(cur && cur -> next)
        {
            // check if the current element is equal to the next element            
            if(cur -> val  == cur -> next -> val)
            {
                // create temp to store the next node which has the same val as current node 
                ListNode* temp = cur -> next;
                
                // Move to the next node 
                cur -> next = cur -> next -> next;
                
                //delete the temp node
                delete temp;
            }
            else
            {
                // Move ahead only when the values are different
                cur = cur -> next;
            }
            
        }
        
        // return the head as it stays intact
        return head;
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
	ListNode* lst = NULL;

	Cnode(&lst, 2);
	Cnode(&lst, 1);
	Cnode(&lst, 1);
	
	ListNode* res = deleteDuplicates(lst);

	cout << "Result is \n" << endl;
	while (res)
	{
		cout << res -> val  << " ";
		res = res -> next;
	}
	cout << endl;
	return 0;
}




