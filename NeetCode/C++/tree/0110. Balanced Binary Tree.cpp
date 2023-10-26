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
    int Height(TreeNode*tree){
        if(tree==NULL){
            return 0;
        }  
        int L=Height(tree->left);
        int R=Height(tree->right);
        if(L==-1 ||R==-1)return -1;
       return abs(L-R)<=1?max(L,R)+1:-1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return Height(root)!=-1;
    }
};