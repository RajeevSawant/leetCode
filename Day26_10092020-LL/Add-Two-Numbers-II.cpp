#include <iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
};


ListNode* addTwoDigits(ListNode* l1 , ListNode* l2, int &carry)
{
        // l1 & l2 is NULL return NULL
        if (l1 == NULL && l2 == NULL)
            return NULL;
        
        // Create a newNode and assign it -1.
        ListNode* newNode = new ListNode(-1);
        
        // recursive call to addTwoDigits to add the next elements 
        newNode -> next = addTwoDigits(l1 -> next, l2 -> next, carry);
        
        // Add the values and save starting from the last element
        newNode -> val = (l1 -> val + l2  -> val + carry) % 10;
        
        // get the carry 
        carry = (l1 -> val + l2 -> val + carry) / 10;
        
        // return the head of the newNode
        return newNode;
}
    
    
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        // Adding zeros to the start of the list
        ListNode *ptr1 = l1, *ptr2 = l2;
        
        while(ptr1 != NULL || ptr2 != NULL)
        {
            // check if the ptr1 is NULL this will happen if the prt1 is smaller
            if (ptr1 == NULL)
            {
                // create new node with val equals to 0
                ListNode* newNode = new ListNode();
                
                // assign l1 to next of newNode
                newNode -> next = l1;
                
                // save l1 equal to newNode;
                l1 = newNode;
                
                // Move the other list ahead to check if there are any pending elements
                ptr2 = ptr2 -> next;
            }
            else if (ptr2 == NULL) //check if the ptr1 is NULL this will happen if the prt1 is smaller
            {
                // create new node with val equals to 0
                ListNode* newNode = new ListNode();
                
                // assign l2 to next of newNode
                newNode -> next = l2;
                
                // save l2 equal to newNode;
                l2 = newNode;
                
                // Move the other list ahead to check if there are any pending elements
                ptr1 = ptr1 -> next;
            }
            else
            {
                
                // We enter this part of the condition when we have elements in both the list
                ptr1 = ptr1 -> next;
                ptr2 = ptr2 -> next;
            }
            
        }
        
        
        // to save the value of carry
        int carry = 0;
        
        // dummy to return at the end of the list
        ListNode* dummy = new ListNode(-1);
        
        // store the result in dummy , call the func to add twodigits 
        dummy -> next = addTwoDigits(l1 , l2, carry);
        
        
        if(carry != 0)
        {
            // create a new Node with carry as value 
            ListNode* newNode = new ListNode(carry);
            
            // save the dummy -> next to newNode -> next
            newNode -> next = dummy -> next;
            
            // save newNode to dummy -> next
            dummy -> next = newNode;
        }
        
        return dummy -> next;
}



void Cnode (ListNode** head_ref, int data)
{
	ListNode* cur = new ListNode();

	cur -> val = data;
	cur -> next = (*head_ref);

	(*head_ref) = cur;
}


int main()
{
	ListNode* inp1, *inp2;
	
	Cnode(&inp1, 3);
	Cnode(&inp1, 4);
	Cnode(&inp1, 2);
	Cnode(&inp1, 7);
	
	Cnode(&inp2, 4);
	Cnode(&inp2, 6);
	Cnode(&inp2, 5);


	ListNode* res = addTwoNumbers(inp1, inp2);

	cout << "The result sum is \n";
	while(res)
	{
		cout << res -> val << " ";
		res = res -> next;
	}
	cout << endl;

	return 0;
}
