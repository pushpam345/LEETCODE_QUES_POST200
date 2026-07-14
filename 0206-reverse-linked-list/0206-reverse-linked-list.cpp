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
    ListNode* reverseList(ListNode* head) {
        ListNode * curr=head;
        ListNode * prevnode=NULL;
         while(curr){
            ListNode * temp =prevnode;
            prevnode=curr;
            curr=curr->next;
            prevnode->next=temp;

            

         }
         return prevnode;
    }
};