
class Solution {
};
    ListNode(int x, ListNode *next) : data(x), next(next) {}
*/
    public:
        ListNode* insertAtHead(ListNode* &head, int X) {
            //your code goes here
            ListNode* newnode = new ListNode(X);
            newnode->next = head;
            head = newnode;
            return head;
        }