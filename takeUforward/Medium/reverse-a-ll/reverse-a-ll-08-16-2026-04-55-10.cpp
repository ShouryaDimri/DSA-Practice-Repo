public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        while(head != NULL){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
        ListNode* prev= NULL;
};