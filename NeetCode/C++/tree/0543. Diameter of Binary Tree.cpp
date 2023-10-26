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
    private: 
    int Height(TreeNode* tree,int&ans){
        if(tree==NULL)return 0;
        int L=Height(tree->left,ans);
        int R=Height(tree->right,ans);
        ans=max(ans,L+R);
        return max(L,R)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       int ans=0;
       Height(root,ans);
       return ans;
    }
    
};