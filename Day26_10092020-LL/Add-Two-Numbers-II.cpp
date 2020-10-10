#include <iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode* next;
	ListNode(): val(0), next(NULL) {}
	ListNode(int x): val(x), next(NULL) {}
};


ListNode* addTwoDigit(ListNode* l1, ListNode* l2, int &carry)
{
	
	if (l1 == NULL && l2 == NULL)
		return NULL;


	ListNode* newNode = new ListNode(-1);
	newNode -> next = addTwoDigit(l1 -> next, l2 -> next, carry);
       	
	newNode -> val = (l1 -> val + l2 -> val + carry) % 10;
	
	carry = (l1 -> val + l2 -> val + carry) / 10;

	return newNode;	
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	
	ListNode *ptr1 = l1, *ptr2 = l2;

	while(ptr1 != NULL || ptr2 != NULL)
	{
		
		if (ptr1 == NULL)
		{
			ListNode* newNode = new ListNode();
			newNode -> next = l1;

			l1 = newNode;

			ptr2 = ptr2 -> next;
		}
		else if (ptr2 == NULL)
		{
		 	ListNode* newNode = new ListNode();
			newNode -> next = l2;

			l2 = newNode;

			ptr1 = ptr1 -> next;	
		}
		else
		{
			ptr1 = ptr1 -> next;
			ptr2 = ptr2 -> next;
		}
	}


	int carry = 0;
	ListNode* dummy = new ListNode(-1);

	dummy -> next = addTwoDigit(l1 , l2, carry);


	if (carry != 0)
	{
		ListNode* newNode = new ListNode(carry);
		newNode -> next = dummy -> next;
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
