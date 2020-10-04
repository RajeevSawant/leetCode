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

/*
 *
Several memory leaks are avoided here:

The dummy node. It doesn't need to be a pointer. It can be allocated on the stack like this ListNode dummy(0); dummy.next = head; cur= &dummy;
When skipping over the duplicate nodes with out deallocating them as well the memory is leaked. C/C++ doesn't have GC, it's the developer's responsibility to delete/free memory allocated on the heap.
 *
 */

ListNode* deleteDuplicates(ListNode* head)
{
	if (head == NULL || head -> next == NULL) return head;

	ListNode dummyHead(0); dummyHead.next = head;
	ListNode* cur = head; ListNode* prev = &dummyHead;

	
	while(cur && cur -> next)
	{
		
		if (cur -> val == cur -> next -> val)
		{
			int duplicate = cur -> val;

			while (cur && cur -> val == duplicate)
			{
				prev -> next = cur -> next;
				delete cur;
				cur = prev -> next;
			}

		}
		else
		{
			prev = cur;
			cur = cur -> next;
		}

	}

	return dummyHead.next;

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
	
	ListNode *res = NULL, *lst = NULL;

	Cnode(&lst , 5);
	Cnode(&lst , 4);
	Cnode(&lst , 4);
	Cnode(&lst , 3);
	Cnode(&lst , 3);
	Cnode(&lst , 2);
	Cnode(&lst , 1);


	res = deleteDuplicates(lst);
	
	cout << "The result list is "<<endl;
	while(res)
	{
		cout << res -> val  << " ";
		res = res -> next;
	}
	cout << endl;
	return 0;
}


