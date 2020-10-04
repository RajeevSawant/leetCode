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


void reorderList(ListNode** head)
{
	if (!(*head) || !((*head) -> next) || !((*head) -> next -> next)) return;


	stack<ListNode*> my_stack;

	ListNode* ptr = (*head);
	int size = 0;

	while(ptr != NULL)
	{
		my_stack.push(ptr);
		size++;
		ptr = ptr -> next;
	}


	ListNode* pptr = (*head);

	// Between every two nodes insert the one in the top of the stack
	for (int j = 0; j < size/2; j++)
	{
		ListNode* element = my_stack.top();
		my_stack.pop();
		element -> next = pptr -> next;
		
		pptr -> next = element;
		pptr = pptr -> next -> next;
	}

	pptr ->  next = NULL;
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
