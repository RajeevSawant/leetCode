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


ListNode* rotateRight(ListNode* head, int k)
{
     if (head == NULL || head -> next == NULL || k == 0) return head;

     int size = 1;
     ListNode *node = head;

     
     while(node -> next != NULL)
     {
	size++;
	node = node -> next;
     }

     cout << "Size is " << size << endl;

     node -> next = head;

     k = k % size;

     while (--size >= k)
     {
	node = node -> next;
     }

     
     ListNode* front = node -> next;
     node -> next = NULL;
	
     return front;
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
	cout << "The parameters are \n";

	while (cur)
	{
		cout << cur -> val << " ";
		cur = cur -> next;	
	}
	
	cout << endl;
}



int main()
{
	ListNode *res, *lst;
	
	Cnode(&lst , 5);
	Cnode(&lst , 4);
	Cnode(&lst , 3);
	Cnode(&lst , 2);
	Cnode(&lst , 1);
	
	res = rotateRight(lst, 2);

	printList(res);
	
	return 0;
}

