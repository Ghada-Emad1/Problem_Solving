/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
public:
    int goodNodes(TreeNode* root) {
        int res=0;
        counting(root,root->val,res);
        return res;
    }
    private:
    void counting(TreeNode*root,int maximum, int& res){
        if(root==NULL)return;
        if(root->val>= maximum)res++;
        counting(root->right,max(maximum,root->val),res);
        counting(root->left,max(maximum,root->val),res);
    }
};