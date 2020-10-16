#include <iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}

};



int getDecimalValue(ListNode* head)
{
	
	int ret = 0;

	while (head)
	{
		ret <<= 1;
		ret |= head -> val;
		head = head -> next;
	}

	return ret;
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

	Cnode(&lst, 1);
	Cnode(&lst, 0);
	Cnode(&lst, 1);
	Cnode(&lst, 1);


	int res = getDecimalValue(lst);

	cout << "The decimal value is " << res << endl;
	return 0;
}

