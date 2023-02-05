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
    bool solve(TreeNode* root){
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL) {
            if(root->val==3 || root->val==2) return false;
            return root->val;
        }
        bool left=solve(root->left);
        bool right=solve(root->right);
        if(root->val==3) return left&& right;
        return left || right;
    }
    bool evaluateTree(TreeNode* root) {
        return solve(root);
    }
};
