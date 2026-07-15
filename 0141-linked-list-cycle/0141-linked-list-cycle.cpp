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
    bool hasCycle(ListNode *head) {
        ListNode * tort= head;
        if(!head)return 0;
        ListNode * rabbit=head->next;
        while(rabbit !=NULL &&  rabbit->next !=NULL){
            if(tort==rabbit){
                return 1;
            }
            tort=tort->next;
            rabbit=rabbit->next->next;

        }
        return false;
    }
};