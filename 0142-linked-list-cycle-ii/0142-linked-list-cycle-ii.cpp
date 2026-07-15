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
    ListNode *detectCycle(ListNode *head) {
         if(!head)return NULL;
         
        ListNode * tort= head;
        ListNode * rabbit=head;
        
        while(rabbit !=NULL &&  rabbit->next !=NULL){
            
            tort=tort->next;
            rabbit=rabbit->next->next;
            if(tort==rabbit){
                break;
            }
            

        }
        if(!(rabbit && rabbit->next))return NULL;
        while( head != tort){
            head=head->next;
            tort=tort->next;
        }
        return head;
        
    }
};