/*
* You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
*/



// main code:


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int sum = 0, carry = 0;

    ListNode dummy, * res = &dummy;

    while (l1 || l2 || carry) {
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        res->next = new ListNode(sum % 10);

        res = res->next;
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
    }

    return dummy.next;

}