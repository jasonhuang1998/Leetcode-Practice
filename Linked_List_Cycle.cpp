class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast;
        ListNode* slow;

        slow = head;
        fast = head;
        do{
            if (!fast || !fast -> next)
                return false;
            slow = slow -> next;
            fast = fast -> next -> next;

        }while(fast != slow);
        return true;
    }
};
