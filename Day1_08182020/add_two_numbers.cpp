#include <iostream>
using namespace std;


class ListNode
{
	public:
		int val;
		ListNode *next;
		ListNode() {}
		ListNode(int x) : val(x), next(NULL) {}

};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode p(0), *result = &p;
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;
	
	int carry = 0, sum = 0;
	

	while (l1 || l2 || carry){

		sum = (l1 ? l1 -> val : 0) + (l2 ? l2 -> val : 0) + carry;
		carry = sum / 10;
		result -> next  = new ListNode (sum % 10);

		result = result -> next;
		l1 = l1 ? l1 -> next : NULL;
		l2 = l2 ? l2 -> next : NULL;
	}

	return p.next;
}


void insert (ListNode** head_ref, int data)
{
	ListNode* node = new ListNode();

	node -> val = data;
	node -> next = NULL;

	*head_ref = node;
}


void printList (ListNode* node)
{
	
	while (node != NULL)
	{
	    cout << " " << node -> val;
	    node = node -> next;
	}

}


int main()
{

	ListNode *a = new ListNode(3);
	  a -> next = new ListNode(4);
	  a -> next -> next = new ListNode(2);

	  cout << "1st Linklist contains \n";
	  printList(a);
	  cout << endl;

        ListNode *b = new ListNode(4);
	  b -> next = new ListNode(6);
	  b -> next -> next = new ListNode(5);
	
	  cout << "1st Linklist contains \n" ;
	  printList(b);
	  cout << endl;
       
	 ListNode *c  = addTwoNumbers(a , b);
   

	  cout << "1st Linklist contains \n" ;
	  printList(c);
	  cout << endl;

 return 0;
}

