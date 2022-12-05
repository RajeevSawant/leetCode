#include <iostream>
#include <vector>
using namespace std;

struct ListNode{

	int val;
	ListNode* next
	ListNode(int x): val(x), next(NULL) {}
};

vector<ListNode*> splitlistToParts(ListNode* root, int k)
{
	vector<ListNode*> parts(k, NULL);
	
	int len = 0;

	for (ListNode* node = root; node; node = node -> next)
		len++;

	// n: minimum guaranteed parts size
	// r: extra nodes spread to the first r parts
	int n = len / k, r = len % k;

	
	ListNode* node = root, *prev = NULL;

	for (int i = 0; node && i < k; i++, r--)
	{
		part[i] = node;
		for (int j = 0; j < n + (r > 0); j++)
		{
			prev = node;
			node = node -> next;	
		}
	}

	return parts;
}
