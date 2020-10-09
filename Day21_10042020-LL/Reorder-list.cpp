#include <iostream>
#include <stack>
using namespace std;

class ListNode
{
	public:
		int val;
		ListNode* next;
		ListNode(): val(0), next(NULL) {}
		ListNode(int x): val(x), next(NULL) {}
};


void reorderList(ListNode* head) {
        
        // We atleast need 3 elements to reoder 
        if (!(head) || !(head -> next) || !(head -> next -> next)) return;
        
        
        // Put all the elements in stack
        stack<ListNode*> my_stack;
        
        
        // create a node linking to head to start saving the value in stack.
        ListNode* ptr = (head);
        
        
        // create a size element to save the length of the list
        int size = 0;
        
        
        // while the ptr exist , keep saving the values in stack and moving ahead
        while (ptr)
        {
            // save the elements in stack
            my_stack.push(ptr);
            
            // save the size of the stack
            size++;
            
            // move ptr ahead 
            ptr = ptr -> next;
        }
        
        
        ListNode* pptr = head;
        
        for (int i = 0; i < size/2; i++)
        {
            // create a new node and store top of the stack to this node
            ListNode* element = my_stack.top();
            
            // pop the top as the value is already been used
            my_stack.pop();
            
            // point the element -> next to what ever the head -> next is pointing 
            element -> next = pptr -> next;
            
            // point the pptr -> next to element
            pptr -> next = element;
            
            // jump pptr 2 steps ahead
            pptr = pptr -> next -> next;
        }
        
        pptr -> next = NULL;
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
	
	Cnode(&lst , 4);
	Cnode(&lst , 3);
	Cnode(&lst , 2);
	Cnode(&lst , 1);

	
	reorderList(&lst);


	cout << "The Final list is  " << endl;
	while (lst)
	{
		cout << lst -> val << " ";
		lst = lst -> next;
	}
	cout << endl;
	return 0;
}
