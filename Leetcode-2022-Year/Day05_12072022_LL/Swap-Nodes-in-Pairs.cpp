/*
* Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
* 
* 
* Input: head = [1,2,3,4]
Output: [2,1,4,3]
*/

ListNode* swapPairs(ListNode* head) {

    if (!head || !(head->next)) {
        return head;
    }

    ListNode* second = head->next;
    ListNode* third = head->next->next;

    second->next = head;
    head->next = swapPairs(third);

    return second;
}