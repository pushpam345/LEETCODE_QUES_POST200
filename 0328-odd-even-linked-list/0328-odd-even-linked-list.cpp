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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || ! head->next->next){
            return head;
        }
        ListNode * evennode = head;
        ListNode * oddnode = head->next;
        ListNode * temp = oddnode->next;
        ListNode * linkingnode = oddnode;
        bool even = true ;

        while(temp){
            if(even){
                evennode->next=temp;
                evennode=evennode->next;
                even=0;
                
            }
            else{
                oddnode->next=temp;
                oddnode=oddnode->next;
                even=1;
            }
            temp=temp->next;
        }
        evennode->next=linkingnode;
        oddnode->next=NULL;
        return head;
        
    }
};