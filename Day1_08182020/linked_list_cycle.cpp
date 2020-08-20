
#include <iostream>
using namespace std;

class ListNode
{
	public:
		int val;
		ListNode* next;
		ListNode() {}
		ListNode(int x): val(x), next(NULL) {} 
};


bool hasAcycle (ListNode* head)
{
	ListNode *slow = head, *fast = head -> next;

	while (slow && fast && fast -> next)
	{
		fast = fast -> next -> next;
		slow = slow -> next;
		if (slow == fast) return true;
	}

	return false;
}

void printList (ListNode* node)
{
	while (node != NULL)
	{
	      cout << " " << node -> val;
	      node = node -> next;	
	}
	cout << endl;
}


int main()
{
	ListNode* a = new ListNode(3);
	a -> next = new ListNode(2);
	a -> next -> next = new ListNode(0);
	a -> next -> next -> next = new ListNode(-4);

	a -> next -> next -> next -> next = a -> next;


	//printList(a);

	cout << "Does LinkList have a Cycle ? \n" << std::boolalpha << hasAcycle(a) << endl;

	return 0;
}

