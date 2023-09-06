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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*curr=head;
        int len=0;
        while(curr){
            len++;
            curr=curr->next;
        }
        if(len==n){
            ListNode*temp=head;
            head=temp->next;
            delete temp;
            return head;
        }
        curr=head;
        for(int i=0;i<len;i++){
            if(i==len-n-1){
                ListNode*temp2=curr->next;
                curr->next=temp2->next;
                delete temp2;
                break;
            }
            curr=curr->next;
        }
        return head;
    }
};