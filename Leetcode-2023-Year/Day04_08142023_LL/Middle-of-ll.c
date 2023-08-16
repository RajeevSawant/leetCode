/*
* Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

struct listNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};
*/


// C++

ListNode* middleNode(ListNode* head) {
    ListNode* front = head, * back = head;

    while ((front != NULL) && (front->next != NULL)) {
        front = front->next->next;
        back = back->next;
    }

    return back;

}