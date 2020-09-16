#include <iostream>
#include <unordered_map>
using namespace std;


unordered_map <Node* , Node*> mp;

Node* copyRandomList (Node* head)
{
	if (head == NULL) return NULL;
	if (mp[head] != NULL) return mp[head];

	mp[head] = new Node(head -> val);
	mp[head] -> next = copyRandomList(head -> next);
	mp[head] -> random = copyRandomList(head -> random);

	return mp[head];
}



