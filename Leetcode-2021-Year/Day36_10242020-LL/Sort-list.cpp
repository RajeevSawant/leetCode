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

ListNode* merge(ListNode* l1, ListNode* l2)
{
	ListNode dump(0);
	ListNode* cur = &dump;


	while(l1 != NULL && l2 != NULL)
	{
		if (l1 -> val < l2 -> val)
		{
			cur -> next = l1;	
			l1 = l1 -> next;
		}
		else
		{
			cur -> next = l2;
			l2 = l2 -> next;
		}

		cur = cur -> next;
	}

	if (l1 != NULL)
	{
		cur -> next = l1;
	}
	else
	{
		cur -> next = l2;
	}
	return dump.next;

}

ListNode* sortList(ListNode* head)
{
	if (head == NULL || head -> next == NULL)
		return head;

	ListNode* slow = head;
	ListNode* fast = head -> next;
	
	while (fast != NULL && fast -> next != NULL)
	{
		slow = slow -> next;
		fast = fast -> next -> next;
	}

	// divide the list into 2 parts
	fast = slow -> next;
       	slow -> next = NULL;

	return merge(sortList(head), sortList(fast));	
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
	ListNode* ll = NULL;

	Cnode(&ll, 3);
	Cnode(&ll, 1);
	Cnode(&ll, 2);
	Cnode(&ll, 4);



	ListNode* rst = sortList(ll);

	cout <<"The sorted list is "<<endl;
	
	while(rst)
	{	
		cout << rst -> val << " ";
		rst = rst -> next;
	}

	cout << endl;

	return 0;
}	
