/*
* Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]

*/



ListNode* partition(ListNode* head, int x) {
    ListNode front(-1), back(-1);
    ListNode* p1 = &front, * p2 = &back;

    ListNode* container = head;

    while (container != NULL) {
        if (container->val < x) {
            p1->next = container;
            p1 = p1->next;
        }
        else {
            p2->next = container;
            p2 = p2->next;
        }

        container = container->next;
    }

    p2->next = NULL;
    p1->next = back.next;

    return front.next;
}