class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // Base case
        if (head == nullptr || head->next == nullptr)
            return head;

        // Find middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split the list into two halves
        ListNode* right = slow->next;
        slow->next = nullptr;

        // Sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge the sorted halves
        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (left != nullptr && right != nullptr) {
            if (left->val <= right->val) {
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }

            temp = temp->next;
        }

        // Attach remaining nodes
        if (left != nullptr)
            temp->next = left;
        else
            temp->next = right;

        return dummy.next;
    }
};