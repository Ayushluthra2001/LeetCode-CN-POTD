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
    void solve(TreeNode* root ,int level, unordered_map<int,long long>&mapping){
        if(root==NULL) return;
        solve(root->left,level+1,mapping);
        mapping[level]+=root->val;
        solve(root->right,level+1,mapping);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        unordered_map<int,long long >mapping;
        solve(root,0,mapping);
        vector<long long>ans;
        for(auto i : mapping){
            ans.push_back(i.second);
        }
        sort(ans.begin(),ans.end());
        if(k>ans.size()) return -1;
        return ans[ans.size()-k];
       
    }
};
