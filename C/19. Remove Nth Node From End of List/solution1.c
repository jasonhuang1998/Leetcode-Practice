/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int Node_num(struct ListNode* head)
{
    int num = 1;
    while((*head).next != NULL)
    {
        num++;
        head = (*head).next;
    }
    return num;
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode* ptr = head;
    int nthFromStart = Node_num(head) - n;
    if(nthFromStart == 0)
        return (*head).next;
    int cnt = 1;
    while(cnt < nthFromStart)
    {
        ptr = (*ptr).next;
        cnt++;
    }
    (*ptr).next = (*(*ptr).next).next;
    return head;
}