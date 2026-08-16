        ListNode* temp = head;
        while(temp != NULL){
        unordered_set<ListNode*> hash;
            if(hash.find(temp)!= hash.end()){
                return true;
            }
            hash.insert(temp);
            temp = temp->next;
        }
        return false;
    }
};