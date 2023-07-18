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
     private:
     ListNode*reverse(ListNode*head){
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*Next;
        while(curr)
        {
           Next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=Next;
        }
        return prev;
    }
public:
    int pairSum(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*res=reverse(slow);
        int ans=0;
        while(res){
            ans=max(ans,res->val+head->val);
            head=head->next;
            res=res->next;
        }
    return ans;
    }
};