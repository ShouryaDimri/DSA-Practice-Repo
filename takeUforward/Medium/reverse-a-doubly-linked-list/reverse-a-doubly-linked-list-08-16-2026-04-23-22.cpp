public:

class Solution {
};
*/
    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
    ListNode* reverseDLL(ListNode* head) {
        // Your code goes here
        if(head == NULL) return NULL;
        while(head != NULL){
            swap(head->next,head->prev);
            if(head->prev == nullptr){
                return head;
            }