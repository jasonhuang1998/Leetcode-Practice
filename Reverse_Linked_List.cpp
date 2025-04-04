class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        while(head!=NULL){
            head = head->next;
            cur->next = prev;
            prev = cur;
            cur = head;
        }
        return prev;
    }
};
