/*
* Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.



Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10



 struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
*/


// C++ , almost same for C.
int getDecimalValue(ListNode* head) {

    ListNode* iter = head;
    int res = 0;

    while (iter != NULL) {
        res <<= 1;
        res |= iter->val;
        iter = iter->next;
    }

    return res;
}