/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode * NODE;
bool hasCycle(struct ListNode *head) {
    NODE s=head,f;
    f=NULL;
    if(head==NULL || head->next==NULL)
    return false;
    while(s!=f)
    {
        if(f==NULL)
        {
            f=s;
        }
        f=f->next->next;
        s=s->next;
        if(s==f)
        {
            return true;
        }
        if(f==NULL||f->next==NULL)
        return false;


    }
    return false;
}
