#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;



class ListNode
{
	public:
		int val;
		ListNode* next;
		ListNode(): val(0), next(NULL) {}
		ListNode(int x): val(x), next(NULL) {}
};


int numComponents(ListNode* head, vector<int>& G)
{
	unordered_set<int> s (G.begin(), G.end());
	int res = 0;

	while(head)
	{
		if (s.count(head -> val) && (head -> next == NULL || !(s.count(head -> next -> val)))) res++;

		head = head -> next;
	}
	
	return res;
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
	while(cur)
	{
		cout << " " << cur -> val;
		cur = cur -> next;
	}

	cout << endl;
}


int main()
{
	ListNode* lst = NULL;
	
	Cnode(&lst , 3);
	Cnode(&lst , 2);
	Cnode(&lst , 1);
	Cnode(&lst , 0);
	
	
	vector<int> gr(3, 0);
	gr.push_back(0);
	gr.push_back(1);
	gr.push_back(3);

	//Print the list
	printList(lst);


	cout << "The Number  of Components are " << numComponents(lst, gr) << endl;
	return 0;
}



