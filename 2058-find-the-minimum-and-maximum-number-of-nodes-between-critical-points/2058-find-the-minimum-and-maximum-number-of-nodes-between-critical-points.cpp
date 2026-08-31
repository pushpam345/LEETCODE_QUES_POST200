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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // if(head->next->next==NULL)return {-1,-1};
        int first=-1;
        int a=-1, b=-1;
        int curr=1;
        int minlen=INT_MAX;
        ListNode * prev=head;
        head=head->next;
        while(head->next!=NULL){
            if((head->val>head->next->val && head->val>prev->val) || (head->val<head->next->val && head->val<prev->val)){
                if(a==-1 && b==-1){
                   a=curr;b=curr;
                   first=curr;
                }
                else{
                    a=b;
                    b=curr;
                }
                if(a!=b)
                minlen=min(minlen,abs(b-a));
            }
            curr++;
            prev=head;
            head=head->next;
        }
        if(a==b)return{-1,-1};
        return {minlen,b-first};
    }
};