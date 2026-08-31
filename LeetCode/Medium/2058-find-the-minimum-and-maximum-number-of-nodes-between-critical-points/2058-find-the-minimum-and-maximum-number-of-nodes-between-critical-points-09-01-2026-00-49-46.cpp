/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *temp = head;
        ListNode *prev =NULL;
        int mini=INT_MAX;
        int maxi =-1;
        int tempmin =-1;
        int tempmax= -1;
        int pos =0;
        while( temp != NULL && temp->next != NULL){
            if(temp->next != NULL && prev != NULL){
                if(temp->next->val> temp->val && prev->val > temp->val){
                    if(tempmin == -1){
                        tempmin = pos;
                    }
                    else{
                        mini = min(mini, pos-tempmax);
                    }
                    tempmax = pos;
                }
                if(temp->next->val < temp->val && prev->val <temp->val){
                    if(tempmin == -1){
                        tempmin = pos;
                    }
                    else{
                        mini = min(mini, pos-tempmax);
                    }
                    tempmax = pos;
                }
            }
            prev = temp;
            temp= temp->next;
            pos++;
        }
        if(tempmin == -1 || tempmin == tempmax){
            return {-1,-1};
        }
        maxi = tempmax- tempmin;
        return {mini, maxi};
    }
};