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

	ListNode* cur = head;

	while(cur && cur -> next)
	{
		if (cur -> val == cur -> next -> val)
		{
			ListNode* temp = cur -> next;
			cur -> next = cur -> next -> next;
			delete temp;
		}
		else
		{
			cur = cur -> next;
		}
	}

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




