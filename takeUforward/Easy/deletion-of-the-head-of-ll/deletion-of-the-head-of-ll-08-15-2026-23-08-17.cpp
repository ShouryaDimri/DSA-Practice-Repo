    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
        //your code goes here
        ListNode* temp = head;
        head = head->next;
        delete temp; 
        //value of temp = address of head
        //head= address of next element