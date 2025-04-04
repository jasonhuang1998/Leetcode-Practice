class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* slow_prev = head;

        while(fast != NULL && fast->next != NULL){
            slow_prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        slow_prev->next = NULL;
        return slow;
    }
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* cur = head;

        while(head != NULL){
            head = head->next;
            cur->next = prev;
            prev = cur;
            cur = head;
        }
        return prev;

    }
    void mergeTwoLinkedList(ListNode* node1, ListNode* node2){
        ListNode* node1next;
        ListNode* node2next;
        while(1){
            node1next = node1->next;
            node2next = node2->next;
            node1->next = node2;
            if(node1next != NULL){
                node2->next = node1next;
                node2 = node2next;
                node1 = node1next;
            }
            else
                break;
        } 
    }
    void reorderList(ListNode* head) {
        ListNode* middle;
        ListNode* end;

        middle = findMiddle(head);
        end = reverseLinkedList(middle);
        if (head != end)
            mergeTwoLinkedList(head, end);
    }
};
