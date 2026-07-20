/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        ListNode * head1=headA;
        ListNode * head2=headB;
        if(head1==head2)return head1;
        while(head1 != head2){
            
            if(head1)head1=head1->next;
            else head1=headB;
            if(head2)head2=head2->next;
            else head2=headA;
            if(head1==head2)return head1;

        }
        return NULL;

        


        
    }
};