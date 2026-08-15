class Solution {
public:
    ListNode *deleteHead(ListNode *&head) {
        // Your code goes here
        ListNode* temp = head;
        head = head->next;        
        delete temp;
        return head;
    }
        head->prev = nullptr;
        if(head == nullptr || head->next ==nullptr){
            return nullptr;
        }