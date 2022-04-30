/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *pt1, *pt2, *pt3, *ans;
    ans = (struct ListNode*) malloc(sizeof(struct ListNode));
    (*ans).next = NULL;
    pt1 = l1;
    pt2 = l2;
    pt3 = ans;
    int check[2] = {1, 1};
    int carry = 0;
    
    while((*pt1).next != NULL || (*pt2).next != NULL)
    {
        (*pt3).val = ((*pt1).val*check[0] + (*pt2).val*check[1] + carry) % 10;
        // printf("%d\n", (*pt3).val);
        carry = ((*pt1).val*check[0] + (*pt2).val*check[1] + carry) / 10;
        if((*pt1).next != NULL)
            pt1 = (*pt1).next;
        else
            check[0] = 0;
        if((*pt2).next != NULL)
            pt2 = (*pt2).next;
        else
            check[1] = 0;
        if(check[0] != 0 || check[1] != 0)
        {
            struct ListNode *next_node;
            next_node = (struct ListNode*) malloc(sizeof(struct ListNode));
            (*next_node).next = NULL;
            (*pt3).next = next_node;
            pt3 = (*pt3).next;
        }
    }
    (*pt3).val = ((*pt1).val*check[0] + (*pt2).val*check[1] + carry) % 10;
    if(((*pt1).val*check[0] + (*pt2).val*check[1] + carry) / 10 != 0)
    {
        struct ListNode *next_node;
        next_node = (struct ListNode*) malloc(sizeof(struct ListNode));
        (*next_node).val = 1;
        (*next_node).next = NULL;
        (*pt3).next = next_node;

    }
    return ans;
}