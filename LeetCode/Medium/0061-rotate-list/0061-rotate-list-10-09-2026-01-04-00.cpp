class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        // Empty list or single node
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        // Find length and tail
        int length = 1;
        ListNode* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
            length++;
        }

        // Remove unnecessary rotations
        k = k % length;

        if (k == 0)
            return head;

        // Make the list circular
        tail->next = head;

        // Find new tail
        int steps = length - k;

        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        // Node after newTail becomes new head
        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = NULL;

        return newHead;
    }
};