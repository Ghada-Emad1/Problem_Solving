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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        //first if root is null return empty res
        if(root==NULL)return res;
        queue<TreeNode*>Q;
 
        
        Q.push(root);
        while(!Q.empty()){
            int count=Q.size();
            vector<int>curr;
  
            //loop through the current count of queue
            for(int i=0;i<count;i++){
                TreeNode*node=Q.front();
                
                curr.push_back(node->val);
                 Q.pop();
                if(node->left!=NULL){
                    Q.push(node->left);
                }

                if(node->right!=NULL){
                    Q.push(node->right);
                }
            }
            res.push_back(curr);
        }
       return res;
    }
};