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
    int pairSum(ListNode* head) {
        vector<int>v;
        while(head!=NULL){
           v.push_back(head->val);
           head=head->next;
        }
        int n=v.size();
        vector<int>res;
        for(int i=0;i<v.size();i++){
            res.push_back(v[i]+v[n-1-i]);
        }
        auto max=*max_element(res.begin(), res.end());
        return max;
    }
};