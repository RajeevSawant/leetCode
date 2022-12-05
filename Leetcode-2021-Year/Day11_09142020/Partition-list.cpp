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

ListNode* partition(ListNode* head, int x)
{
	ListNode node1(0), node2(0);
	ListNode *p1 = &node1, *p2 = &node2;

	while (head != NULL)
	{
		if (head -> val < x)
		{
			p1 -> next = head; 	
			p1 = p1 -> next;
		}
		else
		{	
			p2 -> next = head;
			p2 = p2 -> next;
		}

		head = head -> next;
	}
	
	p1 -> next = node2.next;
	p2 -> next = NULL;

	return node1.next;
}


void Cnode(ListNode** head_ref, int data)
{
	ListNode* cur = new ListNode();

	cur -> val = data;
	cur -> next = (*head_ref);

	(*head_ref) = cur;
}


void printList(ListNode* head)
{
	cout <<"\nThe Data in the list are as follows \n";
	while (head)
	{
		cout << " " << head -> val;
	       	head = head -> next;
	}
	cout << endl;
}


int main()
{
	ListNode* inp1 = NULL, *res;

	Cnode(&inp1 , 2);
	Cnode(&inp1 , 5);
	Cnode(&inp1 , 2);
	Cnode(&inp1 , 3);
	Cnode(&inp1 , 4);
	Cnode(&inp1 , 1);

	printList(inp1);

	res = partition(inp1 , 3);

	cout << "\nThe result Partition List\n";
	printList(res);

	return 0;
}
