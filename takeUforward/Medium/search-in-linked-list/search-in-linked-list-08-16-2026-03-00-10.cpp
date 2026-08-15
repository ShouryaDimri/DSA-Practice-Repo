public:
    bool searchKey(ListNode* head, int key) {
        // Your code goes here
        while(head != nullptr){
            if(head->val == key){
                return true;
            }


class Solution {
            head = head->next;
            //compare value of head
            //change head point to next element node every iteration