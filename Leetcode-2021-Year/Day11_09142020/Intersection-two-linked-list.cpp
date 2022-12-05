#include <iostream>
#include <map>
using namespace std;

class ListNode
{
	public:
		int val;
		ListNode* next;
		ListNode(): val(0), next(NULL) {}
		ListNode(int x): val(x), next(NULL) {}
};


ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
	map<ListNode* , int> L;

	if (headA ==  NULL || headB == NULL) return NULL;

	ListNode* cur = headA;

	while(cur)
	{
		L[cur] = 1;
		cur = cur -> next;
	}

	cur = headB;

	while(cur)
	{
		if (L.find(cur) != L.end())
			return cur;
		
		cur = cur -> next;
	}

	return NULL;
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
	ListNode* inp1 = NULL;
	ListNode* inp2 = NULL;

	Cnode(&inp1, 5);
	Cnode(&inp1, 4);
	Cnode(&inp1, 8);
	Cnode(&inp1, 1);
	Cnode(&inp1, 4);

	
	Cnode(&inp2, 1);
	Cnode(&inp2, 6);
	Cnode(&inp2, 5);

	ListNode* bk = inp2;
	
	while(bk -> next != NULL) bk = bk -> next;

	bk -> next = inp1 -> next -> next;
	
	ListNode * res = getIntersectionNode(inp1, inp2);
	cout << "The Intersection of Two LinkedList is  " << res -> val << endl;

	return 0;
}


