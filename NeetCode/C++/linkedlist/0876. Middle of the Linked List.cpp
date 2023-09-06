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
    ListNode* middleNode(ListNode* head) {
        ListNode*p1=head;
        ListNode*p2=head;
        while(p2!=NULL && p2->next!=NULL){
            p1=p1->next;
            p2=p2->next->next; //p2 walk two step until it reach to the end
            //of the list while p1 is walking step one to the middle
        }
        return p1;
    }
};