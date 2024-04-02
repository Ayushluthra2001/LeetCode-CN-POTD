/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *  QA   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
void solve(TreeNode* cloned, TreeNode* target,TreeNode* &ans){
    if(cloned==NULL) return;
    solve(cloned->left,target,ans);
    if(cloned->val==target->val) {
        ans=cloned;
        return;
    }
    solve(cloned->right,target,ans);
}
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
         TreeNode* ans=NULL;
         solve(cloned,target,ans);
         return ans;
    }
};
