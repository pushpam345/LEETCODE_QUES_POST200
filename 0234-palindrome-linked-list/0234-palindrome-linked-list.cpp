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
ListNode * reversell(ListNode * head){
        ListNode * curr = head;
        ListNode * prevnode=NULL;
        while(curr){
            ListNode * temp=curr;
            curr=curr->next;
            temp->next=prevnode;
            prevnode=temp;
            
            
            
        }
        return prevnode;
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode * temp=slow;
        slow=reversell(slow);
        bool pall=1;
        while(slow){
            if (slow->val!=head->val){
                return 0;
            }
            slow=slow->next;
            head=head->next;
        }
        return pall;


        
    }
};