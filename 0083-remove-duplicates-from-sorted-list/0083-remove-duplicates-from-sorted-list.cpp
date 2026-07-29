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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode * curr=head;
       if(curr==NULL)return curr;
       ListNode * prevnode=NULL;
       if(curr->next==NULL)return head;
       prevnode=curr;
       curr=curr->next;
       while(curr){
          if(curr->val==prevnode->val){
             prevnode->next=curr->next;
             curr=curr->next;
          }
          else{
            curr=curr->next;
            prevnode=prevnode->next;
          }
       } 
       return head;
    }
};