/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode* ptr1 = head;
    struct ListNode* ptr2 = head;
    while(n != 0)
    {
        ptr1 = (*ptr1).next;
        n--;
    }
    if(ptr1 == NULL)
        return (*head).next;
    while((*ptr1).next != NULL)
    {
        ptr1 = (*ptr1).next;
        ptr2 = (*ptr2).next;
    }
    (*ptr2).next = (*(*ptr2).next).next;
    return head;
}