            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while (slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                    }
                return slow;
                }
            }
        ListNode* fast = head;
        while(fast!= NULL && fast->next != NULL){