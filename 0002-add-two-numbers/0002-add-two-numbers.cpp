/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry=0;
        ListNode * temp=l1;
        ListNode * head=new ListNode();
        ListNode * curr=head;
        int a;
        while(l1 || l2 || carry){
            int x=l1?l1->val:0;
            int y=l2?l2->val:0;
            int num=x+y+carry;
            carry=num/10;
            ListNode * temp=new ListNode(num%10);
            curr->next=temp;
            curr=curr->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
            
            
            
            
        }
        return head->next;
        
        
    }
};