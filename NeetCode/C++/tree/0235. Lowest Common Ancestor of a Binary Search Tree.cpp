/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if values is lesser the value of root --> go to left 
      if(p->val > root->val && q->val > root->val){
          return lowestCommonAncestor(root->right,p,q);
      }
      //if values is greater the value of root --> go to right
      else if(p->val < root->val && q->val < root->val){
          return lowestCommonAncestor(root->left,p,q);
      }
      else return root;
    }
};