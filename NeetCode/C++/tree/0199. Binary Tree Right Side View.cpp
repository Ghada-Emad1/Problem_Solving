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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(root==NULL)return {};
        
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            int count=Q.size();
            for(int i=1;i<=count;i++){
                TreeNode*node=Q.front();
                Q.pop();
                if(count==i)res.push_back(node->val);
                
                if(node->left!=NULL)Q.push(node->left);
                if(node->right!=NULL){
                    Q.push(node->right);
                }
            }
        }
        return res;
    }
};