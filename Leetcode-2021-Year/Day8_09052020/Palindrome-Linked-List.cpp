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

ListNode* temp = NULL;


bool isCheck(ListNode* p)
{
	if (p == NULL) return true;
	bool res = isCheck(p -> next) && (p -> val == temp -> val);

	temp = temp -> next;
	return res;
}

bool isPalindrome(ListNode* head)
{
	temp = head;
	return isCheck(head);
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
	while (cur)
	{	
		cout << " " << cur -> val;
		cur = cur -> next;
	}

	cout << endl;
}


int main()
{
	ListNode* lst = NULL;

	Cnode(&lst, 1);
	Cnode(&lst, 2);
	Cnode(&lst, 2);
	Cnode(&lst, 1);

	// Print the list
	printList(lst);

	cout << "Is the list Palindrome: " <<std::boolalpha << isPalindrome(lst) << endl;

	return 0;
}

